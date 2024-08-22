// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPEECHMODELTRAININGCLIENT_H
#define SPEECHMODELTRAININGCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SpeechModelTrainingClient : NSObject {
    NSXPCConnection *_smtConnection;
}




+(void)initialize;
-(id)_serviceProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithServiceName:(id)arg0 ;
-(void)buildPhoneticMatchWithLanguage:(id)arg0 saveIntermediateFsts:(BOOL)arg1 completion:(id)arg2 ;
-(void)buildSpeechProfileForLanguage:(id)arg0 ;
-(void)dealloc;
-(void)extractBundledOovs:(id)arg0 appLmDataFileSandboxExtension:(id)arg1 appBundleId:(id)arg2 completion:(id)arg3 ;
-(void)generateAudioWithTexts:(id)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)trainAllAppLMWithLanguage:(id)arg0 ;
-(void)trainAllAppLMWithLanguage:(id)arg0 completion:(id)arg1 ;
-(void)trainAppLMWithLanguage:(id)arg0 configuration:(id)arg1 appBundleId:(id)arg2 appLmDataFile:(id)arg3 appLmDataFileSandboxExtension:(id)arg4 ;
-(void)trainAppLMWithLanguage:(id)arg0 configuration:(id)arg1 appBundleId:(id)arg2 appLmDataFile:(id)arg3 appLmDataFileSandboxExtension:(id)arg4 completion:(id)arg5 ;
-(void)trainAppLMWithLanguage:(id)arg0 configuration:(id)arg1 appBundleId:(id)arg2 appLmDataFile:(id)arg3 appLmModelFile:(id)arg4 appLmDataFileSandboxExtension:(id)arg5 ;
-(void)trainAppLMWithLanguage:(id)arg0 configuration:(id)arg1 appBundleId:(id)arg2 appLmDataFile:(id)arg3 appLmModelFile:(id)arg4 appLmDataFileSandboxExtension:(id)arg5 completion:(id)arg6 ;
-(void)trainGlobalNNLMwithFidesSessionURL:(id)arg0 completion:(id)arg1 ;
-(void)trainPartialAllAppLMWithLanguage:(id)arg0 ;
-(void)trainPartialAllAppLMWithLanguage:(id)arg0 completion:(id)arg1 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 configuration:(id)arg1 asset:(id)arg2 directory:(id)arg3 completion:(id)arg4 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 configuration:(id)arg1 asset:(id)arg2 fides:(BOOL)arg3 activity:(id)arg4 completion:(id)arg5 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 configuration:(id)arg1 fides:(BOOL)arg2 activity:(id)arg3 completion:(id)arg4 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 directory:(id)arg1 completion:(id)arg2 ;
-(void)upperCaseString:(id)arg0 completion:(id)arg1 ;
-(void)wakeUpWithCompletion:(id)arg0 ;


@end


#endif