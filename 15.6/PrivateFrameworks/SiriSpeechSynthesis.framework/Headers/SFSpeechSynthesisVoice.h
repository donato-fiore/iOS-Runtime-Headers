// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSPEECHSYNTHESISVOICE_H
#define SFSPEECHSYNTHESISVOICE_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "SFSSResourceAsset.h"
#import "SFSpeechSynthesisServerVoiceConfig.h"
#import "SFSSVoiceAsset.h"

@interface SFSpeechSynthesisVoice : NSObject

@property (readonly, nonatomic) NSString *gender; // ivar: _gender
@property (readonly, nonatomic) BOOL isDefault; // ivar: _isDefault
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) SFSSResourceAsset *resourceAsset; // ivar: _resourceAsset
@property (retain, nonatomic) SFSpeechSynthesisServerVoiceConfig *serverVoiceConfig; // ivar: _serverVoiceConfig
@property (retain, nonatomic) SFSSVoiceAsset *voiceAsset; // ivar: _voiceAsset
@property (nonatomic) NSInteger voiceReleaseType; // ivar: _voiceReleaseType
@property (nonatomic) NSInteger voiceType; // ivar: _voiceType


+(id)getDefaultVoiceByLocale:(id)arg0 ;
+(id)getVoiceByName:(id)arg0 ;
+(id)supportedLocales;
+(id)supportedVoicesByLocale:(id)arg0 ;
+(void)initialize;
-(id)init:(id)arg0 gender:(id)arg1 name:(id)arg2 isDefault:(BOOL)arg3 ;
-(id)initWithVoiceAsset:(id)arg0 resourceAsset:(id)arg1 ;


@end


#endif