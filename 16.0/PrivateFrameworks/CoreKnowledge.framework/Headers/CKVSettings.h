// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSETTINGS_H
#define CKVSETTINGS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKVLocalization.h"
#import "CKVSearchContext.h"

@interface CKVSettings : NSObject <NSSecureCoding>

 {
    uint8_t _enablementOptions;
}


@property (readonly) CKVLocalization *localization; // ivar: _localization
@property (readonly, nonatomic) CKVSearchContext *searchContext; // ivar: _searchContext
@property (retain) NSDictionary *simulatedPriors;


+(BOOL)isDonationEnabled:(unsigned char)arg0 ;
+(BOOL)isSkitEnabled:(unsigned char)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)defaultSandboxSettings;
+(id)defaultSettings;
+(id)sandboxSettingsWithLocale:(id)arg0 error:(*id)arg1 ;
+(unsigned char)defaultEnablementOptions;
-(BOOL)isDonationEnabled;
-(BOOL)isSandboxEnabled;
-(BOOL)isSkitEnabled;
-(BOOL)isSpeechProfileEnabled;
-(BOOL)isSpeechProfileEnabledForAssistant;
-(BOOL)isSpeechProfileEnabledForDictation;
-(BOOL)isTaskEnabled:(unsigned short)arg0 ;
-(BOOL)isXPCDonationEnabled:(NSInteger)arg0 ;
-(BOOL)shouldOverrideSpeechProfileDeferral;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalization:(id)arg0 enablementOptions:(unsigned char)arg1 ;
-(unsigned char)enablementOptions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)refreshEnablementOptions;
-(void)refreshLocalization;


@end


#endif