// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSAPPSPECIFICSETTINGSMANAGER_H
#define DNDSAPPSPECIFICSETTINGSMANAGER_H

@class NSString;
@protocol DNDSIDSSyncEngineDataSource;

#import <Foundation/Foundation.h>

#import "DNDSIDSSyncEngine.h"
#import "DNDSCoreDataBackingStore.h"

@interface DNDSAppSpecificSettingsManager : NSObject <DNDSIDSSyncEngineDataSource>

 {
    DNDSIDSSyncEngine *_idsSyncEngine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DNDSCoreDataBackingStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)removeAppSpecificSettingsForApplicationIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeModeSpecificSettingsForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAppSpecificSettings:(id)arg0 identifier:(id)arg1 type:(Class)arg2 applicationIdentifier:(id)arg3 modeIdentifier:(id)arg4 error:(*id)arg5 ;
-(BOOL)setModeSpecificSettings:(id)arg0 identifier:(id)arg1 type:(Class)arg2 modeIdentifier:(id)arg3 error:(*id)arg4 ;
-(id)_allAppSpecificSettingsOfType:(Class)arg0 ;
-(id)_allModeSpecificSettingsOfType:(Class)arg0 ;
-(id)_initWithBackingStoreURL:(id)arg0 ;
-(id)_perModeSettingsMOsOfType:(Class)arg0 modeIdentifier:(id)arg1 processBlock:(id)arg2 ;
-(id)appActionWithIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)appConfigurationPredicateForActionIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)appConfigurationPredicateForApplicationIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)appConfigurationTargetContentIdentifierPrefixForActionIdentifier:(id)arg0 forApplicationIdentifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)appConfigurationTargetContentIdentifierPrefixForApplicationIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)appSpecificSettingsOfType:(Class)arg0 identifier:(id)arg1 modeIdentifier:(id)arg2 applicationIdentifier:(id)arg3 error:(*id)arg4 ;
-(id)appSpecificSettingsOfType:(Class)arg0 modeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)appSpecificSettingsOfType:(Class)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithIDSSyncEngine:(id)arg0 backingStoreURL:(id)arg1 ;
-(id)modeSpecificSettingsOfType:(Class)arg0 identifier:(id)arg1 modeIdentifier:(id)arg2 error:(*id)arg3 ;
-(id)modeSpecificSettingsOfType:(Class)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)recordIDsForIDSSyncEngine:(id)arg0 ;
-(id)removeModeSpecificSettingsForModeIdentifiersNotInModeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)systemActionWithIdentifier:(id)arg0 modeIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)_allPerModeSettingsMOsOfType:(Class)arg0 processBlock:(id)arg1 ;
-(void)_modesToSave:(id)arg0 modesToDelete:(id)arg1 ;
-(void)idsSyncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)idsSyncEngine:(id)arg0 prepareRecordToSave:(id)arg1 ;
-(void)idsSyncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 ;
-(void)purgeRecordsForIDSSyncEngine:(id)arg0 ;


@end


#endif