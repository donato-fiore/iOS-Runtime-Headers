// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSCORESPEECHSERVICES_H
#define CSCORESPEECHSERVICES_H


#import <Foundation/Foundation.h>


@interface CSCoreSpeechServices : NSObject



+(NSInteger)getFirstPassRunningMode;
+(id)getCoreSpeechServiceConnection;
+(id)getCoreSpeechXPCConnection;
+(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg0 completion:(id)arg1 ;
+(void)getCurrentVoiceTriggerLocaleWithEndpointId:(id)arg0 completion:(id)arg1 ;
+(void)installedVoiceTriggerAssetForLanguageCode:(id)arg0 completion:(id)arg1 ;
+(void)requestUpdatedSATAudio;
+(void)voiceTriggerJarvisLanguageList:(id)arg0 jarvisSelectedLanguage:(id)arg1 completion:(id)arg2 ;
+(void)voiceTriggerRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 accessoryRTModelType:(NSInteger)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id)arg5 ;
+(void)voiceTriggerRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 accessoryRTModelType:(NSInteger)arg2 endpointId:(id)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(id)arg6 ;
+(void)voiceTriggerRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 downloadedModels:(id)arg2 preinstalledModels:(id)arg3 completion:(id)arg4 ;


@end


#endif