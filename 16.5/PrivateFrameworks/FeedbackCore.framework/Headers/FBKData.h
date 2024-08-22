// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKDATA_H
#define FBKDATA_H

@class NSString, NSManagedObjectContext, NSNotificationCenter, NSPersistentStoreCoordinator;
@protocol FBKLoginManagerDelegate;

#import <Foundation/Foundation.h>

#import "FBKSeedPortalAPI.h"
#import "FBKUser.h"
#import "FBKTeam.h"
#import "FBKLoginManager.h"
#import "FBKUploadStatusManager.h"

@interface FBKData : NSObject <FBKLoginManagerDelegate>



@property (retain, nonatomic) FBKSeedPortalAPI *api; // ivar: _api
@property (retain, nonatomic) FBKUser *currentUser; // ivar: _currentUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FBKTeam *defaultTeam;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isRefreshingContent; // ivar: _isRefreshingContent
@property BOOL isRefreshingForms; // ivar: _isRefreshingForms
@property BOOL isRefreshingTeams; // ivar: _isRefreshingTeams
@property (retain, nonatomic) FBKLoginManager *loginManager; // ivar: _loginManager
@property (readonly) NSManagedObjectContext *mainQueueContext; // ivar: _mainQueueContext
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinatorInternal; // ivar: _persistentStoreCoordinatorInternal
@property (readonly) FBKTeam *personalTeam;
@property (readonly) NSManagedObjectContext *privateQueueContext; // ivar: _privateQueueContext
@property (readonly) Class superclass;
@property (retain, nonatomic) FBKUploadStatusManager *uploadManager; // ivar: _uploadManager


+(id)fixtureInstance;
+(id)modelWithFormResponsePropertiesFromModel:(id)arg0 ;
+(id)sharedInstance;
+(void)addFetchedFormResponseProperty:(id)arg0 forAnswersWithRole:(id)arg1 toModel:(id)arg2 ;
-(BOOL)isReloadingContentAndFormItems;
-(BOOL)saveToStore:(*id)arg0 ;
-(id)_followupSubmissionBodyWithFlags:(NSUInteger)arg0 responses:(id)arg1 ;
-(id)allActiveUploadTasksInContext:(id)arg0 ;
-(id)bundle;
-(id)createPersistentStoreError:(*id)arg0 ;
-(id)deleteEntityWithRequest:(id)arg0 inContext:(id)arg1 ;
-(id)initWithLoginManager:(id)arg0 api:(id)arg1 ;
-(id)localDeviceForSubmission;
-(id)mainQueueObjectFromPrivate:(id)arg0 ;
-(id)managedObjectModel;
-(id)persistentStoreCoordinator;
-(id)persistentStoreCoordinatorURL;
-(id)persistentStoreType;
-(id)userForUsername:(id)arg0 ;
-(id)userForUsername:(id)arg0 inContext:(id)arg1 ;
-(void)_closeFeedbackItem:(id)arg0 completion:(id)arg1 ;
-(void)_didGetFeedback:(id)arg0 error:(id)arg1 withContentItem:(id)arg2 completion:(id)arg3 ;
-(void)_logUploadTasks;
-(void)_newFormResponseForBugFormID:(id)arg0 formStub:(id)arg1 inTeam:(id)arg2 requestPlugIns:(id)arg3 appToken:(id)arg4 completion:(id)arg5 ;
-(void)_refreshContentItemsForTeam:(id)arg0 withCompletion:(id)arg1 ;
-(void)_refreshContentItemsWithCompletion:(id)arg0 ;
-(void)_refreshFormItemsForTeam:(id)arg0 formTat:(id)arg1 withCompletion:(id)arg2 ;
-(void)_refreshFormItemsWithCompletion:(id)arg0 ;
-(void)addDeviceDataToSubmissionInfo:(id)arg0 withCollector:(id)arg1 ;
-(void)assignFeedback:(id)arg0 toParticipant:(id)arg1 completion:(id)arg2 ;
-(void)beginFileSubmissionForFilerForm:(id)arg0 withCollector:(id)arg1 completion:(id)arg2 ;
-(void)beginSubmissionForFollowup:(id)arg0 withResponses:(id)arg1 didOptOut:(BOOL)arg2 withCollector:(id)arg3 completion:(id)arg4 ;
-(void)beginSubmissionForFormResponse:(id)arg0 withCollector:(id)arg1 completion:(id)arg2 ;
-(void)bugFormFromForDraftItem:(id)arg0 withCompletion:(id)arg1 ;
-(void)clearUploadTasksWithIdentifier:(NSUInteger)arg0 ;
-(void)closeFeedbackItems:(id)arg0 completion:(id)arg1 ;
-(void)createEnhancedLoggingFollowupForItem:(id)arg0 completion:(id)arg1 ;
-(void)createFeedbackFollowupOfType:(NSUInteger)arg0 forItem:(id)arg1 completion:(id)arg2 ;
-(void)createUnsolicitedFeedbackFollowupForItem:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteDraftFromContentItem:(id)arg0 completion:(id)arg1 ;
-(void)deleteDraftFromContentItem:(id)arg0 shouldSave:(BOOL)arg1 completion:(id)arg2 ;
-(void)deleteDraftsFromContentItems:(id)arg0 completion:(id)arg1 ;
-(void)deleteUnsolicitedFollowup:(id)arg0 withFeedbackItem:(id)arg1 completion:(id)arg2 ;
-(void)deleteUploadForTask:(id)arg0 completion:(id)arg1 ;
-(void)demoteFeedback:(id)arg0 completion:(id)arg1 ;
-(void)destroyPersistentStoreWithUrl:(id)arg0 ;
-(void)didLogInWithLoginUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)didLogOutWithCompletion:(id)arg0 ;
-(void)feedbackFollowupForID:(id)arg0 completion:(id)arg1 ;
-(void)feedbackFrameworkLoadDataWithFormTat:(id)arg0 orFormID:(id)arg1 completion:(id)arg2 ;
-(void)fetchFeedbackStatusForFeedback:(id)arg0 completion:(id)arg1 ;
-(void)formResponseStubForID:(id)arg0 completion:(id)arg1 ;
-(void)getAllContentForFeedback:(id)arg0 completion:(id)arg1 ;
-(void)getFeedbackFollowupForFeedback:(id)arg0 atIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getFeedbackForContentItem:(id)arg0 completion:(id)arg1 ;
-(void)getFeedbackForContentItem:(id)arg0 forceRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)getFeedbackForFeedbackID:(id)arg0 completion:(id)arg1 ;
-(void)getFeedbackForFollowupID:(id)arg0 completion:(id)arg1 ;
-(void)getFeedbackForFormResponseID:(id)arg0 completion:(id)arg1 ;
-(void)getFileDownloadURLForFilePromise:(id)arg0 completion:(id)arg1 ;
-(void)getFormResponseStubForFeedback:(id)arg0 completion:(id)arg1 ;
-(void)getFormResponseStubForFeedback:(id)arg0 forceRefresh:(BOOL)arg1 completion:(id)arg2 ;
-(void)initCoreData;
-(void)mainQueueContextDidSave:(id)arg0 ;
-(void)markAnnouncementRead:(id)arg0 completion:(id)arg1 ;
-(void)markFormResponseComplete:(id)arg0 withFiles:(BOOL)arg1 collector:(id)arg2 completion:(id)arg3 ;
-(void)newFormResponseForBugForm:(id)arg0 inTeam:(id)arg1 completion:(id)arg2 ;
-(void)newFormResponseForBugFormStub:(id)arg0 inTeam:(id)arg1 completion:(id)arg2 ;
-(void)newFormResponseForBugFormStub:(id)arg0 inTeam:(id)arg1 requestPlugIns:(id)arg2 appToken:(id)arg3 completion:(id)arg4 ;
-(void)prepareFilerFormForSubmission:(id)arg0 ;
-(void)privateQueueContextDidSave:(id)arg0 ;
-(void)promoteFeedback:(id)arg0 toTeam:(id)arg1 completion:(id)arg2 ;
-(void)purgeOrphanedEntities;
-(void)purgeOrphanedForms;
-(void)reduceToFault:(id)arg0 ;
-(void)refreshAnnouncementFromContentItem:(id)arg0 completion:(id)arg1 ;
-(void)refreshBugFormWithID:(id)arg0 fromStub:(id)arg1 forTeam:(id)arg2 completion:(id)arg3 ;
-(void)refreshBugFormWithID:(id)arg0 fromStub:(id)arg1 forTeam:(id)arg2 requestPlugIns:(id)arg3 appToken:(id)arg4 completion:(id)arg5 ;
-(void)refreshContentItems;
-(void)refreshFormItems;
-(void)refreshFormResponse:(id)arg0 completion:(id)arg1 ;
-(void)refreshFormResponseFromContentItem:(id)arg0 completion:(id)arg1 ;
-(void)refreshFormResponseOnlyWithID:(id)arg0 completion:(id)arg1 ;
-(void)refreshFormResponseStubFromContentItem:(id)arg0 completion:(id)arg1 ;
-(void)refreshFormResponseWithID:(id)arg0 contentItem:(id)arg1 completion:(id)arg2 ;
-(void)refreshParticipantsWithTeam:(id)arg0 completion:(id)arg1 ;
-(void)refreshSurveyFromContentItem:(id)arg0 forTeam:(id)arg1 completion:(id)arg2 ;
-(void)refreshTeamsWithCompletion:(id)arg0 ;
-(void)refreshUnreadCountWithCompletion:(id)arg0 ;
-(void)reloadAllContentWithCompletion:(id)arg0 ;
-(void)reloadDataSkippingContentItems:(BOOL)arg0 teamsEnabled:(BOOL)arg1 formTat:(id)arg2 completion:(id)arg3 ;
-(void)resetAllLocalDataWithCompletion:(id)arg0 ;
-(void)resetContentAndFormItems;
-(void)respondToFollowup:(id)arg0 withResponses:(id)arg1 collector:(id)arg2 optingOut:(BOOL)arg3 completion:(id)arg4 ;
-(void)saveFormResponse:(id)arg0 completion:(id)arg1 ;
-(void)storeUploadWithFormResponse:(id)arg0 bugSessions:(id)arg1 ;
-(void)takeMainQueueObject:(id)arg0 andContinueWithPrivateQueueObject:(id)arg1 ;
-(void)updateResolversForLocalBugForms;
-(void)updateTask:(id)arg0 withSubmissionStage:(NSUInteger)arg1 ;


@end


#endif