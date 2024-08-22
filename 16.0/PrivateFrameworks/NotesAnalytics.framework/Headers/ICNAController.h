// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNACONTROLLER_H
#define ICNACONTROLLER_H

@class AAAppSessionManager, AAClient, NSNumber, AAFlushManager, NSString, NSURL, NSMutableDictionary, AASessionManager, NSDate, AAUploadBatchEventConfig;
@protocol AAEndpointType, ICNAControllerAppDelegate, OS_dispatch_queue;


#import "ICNAOptedInObject.h"
#import "ICNAMultiSceneSessionTracker.h"
#import "ICNAServerEnvironment.h"

@interface ICNAController : ICNAOptedInObject <AAEndpointType>



@property (weak, nonatomic) NSObject<ICNAControllerAppDelegate> *appDelegate; // ivar: _appDelegate
@property (retain, nonatomic) AAAppSessionManager *appSessionManager; // ivar: _appSessionManager
@property (retain, nonatomic) AAClient *client; // ivar: _client
@property NSInteger deviceOrientationEnum; // ivar: _deviceOrientationEnum
@property (retain, nonatomic) NSNumber *endSessionBackgroundTaskIdentifier; // ivar: _endSessionBackgroundTaskIdentifier
@property (retain, nonatomic) AAFlushManager *flushManager; // ivar: _flushManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *instrumentationQueue; // ivar: _instrumentationQueue
@property (retain, nonatomic) ICNAMultiSceneSessionTracker *multiSceneSessionTracker; // ivar: _multiSceneSessionTracker
@property (readonly, copy, nonatomic) NSString *name;
@property (retain) NSString *privateSessionID; // ivar: _privateSessionID
@property (retain) NSString *referringApplication; // ivar: _referringApplication
@property (retain) NSURL *referringInboundURL; // ivar: _referringInboundURL
@property (retain, nonatomic) ICNAServerEnvironment *serverEnvironment; // ivar: _serverEnvironment
@property (retain, nonatomic) NSMutableDictionary *sessionForWindowDict; // ivar: _sessionForWindowDict
@property (retain, nonatomic) AASessionManager *sessionManager; // ivar: _sessionManager
@property (retain, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property NSInteger sessionState; // ivar: _sessionState
@property (retain, nonatomic) NSMutableDictionary *sessionTrackerForWindowDict; // ivar: _sessionTrackerForWindowDict
@property (readonly, copy, nonatomic) NSString *sharedContainerIdentifier;
@property (retain) NSString *startingSessionType; // ivar: _startingSessionType
@property (retain, nonatomic) AAUploadBatchEventConfig *uploadBatchEventConfig; // ivar: _uploadBatchEventConfig
@property (readonly, copy, nonatomic) NSURL *url;


+(BOOL)bioAuthEnabled;
+(BOOL)localNotesEnabled;
+(NSInteger)accountTypeEnumForHTMLAccount:(id)arg0 ;
+(NSInteger)accountTypeEnumForModernAccount:(id)arg0 ;
+(NSUInteger)startMonth;
+(NSUInteger)startYear;
+(id)deviceID;
+(id)deviceModel;
+(id)devicePlatform;
+(id)osBundleVersion;
+(id)osVersion;
+(id)privateUserID;
+(id)saltVersion;
+(id)sharedController;
+(id)storeFrontID;
+(id)userID;
-(BOOL)killEndSessionBackgroundTaskIfNecessary;
-(id)aaTrackerForWindowSceneIdentifier:(id)arg0 ;
-(id)accountTypeSummary;
-(id)appData;
-(id)cellularRadioAccessTechnology;
-(id)createSessionManager;
-(id)debugData;
-(id)deviceData;
-(id)init;
-(id)referralData;
-(id)sessionDataWithType:(id)arg0 ;
-(id)sessionManagerForWindowSceneIdentifier:(id)arg0 ;
-(id)sessionTrackerForWindowSceneIdentifier:(id)arg0 ;
-(id)userData;
-(void)_immediatelySubmitEventOfType:(Class)arg0 pushThenPopDataObjects:(id)arg1 subTracker:(id)arg2 ;
-(void)_immediatelySubmitEventOfType:(Class)arg0 subTracker:(id)arg1 ;
-(void)addReferralDataWithReferringInboundURL:(id)arg0 referringApplication:(id)arg1 ;
-(void)addSnapshotReferralDataToSessionLevel;
-(void)appSessionDidTerminate;
-(void)assertInstrumentationQueue;
-(void)clearSessionForWindowSceneIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)endSessionSynchronously:(BOOL)arg0 ;
-(void)endSessionSynchronously:(BOOL)arg0 forSessionType:(id)arg1 ;
-(void)endSessionSynchronously:(BOOL)arg0 forSessionType:(id)arg1 successHandler:(id)arg2 ;
-(void)endWindowSceneSessionSynchronously:(BOOL)arg0 forSessionType:(id)arg1 windowScene:(id)arg2 ;
-(void)endWindowSceneSessionSynchronously:(BOOL)arg0 forSessionType:(id)arg1 windowScene:(id)arg2 successHandler:(id)arg3 ;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)generatePrivateSessionIDIfNecessary;
-(void)newAATrackerWithName:(id)arg0 completionBlock:(id)arg1 ;
-(void)newAATrackerWithName:(id)arg0 parentAATracker:(id)arg1 completionBlock:(id)arg2 ;
-(void)newAATrackerWithName:(id)arg0 parentTracker:(id)arg1 completionBlock:(id)arg2 ;
-(void)orientationDidChange:(id)arg0 ;
-(void)performOnInstrumentationQueueWaitUntilDone:(BOOL)arg0 block:(id)arg1 ;
-(void)popDataObjectWithType:(Class)arg0 ;
-(void)popDataObjectWithType:(Class)arg0 subTracker:(id)arg1 ;
-(void)popDataObjectsWithTypes:(id)arg0 ;
-(void)popDataObjectsWithTypes:(id)arg0 subTracker:(id)arg1 ;
-(void)pushDataObject:(id)arg0 unique:(BOOL)arg1 onlyOnce:(BOOL)arg2 ;
-(void)pushDataObject:(id)arg0 unique:(BOOL)arg1 onlyOnce:(BOOL)arg2 subTracker:(id)arg3 ;
-(void)pushDataObjects:(id)arg0 unique:(BOOL)arg1 onlyOnce:(BOOL)arg2 ;
-(void)pushDataObjects:(id)arg0 unique:(BOOL)arg1 onlyOnce:(BOOL)arg2 subTracker:(id)arg3 ;
-(void)pushLongLivedDataObjects:(id)arg0 ;
-(void)pushLongLivedOrientationData:(id)arg0 ;
-(void)pushLongLivedPrivateDeviceData:(id)arg0 ;
-(void)pushLongLivedPrivateEventData:(id)arg0 ;
-(void)pushLongLivedPrivateUserData:(id)arg0 ;
-(void)pushLongLivedSessionSummaryData:(id)arg0 ;
-(void)pushReferralDataToSessionManager:(id)arg0 ;
-(void)pushSessionLevelDataIntoSessionManager:(id)arg0 withSessionType:(id)arg1 ;
-(void)pushToSessionManager:(id)arg0 data:(id)arg1 forKey:(id)arg2 traits:(id)arg3 ;
-(void)pushUniqueDataObject:(id)arg0 tracker:(id)arg1 ;
-(void)startAppSession;
-(void)startSessionWithReferralURL:(id)arg0 referralApplication:(id)arg1 ;
-(void)startSessionWithReferralURL:(id)arg0 referralApplication:(id)arg1 startingSessionType:(id)arg2 ;
-(void)startSessionWithType:(id)arg0 ;
-(void)startWindowSceneSessionWithType:(id)arg0 windowScene:(id)arg1 ;
-(void)submitEventOfType:(Class)arg0 ;
-(void)submitEventOfType:(Class)arg0 pushThenPopDataObjects:(id)arg1 ;
-(void)submitEventOfType:(Class)arg0 pushThenPopDataObjects:(id)arg1 subTracker:(id)arg2 ;
-(void)submitEventOfType:(Class)arg0 subTracker:(id)arg1 ;
-(void)submitEventOfType:(Class)arg0 subTracker:(id)arg1 synchronousTaskBeforeSubmitting:(id)arg2 ;
-(void)trackTimedEventType:(Class)arg0 ;
-(void)trackTimedEventType:(Class)arg0 subTracker:(id)arg1 ;
-(void)trackTimedEventType:(Class)arg0 subTracker:(id)arg1 synchronousTaskBeforeStarting:(id)arg2 ;


@end


#endif