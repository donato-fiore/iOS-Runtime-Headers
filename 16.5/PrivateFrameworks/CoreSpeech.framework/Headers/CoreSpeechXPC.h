// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORESPEECHXPC_H
#define CORESPEECHXPC_H

@protocol CoreSpeechXPCProtocol;

#import <Foundation/Foundation.h>

#import "CoreSpeechXPCFakeModelMonitor.h"

@interface CoreSpeechXPC : NSObject <CoreSpeechXPCProtocol>



@property (retain, nonatomic) CoreSpeechXPCFakeModelMonitor *fakeAssetMonitor; // ivar: _fakeAssetMonitor


+(id)accessoryModelTypeToString:(NSInteger)arg0 ;
+(void)logLanguageMismatchMetricWithJarvisSelectedLocale:(id)arg0 jarvisTriggerMode:(NSInteger)arg1 ;
-(id)getAccessoryFallbackFamilyLocal:(id)arg0 fromLocaleMap:(id)arg1 ;
-(id)getAccessoryFallbackLocalTable;
-(id)initWithFakeMonitor:(id)arg0 ;
-(id)selectFallbackModelForLocale:(id)arg0 downloadedModels:(id)arg1 preinstalledModels:(id)arg2 rtLocaleMap:(id)arg3 ;
-(void)_fetchVoiceTriggerInstalledAssetWithLanguage:(id)arg0 completion:(id)arg1 ;
-(void)_handleFakeHearstModelRequest:(id)arg0 majorVersion:(NSUInteger)arg1 minorVersion:(NSUInteger)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id)arg5 ;
-(void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg0 completion:(id)arg1 ;
-(void)installedVoiceTriggerAssetForLanguageCode:(id)arg0 completion:(id)arg1 ;
-(void)voiceTriggerHearstRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 locale:(id)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id)arg5 ;
-(void)voiceTriggerJarvisLanguageList:(id)arg0 jarvisSelectedLanguage:(id)arg1 completion:(id)arg2 ;
-(void)voiceTriggerRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 accessoryRTModelType:(NSInteger)arg2 locale:(id)arg3 endpointId:(id)arg4 downloadedModels:(id)arg5 preinstalledModels:(id)arg6 completion:(id)arg7 ;
-(void)voiceTriggerRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 locale:(id)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(id)arg5 ;
-(void)voiceTriggerRemoraRTModelForVersion:(NSUInteger)arg0 minorVersion:(NSUInteger)arg1 locale:(id)arg2 endpointId:(id)arg3 downloadedModels:(id)arg4 preinstalledModels:(id)arg5 completion:(id)arg6 ;


@end


#endif