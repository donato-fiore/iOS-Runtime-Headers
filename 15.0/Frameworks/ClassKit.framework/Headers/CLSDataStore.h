// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSDATASTORE_H
#define CLSDATASTORE_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSDate, NSString;
@protocol CLSFaultProcessorDelegate, NSLocking, CLSDataStoreDelegate;

#import <Foundation/Foundation.h>

#import "CLSCurrentUser.h"
#import "CLSAuthTree.h"
#import "CLSContext.h"
#import "CLSEndpointConnection.h"
#import "CLSGraph.h"
#import "CLSActivity.h"

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate, NSLocking>

 {
    NSMutableSet *_dataObservers;
    NSMutableDictionary *_deletedObjectsByID;
    NSMutableDictionary *_objectGenerationsByID;
    CLSCurrentUser *_cachedCurrentUser;
    int _accountChangeToken;
    os_unfair_recursive_lock_s _lock;
    NSMutableArray *_pendingSaves;
    BOOL _saveInProgress;
    CLSAuthTree *_authTree;
    CLSAuthTree *_handoutAssignedItemsAuthTree;
    NSMutableArray *_runningActivities;
    NSDate *_lastPruneDate;
    NSString *_appBundleIdentifier;
    NSString *_appName;
}


@property (readonly, nonatomic) CLSContext *activeContext;
@property (readonly, nonatomic) CLSAuthTree *authTree;
@property (retain, nonatomic) CLSCurrentUser *cachedCurrentUser;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CLSDataStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLSEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (readonly, nonatomic) CLSGraph *graph; // ivar: _graph
@property (readonly, nonatomic) CLSAuthTree *handoutAssignedItemsAuthTree;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLSContext *mainAppContext; // ivar: _mainAppContext
@property (readonly, nonatomic) CLSActivity *runningActivity;
@property (readonly) Class superclass;


+(BOOL)isAvailable;
+(BOOL)isDashboardApp;
+(BOOL)isPDTool;
+(BOOL)isPrivateSearchAPIEnabled;
+(BOOL)isSearchAPIEnabled;
+(Class)endpointClass;
+(id)newDatastore;
+(id)shared;
-(BOOL)faultProcessor:(id)arg0 shouldFaultRelation:(id)arg1 fromObject:(id)arg2 ;
-(BOOL)isAllowedToInsertObject:(id)arg0 ;
-(BOOL)isAppClient;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isPrivateSearchAPIEnabled;
-(BOOL)isRemovedObject:(id)arg0 ;
-(BOOL)isSearchAPIEnabled;
-(BOOL)syncSetSettingsForUserNotificationType:(NSInteger)arg0 settings:(id)arg1 ;
-(NSUInteger)serverSyncStatus;
-(id)_addObject:(id)arg0 ;
-(id)_arrangeObjectsIfNeeded:(id)arg0 ;
-(id)_filterObjectsBeingSavedFromObjects:(id)arg0 ;
-(id)_modifiedObjects;
-(id)_validateObjects:(id)arg0 ;
-(id)addObject:(id)arg0 ;
-(id)allContexts;
-(id)appIdentifier;
-(id)cachedMainAppContext;
-(id)currentUser;
-(id)dataServer:(id)arg0 ;
-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(id)objectWithObjectID:(id)arg0 ;
-(id)runningActivities;
-(id)serverInternalState:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)syncDataServer:(id)arg0 ;
-(id)syncFetchContextsForContextIDs:(id)arg0 ;
-(id)syncFetchProgressReportingCapabilitiesForContextID:(id)arg0 ;
-(id)syncFetchSettingsForUserNotificationType:(NSInteger)arg0 ;
-(id)syncFetchThumbnailBlobForContext:(id)arg0 ;
-(id)syncUtilityServer:(id)arg0 ;
-(id)utilityServer:(id)arg0 ;
-(void)_classesForCurrentUserWithRole:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_connectionConnected;
-(void)_connectionInterupted;
-(void)_createMainAppContext;
-(void)_fetchHandoutAttachmentForDocumentURL:(id)arg0 completion:(id)arg1 ;
-(void)_generatePartialTimeIntervalsForRunningActivities;
-(void)_reconnect;
-(void)_reenableObservers;
-(void)_refreshMainAppContext;
-(void)_registerForAccountChangedDarwinNotification;
-(void)_save;
-(void)_saveObjects:(id)arg0 completion:(id)arg1 ;
-(void)_validateAndCreateHandoutAssignedItemFor:(id)arg0 completion:(id)arg1 ;
-(void)addCollection:(id)arg0 ;
-(void)addFavorite:(id)arg0 ;
-(void)addHandout:(id)arg0 ;
-(void)addRunningActivitiesObject:(id)arg0 ;
-(void)addSurveyAnswerItem:(id)arg0 ;
-(void)adminRequestorForEmail:(id)arg0 completion:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)awaitExecuteQuery:(id)arg0 completion:(id)arg1 ;
-(void)canSearchRostersWithCompletion:(id)arg0 ;
-(void)childrenOfAdminRequestID:(id)arg0 completion:(id)arg1 ;
-(void)classesForPersonID:(id)arg0 role:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)collaborationStatesForObjectWithID:(id)arg0 classID:(id)arg1 forOwnersWithRole:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)collaborationStatesForObjectWithID:(id)arg0 ownerPersonID:(id)arg1 completion:(id)arg2 ;
-(void)completeAllAssignedActivitiesMatching:(id)arg0 ;
-(void)contextsMatchingIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)contextsMatchingIdentifierPath:(id)arg0 completion:(id)arg1 ;
-(void)contextsMatchingIdentifierPath:(id)arg0 parentContext:(id)arg1 completion:(id)arg2 ;
-(void)contextsMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(void)createShareIfNeededForURL:(id)arg0 completion:(id)arg1 ;
-(void)currentUserWithCompletion:(id)arg0 ;
-(void)currentUserWithServer:(id)arg0 completion:(id)arg1 ;
-(void)dataServer:(id)arg0 executeQuery:(id)arg1 issueServerRequest:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteAdminRequestID:(id)arg0 completion:(id)arg1 ;
-(void)deleteArchivedCollectionObjects:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteFileAtExpectedURL:(id)arg0 containerURL:(id)arg1 itemID:(id)arg2 ownerName:(id)arg3 zoneName:(id)arg4 completion:(id)arg5 ;
-(void)deregisterDataObserver:(id)arg0 ;
-(void)developerModeChanged:(id)arg0 ;
-(void)enrolledClassesWithCompletion:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;
-(void)executeQuery:(id)arg0 issueServerRequest:(BOOL)arg1 ;
-(void)faultMainAppContext;
-(void)featureIsEnabled:(int)arg0 completion:(id)arg1 ;
-(void)fetchActivityForURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchAndCompleteAllAssignedActivitiesForContextPath:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchAssignedItemFor:(id)arg0 completion:(id)arg1 ;
-(void)fetchCollectionItemsWithCompletion:(id)arg0 ;
-(void)fetchCollectionsWithCompletion:(id)arg0 ;
-(void)fetchReportsWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)fetchSurveyAnswers:(id)arg0 responderIDs:(id)arg1 completion:(id)arg2 ;
-(void)fetchTransparencyMessageInfoForAttachmentID:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchTransparencyMessageInfoWithCompletion:(id)arg0 ;
-(void)getCurrentUseriCloudQuotaInfoWithCompletion:(id)arg0 ;
-(void)handoutAttachmentForDocumentURL:(id)arg0 completion:(id)arg1 ;
-(void)instructedClassesWithCompletion:(id)arg0 ;
-(void)lock;
-(void)markObjectAsDeleted:(id)arg0 ;
-(void)membersOfGroupWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)objectsMatching:(id)arg0 completion:(id)arg1 ;
-(void)personsInClassWithClassID:(id)arg0 role:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)presentTransparencyMessageForHandoutAssignedItemInfo:(id)arg0 ;
-(void)presentTransparencyMessageInfo:(id)arg0 ;
-(void)pruneDeletedObjectsWithCompletion:(id)arg0 ;
-(void)publishAdminRequests:(id)arg0 withRequestor:(id)arg1 adminRequestAccounts:(id)arg2 completion:(id)arg3 ;
-(void)publishAnswersForSurvey:(id)arg0 completion:(id)arg1 ;
-(void)publishCollaborationStateChanges:(id)arg0 completion:(id)arg1 ;
-(void)publishHandout:(id)arg0 completion:(id)arg1 ;
-(void)refreshAuthTreeForAttachment:(id)arg0 withCompletion:(id)arg1 ;
-(void)refreshAuthTreeWithCompletion:(id)arg0 ;
-(void)refreshMainAppContext;
-(void)registerDataObserver:(id)arg0 ;
-(void)removeActivityWithObjectID:(id)arg0 ;
-(void)removeClass:(id)arg0 ;
-(void)removeCollection:(id)arg0 ;
-(void)removeContext:(id)arg0 ;
-(void)removeContextWithObjectID:(id)arg0 ;
-(void)removeFavorite:(id)arg0 ;
-(void)removeHandout:(id)arg0 ;
-(void)removeHandoutAssignedItem:(id)arg0 ;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectWithObjectID:(id)arg0 class:(Class)arg1 ;
-(void)removeRunningActivitiesObject:(id)arg0 ;
-(void)removeSurvey:(id)arg0 ;
-(void)removeSurveyAnswerItem:(id)arg0 ;
-(void)renewCredentialsWithCompletion:(id)arg0 ;
-(void)repairHandoutAttachments:(id)arg0 completion:(id)arg1 ;
-(void)reset;
-(void)saveClass:(id)arg0 completion:(id)arg1 ;
-(void)saveObjects:(id)arg0 completion:(id)arg1 ;
-(void)saveWithCompletion:(id)arg0 ;
-(void)setShouldSyncTeacherBrowsedContexts:(BOOL)arg0 completion:(id)arg1 ;
-(void)shouldPerformSearchAPIOperation:(id)arg0 completion:(id)arg1 ;
-(void)shouldSyncTeacherBrowsedContextsWithCompletion:(id)arg0 ;
-(void)studentActivityForAttachmentsWithIDs:(id)arg0 completion:(id)arg1 ;
-(void)syncDeleteProgressReportingCapabilitiesForContextID:(id)arg0 ;
-(void)syncDeleteThumbnailBlobForContext:(id)arg0 ;
-(void)syncFetchWithCompletion:(id)arg0 ;
-(void)triggerProgressTransparencyMessageForAttachmentID:(id)arg0 ;
-(void)triggerUserNotificationHandoutAssigned:(id)arg0 completion:(id)arg1 ;
-(void)triggerUserNotificationHandoutDueSoonWithReferenceDate:(id)arg0 completion:(id)arg1 ;
-(void)triggerUserNotificationHandoutPastDueSummaryWithReferenceDate:(id)arg0 completion:(id)arg1 ;
-(void)triggerUserNotificationReviewDueHandoutsWithReferenceDate:(id)arg0 completion:(id)arg1 ;
-(void)triggerUserNotificationRevisedSubmissionWithAttachmentID:(id)arg0 studentName:(id)arg1 completion:(id)arg2 ;
-(void)triggerUserNotificationRevisionRequested:(id)arg0 completion:(id)arg1 ;
-(void)unlock;
-(void)urlSuitableForOpeningForExpectedURL:(id)arg0 containerURL:(id)arg1 itemID:(id)arg2 ownerName:(id)arg3 zoneName:(id)arg4 completion:(id)arg5 ;


@end


#endif