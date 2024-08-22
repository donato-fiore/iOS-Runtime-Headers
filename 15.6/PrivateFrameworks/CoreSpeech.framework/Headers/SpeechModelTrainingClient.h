// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)dealloc;
-(void)generateAudioWithTexts:(id)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)trainGlobalNNLMwithFidesSessionURL:(id)arg0 completion:(id)arg1 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 configuration:(id)arg1 asset:(id)arg2 directory:(id)arg3 completion:(id)arg4 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 configuration:(id)arg1 asset:(id)arg2 fides:(BOOL)arg3 activity:(id)arg4 completion:(id)arg5 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 configuration:(id)arg1 fides:(BOOL)arg2 activity:(id)arg3 completion:(id)arg4 ;
-(void)trainPersonalizedLMWithLanguage:(id)arg0 directory:(id)arg1 completion:(id)arg2 ;
-(void)upperCaseString:(id)arg0 completion:(id)arg1 ;


@end


#endif