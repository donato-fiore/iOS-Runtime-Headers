// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFENABLEMENTFLOWCONFIGURATIONPROVIDER_H
#define AFENABLEMENTFLOWCONFIGURATIONPROVIDER_H


#import <Foundation/Foundation.h>

#import "AFSettingsConnection.h"

@interface AFEnablementFlowConfigurationProvider : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection; // ivar: _settingsConnection


+(BOOL)_shouldAllowRandomVoiceSelectionForEnablementFlow:(NSInteger)arg0 ;
+(id)_createConfigurationForParameters:(id)arg0 ;
+(void)_emitEnablementFlowLoggingForConfigurationParameters:(id)arg0 didEnable:(BOOL)arg1 ;
-(id)_storedRecognitionLanguageCode;
-(id)_storedVoiceInfo;
-(id)init;
-(void)_resolveIfNewUserWithParameters:(id)arg0 forRecognitionLanguages:(id)arg1 completion:(id)arg2 ;
-(void)_resolveVoiceSelection:(id)arg0 forRecognitionLanguages:(id)arg1 completion:(id)arg2 ;
-(void)configurationForEnablementFlow:(NSInteger)arg0 recognitionLanguageCodes:(id)arg1 completion:(id)arg2 ;


@end


#endif