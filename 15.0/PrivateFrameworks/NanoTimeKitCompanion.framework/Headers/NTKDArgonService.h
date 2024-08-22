// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDARGONSERVICE_H
#define NTKDARGONSERVICE_H

@class NSString, NSMutableSet, APSConnection, NSUserDefaults, UNUserNotificationCenter;
@protocol NTKArgonManagerObserver, NSXPCListenerDelegate, NTKFaceSupportServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKFaceSupportNotificationActionEventRecorder.h"
#import "NTKArgonAssetDownloader.h"
#import "NTKArgonManager.h"

@interface NTKDArgonService : NSObject <NTKArgonManagerObserver, NSXPCListenerDelegate, NTKFaceSupportServer>



@property (readonly, nonatomic) NTKFaceSupportNotificationActionEventRecorder *actionRecorder; // ivar: _actionRecorder
@property (readonly, nonatomic) NTKArgonAssetDownloader *assetDownloader; // ivar: _assetDownloader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *keyDescriptorsAwaitingUserNotifications; // ivar: _keyDescriptorsAwaitingUserNotifications
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
-(BOOL)_argonIsComplete;
-(BOOL)_handleDailyAssetQuery;
-(BOOL)_handleDailyQuery;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_baseCriteriaForArgonActivities;
-(id)_criteriaForDailyAssetRefreshActiviy;
-(id)_criteriaForDailyRefreshActiviy;
-(id)_criteriaForFirstAssetQueryActivity;
-(id)_criteriaForFirstQueryActivity;
-(id)_init;
-(void)_addFaceActionTappedFromNotification:(id)arg0 ;
-(void)_checkInForDailyAssetActivity;
-(void)_checkInForDailyQueryActivity;
-(void)_checkInForFirstAssetActivity;
-(void)_checkInForFirstQueryActivity;
-(void)_handleFirstAssetQuery;
-(void)_handleFirstQuery;
-(void)_push_sendNotificationForContent:(id)arg0 toNotificationCenter:(id)arg1 identifier:(id)arg2 bundle:(id)arg3 completion:(id)arg4 ;
-(void)_push_userNotification_faceBundleManagerDidUpdate:(id)arg0 ;
-(void)_queue_push_userNotification_processWaitingNotifications;
-(void)_recordEventOfNotification:(id)arg0 action:(NSInteger)arg1 ;
-(void)_setupUserNotificationCenter;
-(void)_viewFaceActionTappedFromNotification:(id)arg0 ;
-(void)argonManager:(id)arg0 didExtractKeyDescriptor:(id)arg1 toPath:(id)arg2 ;
-(void)argonManager:(id)arg0 didRemoveExtractedArgonFolderAtPath:(id)arg1 ;
-(void)argonManager:(id)arg0 failedToExtractKeyDescriptor:(id)arg1 error:(id)arg2 ;
-(void)argonManagerDidRefresh:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)ingestKeyDescriptor:(id)arg0 withCompletion:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)push_deviceChanged:(id)arg0 ;
-(void)push_postNotificationForKeyDescriptor:(id)arg0 ;
-(void)push_updatePushConnection;
-(void)queryForNewFaces:(id)arg0 ;
-(void)start;


@end


#endif