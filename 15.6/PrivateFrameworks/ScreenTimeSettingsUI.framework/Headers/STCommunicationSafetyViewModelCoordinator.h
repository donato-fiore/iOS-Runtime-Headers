// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOMMUNICATIONSAFETYVIEWMODELCOORDINATOR_H
#define STCOMMUNICATIONSAFETYVIEWMODELCOORDINATOR_H

@class NSString, STGroupFetchedResultsController, NSNumber, NSManagedObjectID;
@protocol STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate, STPersistenceControllerProtocol;

#import <Foundation/Foundation.h>

#import "STCommunicationSafetyViewModel.h"

@interface STCommunicationSafetyViewModelCoordinator : NSObject <STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (readonly) NSUInteger hash;
@property (copy) id *modelUpdatedHandler; // ivar: _modelUpdatedHandler
@property (readonly, nonatomic) NSObject<STPersistenceControllerProtocol> *persistenceController; // ivar: _persistenceController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID
@property (copy, nonatomic) NSManagedObjectID *userObjectID; // ivar: _userObjectID
@property (readonly) STCommunicationSafetyViewModel *viewModel; // ivar: _viewModel


-(id)initWithPersistenceController:(id)arg0 userDSID:(id)arg1 ;
-(id)initWithPersistenceController:(id)arg0 userDSID:(id)arg1 modelUpdatedHandler:(id)arg2 ;
-(void)_loadViewModel;
-(void)_registerForPersistentStoreNotifications;
-(void)_reportCoreAnalyticsEventCommunicationSafetyEnabled:(BOOL)arg0 ;
-(void)groupResultsController:(id)arg0 didChangeResultsForRequest:(id)arg1 objectID:(id)arg2 changeType:(NSUInteger)arg3 ;
-(void)persistCommunicationSafetySettingsWithCompletionHandler:(id)arg0 ;


@end


#endif