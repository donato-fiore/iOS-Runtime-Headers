// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXDEVICESETUPMANAGER_H
#define SVXDEVICESETUPMANAGER_H

@class NSMutableDictionary, NSDate, NSString;
@protocol SVXModuleInstance, SVXSessionActivationListening, AFMemoryPressureListening;

#import <Foundation/Foundation.h>

#import "SVXModule.h"
#import "SVXSpeechSynthesizer.h"
#import "SVXSessionManager.h"
#import "SVXDeviceSetupAnnouncer.h"
#import "SVXDeviceSetupFlowScene.h"
#import "SVXDeviceSetupContext.h"

@interface SVXDeviceSetupManager : NSObject <SVXModuleInstance, SVXSessionActivationListening, AFMemoryPressureListening>

 {
    SVXModule *_module;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSessionManager *_sessionManager;
    NSMutableDictionary *_cachedSceneMapsByVoiceKey;
    SVXDeviceSetupAnnouncer *_announcer;
    NSMutableDictionary *_contextsByUUID;
    NSDate *_beginDate;
    NSDate *_endDate;
    SVXDeviceSetupFlowScene *_activatedDeviceSetupFlowScene;
    SVXDeviceSetupContext *_effectiveContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_cachedSceneWithID:(NSInteger)arg0 forLanguageCode:(id)arg1 andGender:(NSInteger)arg2 siriCapabilitiesHint:(id)arg3 ;
-(id)initWithModule:(id)arg0 ;
-(void)_cacheScene:(id)arg0 forLanguageCode:(id)arg1 andGender:(NSInteger)arg2 ;
-(void)_evictCachedContents;
-(void)_prepareForSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)_prepareSiriCapabilitiesSceneWithID:(NSInteger)arg0 languageCode:(id)arg1 gender:(NSInteger)arg2 hint:(id)arg3 completion:(id)arg4 ;
-(void)_prepareSiriIntroSceneWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_prepareTryHeySiriCapabilitiesSceneWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_prepareTryHeySiriMusicSceneWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_prepareTryHeySiriNewsSceneWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_prepareTryHeySiriWeatherSceneWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_setContext:(id)arg0 forUUID:(id)arg1 ;
-(void)_setEffectiveContext:(id)arg0 ;
-(void)_updateEffectiveContext;
-(void)addListener:(id)arg0 ;
-(void)getContextWithCompletion:(id)arg0 ;
-(void)memoryPressureObserver:(id)arg0 didChangeFromCondition:(NSInteger)arg1 toCondition:(NSInteger)arg2 ;
-(void)prepareForSetupWithContext:(id)arg0 completion:(id)arg1 ;
-(void)removeListener:(id)arg0 ;
-(void)sessionManager:(id)arg0 didActivateWithContext:(id)arg1 ;
-(void)setContext:(id)arg0 forUUID:(id)arg1 ;
-(void)startWithModuleInstanceProvider:(id)arg0 platformDependencies:(id)arg1 ;
-(void)stopWithModuleInstanceProvider:(id)arg0 ;


@end


#endif