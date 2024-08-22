// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDARGONSERVICE_H
#define NTKDARGONSERVICE_H

@class NSString, NSMutableDictionary, APSConnection, NSUserDefaults, UNUserNotificationCenter;
@protocol NTKArgonManagerObserver, NSXPCListenerDelegate, NTKFaceSupportServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceSupportNotificationActionEventRecorder.h"
#import "NTKArgonManager.h"

@interface NTKDArgonService : NSObject <NTKArgonManagerObserver, NSXPCListenerDelegate, NTKFaceSupportServer>



@property (readonly, nonatomic) NTKFaceSupportNotificationActionEventRecorder *actionRecorder; // ivar: _actionRecorder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *keyDescriptorsAwaitingUserNotifications; // ivar: _keyDescriptorsAwaitingUserNotifications
@property (readonly, nonatomic) NTKArgonManager *manager; // ivar: _manager
@property (readonly, nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) APSConnection *pushConnection; // ivar: _pushConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pushQueue; // ivar: _pushQueue
@property (readonly, nonatomic) int pushToken; // ivar: _pushToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *userNotificationQueue; // ivar: _userNotificationQueue


+(id)sharedService;
+(void)cleanUpStaleBundlesEventually;
-(BOOL)_argonIsComplete;
-(BOOL)_handleDailyQuery;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_baseCriteriaForArgonActivities;
-(id)_criteriaForDailyRefreshActiviy;
-(id)_criteriaForFirstQueryActivity;
-(id)_init;
-(void)_addFaceActionTappedFromNotification:(id)arg0 ;
-(void)_checkInForDailyQueryActivity;
-(void)_checkInForFirstQueryActivity;
-(void)_handleFirstQuery;
-(void)_push_sendNotificationForContent:(id)arg0 requestIdentifier:(id)arg1 toNotificationCenter:(id)arg2 identifier:(id)arg3 bundle:(id)arg4 completion:(id)arg5 ;
-(void)_push_userNotification_faceBundleManagerDidUpdate:(id)arg0 ;
-(void)_queue_push_userNotification_processWaitingNotifications;
-(void)_recordEventOfNotification:(id)arg0 action:(NSInteger)arg1 ;
-(void)_setupUserNotificationCenter;
-(void)_viewFaceActionTappedFromNotification:(id)arg0 ;
-(void)_viewWhatsNewActionTappedFromNotification:(id)arg0 ;
-(void)argonManager:(id)arg0 didExtractKeyDescriptor:(id)arg1 toPath:(id)arg2 ;
-(void)argonManager:(id)arg0 didRemoveExtractedArgonFolderAtPath:(id)arg1 ;
-(void)argonManager:(id)arg0 failedToExtractKeyDescriptor:(id)arg1 error:(id)arg2 ;
-(void)argonManagerDidRefresh:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)displayUserNotificationForKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)ingestKeyDescriptor:(id)arg0 withMethod:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)knownKeyDescriptors:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)push_deviceChanged:(id)arg0 ;
-(void)push_postNotificationForKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)push_updatePushConnection;
-(void)queryForNewFaces:(id)arg0 ;
-(void)requestCurrentEnvironment:(id)arg0 ;
-(void)requestResetOnNextLaunch:(id)arg0 ;
-(void)setCurrentEnvironment:(NSInteger)arg0 completion:(id)arg1 ;
-(void)start;


@end


#endif