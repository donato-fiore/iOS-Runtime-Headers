// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODECONFIGURATIONMANAGER_H
#define DNDSMODECONFIGURATIONMANAGER_H

@class NSString;
@protocol DNDSSysdiagnoseDataProvider, DNDSModeConfigurationsStoreDelegate, DNDSKeybagStateObserver, OS_dispatch_queue, DNDSModeConfigurationsStoring, DNDSKeybagStateProviding, DNDSModeConfigurationManagerDelegate;

#import <Foundation/Foundation.h>


@interface DNDSModeConfigurationManager : NSObject <DNDSSysdiagnoseDataProvider, DNDSModeConfigurationsStoreDelegate, DNDSKeybagStateObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSModeConfigurationsStoring> *_backingStore;
    id<DNDSKeybagStateProviding> *_keybag;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSModeConfigurationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(BOOL)removeModeConfigurationForModeIdentifier:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setModeConfiguration:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)_saveModeConfiguration:(id)arg0 writeSecurePartition:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)_writeModeConfigurationsRecord:(id)arg0 writeSecurePartition:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)exceptionForApplication:(id)arg0 thread:(id)arg1 forModeIdentifier:(id)arg2 ;
-(NSUInteger)exceptionForApplicationIdentifier:(id)arg0 thread:(id)arg1 forModeIdentifier:(id)arg2 ;
-(NSUInteger)exceptionForContactHandle:(id)arg0 forModeIdentifier:(id)arg1 ;
-(id)_inheritFromDefaultModeConfiguration:(id)arg0 ;
-(id)_prepareModeConfigurationForStorage:(id)arg0 withError:(*id)arg1 ;
-(id)_readModeConfigurationsReturningError:(*id)arg0 ;
-(id)_removedModeConfigurationRecordForModeRecord:(id)arg0 ;
-(id)_sysdiagnoseData;
-(id)availableModesFilteringPlaceholders:(BOOL)arg0 returningError:(*id)arg1 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)initWithBackingStore:(id)arg0 keybag:(id)arg1 ;
-(id)modeConfigurationForModeIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)modeConfigurationsWithError:(*id)arg0 ;
-(id)relevantApplicationIdentifiers;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)_fixupConfigurationsIfNeeded;
-(void)_notifyChangeOfModeConfigurationFrom:(id)arg0 to:(id)arg1 ;
-(void)dealloc;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;
-(void)modeConfigurationStore:(id)arg0 didUpdateAvailableModes:(id)arg1 ;


@end


#endif