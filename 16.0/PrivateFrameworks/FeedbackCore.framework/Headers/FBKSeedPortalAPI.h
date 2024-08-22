// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKSEEDPORTALAPI_H
#define FBKSEEDPORTALAPI_H

@class NSManagedObjectContext, NSString, NSMutableArray, NSURL;
@protocol FBKLoginManagerDelegate, FBKForegroundDataClient><FBKLoginManagerDelegate;

#import <Foundation/Foundation.h>

#import "FBKUser.h"
#import "FBKLoginManager.h"

@interface FBKSeedPortalAPI : NSObject <FBKLoginManagerDelegate>



@property (weak) NSManagedObjectContext *_managedObjectContext; // ivar: __managedObjectContext
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deletedResponseIDs; // ivar: _deletedResponseIDs
@property (readonly, copy) NSString *description;
@property short environment; // ivar: _environment
@property (readonly) NSURL *feedbackURL; // ivar: _feedbackURL
@property (retain, nonatomic) NSObject<FBKForegroundDataClient><FBKLoginManagerDelegate> *foregroundClient; // ivar: _foregroundClient
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBKUser *loggedInUser; // ivar: _loggedInUser
@property (weak, nonatomic) FBKLoginManager *loginManager; // ivar: _loginManager
@property (readonly) NSURL *seedPortalURL; // ivar: _seedPortalURL
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *teamsURL;


+(id)deletedKey;
+(id)itemsKey;
+(id)upsertedKey;
-(id)_filterForValue;
-(id)announcementAcknowledgementURL;
-(id)announcementURLForID:(id)arg0 ;
-(id)assignURLForTeamID:(id)arg0 participantID:(id)arg1 ;
-(id)bugFormURLForID:(id)arg0 ;
-(id)bugFormURLForID:(id)arg0 teamID:(id)arg1 ;
-(id)closeFeedbackURLForID:(id)arg0 ;
-(id)contentItemsURL;
-(id)contentItemsURLForTeamID:(id)arg0 ;
-(id)createFollowupResponseURLForFeedbackID:(id)arg0 followupID:(id)arg1 ;
-(id)createResponseURLForBugFormID:(id)arg0 ;
-(id)createResponseURLForBugFormID:(id)arg0 teamID:(id)arg1 ;
-(id)deleteFollowupURLForFollowupID:(id)arg0 feedbackID:(id)arg1 ;
-(id)demoteURLForTeamID:(id)arg0 ;
-(id)enhancedLoggingFollowupResponseURLForFeedbackID:(id)arg0 ;
-(id)envelopedObjectFrom:(id)arg0 ;
-(id)feedbackDetailsURLForFeedbackID:(id)arg0 ;
-(id)feedbackDetailsURLForFollowupID:(id)arg0 ;
-(id)feedbackDetailsURLForFormResponseID:(id)arg0 ;
-(id)feedbackDetailsURLForSurveyFeedbackID:(id)arg0 ;
-(id)feedbackFollowupURLForID:(id)arg0 ;
-(id)feedbackStatusURLForFeedbackID:(id)arg0 ;
-(id)filePromiseDownloadURLForUUID:(id)arg0 ;
-(id)formItemsURLForTeamID:(id)arg0 formTat:(id)arg1 ;
-(id)formItemsURLFormTat:(id)arg0 ;
-(id)formResponsePutAnswersURLForID:(id)arg0 ;
-(id)formResponseStubURLForID:(id)arg0 ;
-(id)formResponseURLForID:(id)arg0 ;
-(id)formResponseUpdateURLForID:(id)arg0 bugFormID:(id)arg1 ;
-(id)generateDeviceTokenForRemoteURL;
-(id)heartbeatURL;
-(id)hostUrl;
-(id)initWithEnvironment:(short)arg0 client:(id)arg1 ;
-(id)insertContentItemsFromJsonData:(id)arg0 ;
-(id)loginWithAuthKitURL;
-(id)loginWithConfigURL;
-(id)loginWithDSURL;
-(id)loginWithTokenURL;
-(id)managedObjectContext;
-(id)participantsURLForTeamID:(id)arg0 ;
-(id)promoteURLForTeamID:(id)arg0 ;
-(id)registerAPNSTokenURL;
-(id)saveChangesIntoContext:(id)arg0 URLUsed:(id)arg1 ;
-(id)unauthenticatedLoginURL;
-(id)unregisterAPNSTokenURL;
-(id)unsolicitedFollowupResponseURLForFeedbackID:(id)arg0 ;
-(id)updateAnswerURLForQuestionID:(id)arg0 answerID:(id)arg1 ;
-(id)wrapFeedbackIDs:(id)arg0 ;
-(void)_reportUnderlyingError:(id)arg0 withFBKErrorCode:(NSInteger)arg1 withCompletion:(id)arg2 ;
// -(void)acknowledgeAnnouncementWithID:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)assignFeedback:(id)arg0 inTeamID:(NSInteger)arg1 toParticipantID:(NSInteger)arg2 success:(id)arg3 error:(unk)arg4  ;
-(void)closeFeedbackItemWithID:(id)arg0 withCompletion:(id)arg1 ;
// -(void)createFollowupWithType:(NSUInteger)arg0 forFeedbackWithID:(id)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)createFormResponseForBugForm:(id)arg0 inTeam:(id)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)deleteFollowupWithID:(id)arg0 feedbackID:(id)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)deleteFormResponseWithID:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)demoteFeedback:(id)arg0 fromTeamID:(NSInteger)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)deregisterAPNSWithDeviceToken:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
-(void)didLogInWithLoginUserInfo:(id)arg0 completion:(id)arg1 ;
-(void)didLogOutWithCompletion:(id)arg0 ;
// -(void)envelopedDELETEForURL:(id)arg0 success:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)envelopedGETForURL:(id)arg0 success:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)envelopedPOSTForURL:(id)arg0 parameters:(id)arg1 success:(id)arg2 errorHandler:(unk)arg3  ;
// -(void)envelopedPUTForURL:(id)arg0 parameters:(id)arg1 success:(id)arg2 errorHandler:(unk)arg3  ;
-(void)feedbackForFeedbackID:(id)arg0 completion:(id)arg1 ;
-(void)feedbackForFollowupID:(id)arg0 completion:(id)arg1 ;
-(void)feedbackForFormResponseID:(id)arg0 completion:(id)arg1 ;
-(void)feedbackForSurveyFeedbackID:(id)arg0 completion:(id)arg1 ;
-(void)feedbackFromURL:(id)arg0 completion:(id)arg1 ;
-(void)fetchAnnouncementForContentItem:(id)arg0 withCompletion:(id)arg1 ;
// -(void)fetchBugFormWithID:(id)arg0 forTeamID:(id)arg1 success:(id)arg2 error:(unk)arg3  ;
-(void)getFeedbackFollowupWithID:(id)arg0 completion:(id)arg1 ;
-(void)getFeedbackStatusForFeedbackID:(id)arg0 completion:(id)arg1 ;
-(void)getFileDownloadURLForFilePromiseUUID:(id)arg0 completion:(id)arg1 ;
-(void)getFormResponseStubWithID:(id)arg0 withCompletion:(id)arg1 ;
// -(void)getParticipantsForTeamID:(NSInteger)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)getRemoteDeviceTokenWithSuccess:(id)arg0 error:(unk)arg1  ;
// -(void)handleDataResponseFor:(id)arg0 data:(id)arg1 success:(id)arg2 errorHandler:(unk)arg3  ;
// -(void)markCompleteForFormResponseWithID:(id)arg0 bugFormID:(id)arg1 withFiles:(BOOL)arg2 metadata:(id)arg3 success:(id)arg4 error:(unk)arg5  ;
// -(void)performHeartbeatWithSuccess:(id)arg0 error:(unk)arg1  ;
// -(void)promoteFeedback:(id)arg0 toTeamID:(NSInteger)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)registerAPNSWithRequestDictionary:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)saveAnswersForFormResponseWithID:(id)arg0 answers:(id)arg1 success:(id)arg2 error:(unk)arg3  ;
// -(void)seedPortalLoginAsAnonymousUserWithConfigurationToken:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)seedPortalLoginAsUnauthenticatedUserWithSuccessHandler:(id)arg0 error:(unk)arg1  ;
// -(void)seedPortalLoginWithAuthKitSession:(id)arg0 device:(id)arg1 authenticationResults:(id)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)seedPortalLoginWithAuthKitSession:(id)arg0 device:(id)arg1 idmsToken:(id)arg2 alternateDSID:(id)arg3 success:(id)arg4 error:(unk)arg5  ;
// -(void)seedPortalLoginWithDeviceToken:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
// -(void)sendFollowupResponseWithData:(id)arg0 forFollowupID:(id)arg1 feedbackID:(id)arg2 success:(id)arg3 error:(unk)arg4  ;
// -(void)updateAnnouncementWithID:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
-(void)updateContentItemsForTeam:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateContentItemsWithCompletion:(id)arg0 ;
-(void)updateFormItemsForUser:(id)arg0 inTeam:(id)arg1 formTat:(id)arg2 withCompletion:(id)arg3 ;
// -(void)updateFormResponseWithID:(id)arg0 success:(id)arg1 error:(unk)arg2  ;
-(void)updateTeamsWithCompletion:(id)arg0 ;


@end


#endif