// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMODEMANAGER_H
#define NCMODEMANAGER_H

@class DNDStateService, DNDModeConfigurationService, NSHashTable, DNDModeConfiguration, NSString;
@protocol DNDStateUpdateListener, DNDModeConfigurationServiceListener;

#import <Foundation/Foundation.h>


@interface NCModeManager : NSObject <DNDStateUpdateListener, DNDModeConfigurationServiceListener>

 {
    DNDStateService *_stateService;
    DNDModeConfigurationService *_modeConfigurationService;
    NSHashTable *_observers;
    DNDModeConfiguration *_currentModeConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentModeConfiguration;
-(id)init;
-(void)_fetchCurrentModeConfiguration;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_updateWithModeConfiguration:(id)arg0 previousModeConfiguration:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)modeConfigurationService:(id)arg0 didReceiveAvailableModesUpdate:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setModeConfiguration:(id)arg0 ;
-(void)stateService:(id)arg0 didReceiveDoNotDisturbStateUpdate:(id)arg1 ;


@end


#endif