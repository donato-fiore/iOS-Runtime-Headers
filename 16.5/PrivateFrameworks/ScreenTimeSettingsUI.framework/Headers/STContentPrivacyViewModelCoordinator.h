// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCONTENTPRIVACYVIEWMODELCOORDINATOR_H
#define STCONTENTPRIVACYVIEWMODELCOORDINATOR_H

@class NSMutableDictionary, NSString, NSArray, NSNumber, NSManagedObjectID;
@protocol NSFetchedResultsControllerDelegate, STContentPrivacyViewModelCoordinator, STPersistenceControllerProtocol;

#import <Foundation/Foundation.h>

#import "STContentPrivacyViewModel.h"

@interface STContentPrivacyViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STContentPrivacyViewModelCoordinator>



@property (retain, nonatomic) NSMutableDictionary *configurationPayloadsByType; // ivar: _configurationPayloadsByType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *fetchedResultsControllers; // ivar: _fetchedResultsControllers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocalDevice; // ivar: _isLocalDevice
@property NSUInteger numExpectedChanges; // ivar: _numExpectedChanges
@property (readonly, nonatomic) NSObject<STPersistenceControllerProtocol> *persistenceController; // ivar: _persistenceController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property (copy, nonatomic) NSManagedObjectID *userObjectID; // ivar: _userObjectID
@property (retain, nonatomic) STContentPrivacyViewModel *viewModel; // ivar: _viewModel


+(id)_coreAnalyticsEventWithRestrictionsEnabled:(BOOL)arg0 valuesByRestriction:(id)arg1 userType:(NSUInteger)arg2 userIsManaged:(BOOL)arg3 ;
+(id)_localDeviceRestrictions;
+(id)_remoteDeviceRestrictions;
-(id)_createUnrestrictedConfigurationForUser:(id)arg0 withType:(id)arg1 ;
-(id)_restrictionsForWebFilterState:(NSUInteger)arg0 ;
-(id)_valueForMCFeature:(id)arg0 ;
-(id)_valueForSBCapability:(id)arg0 ;
-(id)_valueForWebFilterState;
-(id)_valueInConfiguration:(id)arg0 keyPath:(id)arg1 ;
-(id)_valuesByRestriction;
-(id)_visibleRestrictions;
-(id)createValuesForRestrictions:(id)arg0 multiplayerRestriction:(id)arg1 ;
-(id)initWithPersistenceController:(id)arg0 userDSID:(id)arg1 userName:(id)arg2 ;
-(id)valueForRestriction:(id)arg0 ;
-(void)_contactStoreDidChange:(id)arg0 ;
-(void)_registerForPersistentStoreNotifications;
-(void)_reportCoreAnalyticsEventForChangedCommunicationLimits:(id)arg0 userType:(NSUInteger)arg1 userIsRemote:(BOOL)arg2 ;
-(void)_reportCoreAnalyticsEventWithRestrictionsEnabled:(BOOL)arg0 valuesByRestriction:(id)arg1 userType:(NSUInteger)arg2 userIsManaged:(BOOL)arg3 ;
-(void)_setValue:(id)arg0 forMCFeature:(id)arg1 ;
-(void)_setValue:(id)arg0 forSBCapability:(id)arg1 ;
-(void)_updateConfiguration:(id)arg0 keyPath:(id)arg1 value:(id)arg2 ;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)loadValuesByRestrictionWithCompletionHandler:(id)arg0 ;
-(void)loadViewModelWithCompletionHandler:(id)arg0 ;
-(void)reloadViewModelForRemoteChanges;
-(void)saveCommunicationLimits:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveContentPrivacyEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)saveRestrictionValue:(id)arg0 forItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)saveValuesForRestrictions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif