// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADCLIENTDPIDMANAGER_H
#define ADCLIENTDPIDMANAGER_H

@class NSString, NSDate, NSMutableArray, CKContainer, CKRecordID, CKRecordZoneID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ADClientDPIDManager : NSObject {
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
}


@property (retain, nonatomic) NSString *DPID; // ivar: _DPID
@property (retain) NSDate *dpidReconcileStartDate; // ivar: _dpidReconcileStartDate
@property NSUInteger dpidReconcileState; // ivar: _dpidReconcileState
@property (nonatomic) BOOL isPrivateContainerSecure; // ivar: _isPrivateContainerSecure
@property (readonly, nonatomic) BOOL isTest; // ivar: _isTest
@property (retain, nonatomic) NSMutableArray *operationsInProgress; // ivar: _operationsInProgress
@property (retain, nonatomic) CKContainer *privateContainer; // ivar: _privateContainer
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKRecordID *recordIDLegacy; // ivar: _recordIDLegacy
@property (nonatomic) BOOL sandboxEnvironment; // ivar: _sandboxEnvironment
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption; // ivar: _supportsDeviceToDeviceEncryption
@property (nonatomic) BOOL updateInProgress; // ivar: _updateInProgress
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(id)DPIDOperationTypeToString:(NSUInteger)arg0 ;
+(id)sharedInstance;
-(BOOL)canContinueProcessing:(id)arg0 ;
-(BOOL)devicePersonalizedAdsEnabled;
-(BOOL)iCloudAccountSubscribed;
-(BOOL)isLoggedIntoiTunes;
-(BOOL)isRestrictedByApple;
-(NSUInteger)primaryiCloudAccountSecurityLevel;
-(id)conformDPIDToUseWithRecord:(id)arg0 legacyRecord:(id)arg1 ;
-(id)containerWithIDString:(id)arg0 ;
-(id)init;
-(id)insecureContainer;
-(id)operationQueueLog;
-(id)primaryiCloudAccountAltDSID;
-(id)secureContainer;
-(id)subscriptionIdentifier;
-(void)backupFlowForCloudKitWorkAtTime:(id)arg0 with:(id)arg1 ;
-(void)continueReconcileWithAccountStatus:(NSInteger)arg0 andError:(id)arg1 with:(id)arg2 ;
-(void)createErrorForPrivateDB:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDPIDfromiCloud:(id)arg0 ;
-(void)finishOperation:(NSUInteger)arg0 ;
-(void)handleCloudKitError:(id)arg0 ;
-(void)handlePushNotification:(id)arg0 completionHandler:(id)arg1 ;
-(void)reconcileDPID:(id)arg0 ;
-(void)removeDPIDfromiCloud:(id)arg0 ;
-(void)resetEncryptedZone:(id)arg0 ;
-(void)resolveAccountVsStoredManateeState:(NSInteger)arg0 andError:(id)arg1 with:(id)arg2 ;
-(void)retryIfNeeded:(id)arg0 ;
-(void)saveDPIDtoiCloud:(id)arg0 completionHandler:(id)arg1 ;
-(void)setiCloudAccountSubscribed:(BOOL)arg0 ;
-(void)setupiCloudSubscription:(id)arg0 ;
-(void)startOperation:(NSUInteger)arg0 ;
-(void)syncDPIDWithiCloud:(id)arg0 ;
-(void)teardowniCloudSubscription:(id)arg0 ;
-(void)updateActiveRecordICloudDSID;


@end


#endif