// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPEECHSYNTHESIZER_H
#define SFSPEECHSYNTHESIZER_H

@class NSLocale;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSpeechSynthesisVoice.h"

@interface SFSpeechSynthesizer : NSObject {
    NSObject<OS_dispatch_queue> *_serverTaskQueue;
    NSObject<OS_dispatch_queue> *_deviceTaskQueue;
    NSObject<OS_dispatch_queue> *_cacheTaskQueue;
}


@property (readonly, nonatomic) BOOL isVoiceAssetDownloaded; // ivar: _isVoiceAssetDownloaded
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) SFSpeechSynthesisVoice *voice; // ivar: _voice


+(id)getVoiceByName:(id)arg0 ;
+(id)supportedLocales;
+(id)supportedVoicesByLocale:(id)arg0 ;
+(void)initialize;
-(id)init;
-(id)initWithVoice:(id)arg0 ;
-(id)startTaskWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)startTaskWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)startTaskWithRequest:(id)arg0 delegate:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)prewarm:(NSInteger)arg0 ;


@end


#endif