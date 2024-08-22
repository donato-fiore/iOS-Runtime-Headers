// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STROOTVIEWMODELCOORDINATOR_H
#define STROOTVIEWMODELCOORDINATOR_H

@class NSMutableDictionary, NSString, STGroupFetchedResultsController, STAdminPersistenceController, NSNumber;
@protocol STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator, STCommunicationSafetyViewModelCoordinator, STContentPrivacyViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STUsageDetailsViewModelCoordinator;

#import <Foundation/Foundation.h>

#import "STRootViewModel.h"

@interface STRootViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator>



@property (readonly) NSObject<STCommunicationSafetyViewModelCoordinator> *communicationSafetyCoordinator; // ivar: _communicationSafetyCoordinator
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator; // ivar: _contentPrivacyCoordinator
@property (retain, nonatomic) NSMutableDictionary *coordinatorsByChildDSID; // ivar: _coordinatorsByChildDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (nonatomic) BOOL hasAlreadyEnteredPINForSession; // ivar: _hasAlreadyEnteredPINForSession
@property (nonatomic) BOOL hasShownMiniBuddy;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocalUser; // ivar: _isLocalUser
@property (readonly, nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled;
@property (readonly) STAdminPersistenceController *persistenceController; // ivar: _persistenceController
@property (readonly) Class superclass;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator; // ivar: _timeAllowancesCoordinator
@property (readonly) NSInteger usageContext; // ivar: _usageContext
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator; // ivar: _usageDetailsCoordinator
@property (readonly, copy) NSNumber *usageReportType; // ivar: _usageReportType
@property (copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property (retain, nonatomic) STRootViewModel *viewModel; // ivar: _viewModel


+(id)keyPathsForValuesAffectingPasscodeEnabled;
+(id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+(id)loadViewModelFromManagedObjectContext:(id)arg0 isLocalUser:(BOOL)arg1 userDSID:(id)arg2 error:(*id)arg3 ;
-(BOOL)validatePIN:(id)arg0 ;
-(id)coordinatorForChild:(id)arg0 deviceIdentifier:(id)arg1 usageReportType:(id)arg2 ;
-(id)init;
-(id)initWithUserDSID:(id)arg0 deviceIdentifier:(id)arg1 usageReportType:(id)arg2 usageContext:(NSInteger)arg3 ;
-(id)organizationIdentifierForManagement;
-(id)organizationIdentifierForUsage;
-(void)_passcodeSessionHasEnded:(id)arg0 ;
-(void)_registerForPersistentStoreNotifications;
-(void)_registerForWillResignActiveNotifications;
-(void)_reportCoreAnalyticsEventScreenTimeEnabled:(BOOL)arg0 user:(id)arg1 userType:(NSUInteger)arg2 userIsRemote:(BOOL)arg3 ;
-(void)_setPIN:(id)arg0 recoveryAltDSID:(id)arg1 shouldSetRecoveryAppleID:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)enableScreenTimeWithPIN:(id)arg0 recoveryAltDSID:(id)arg1 completionHandler:(id)arg2 ;
-(void)groupResultsControllerDidChangeContents:(id)arg0 ;
-(void)loadViewModelRightNow;
-(void)loadViewModelWithCompletionHandler:(id)arg0 ;
-(void)saveViewModel:(id)arg0 ;
-(void)setPIN:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPIN:(id)arg0 recoveryAltDSID:(id)arg1 completionHandler:(id)arg2 ;
-(void)setScreenTimeEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setShareWebUsageEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif