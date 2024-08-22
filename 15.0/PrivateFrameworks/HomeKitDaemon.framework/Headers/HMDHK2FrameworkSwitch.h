// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHK2FRAMEWORKSWITCH_H
#define HMDHK2FRAMEWORKSWITCH_H

@class HMFObject, HMFUnfairLock, HMBCloudDatabase, CKContainer, NSString;
@protocol HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate, OS_dispatch_queue;



@interface HMDHK2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate>

 {
    HMFUnfairLock *_lock;
}


@property (nonatomic) BOOL autoFrameworkSwitch; // ivar: _autoFrameworkSwitch
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueueToCheckCloudKitReachability; // ivar: _callbackQueueToCheckCloudKitReachability
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHK2Zone; // ivar: _cloudDatabaseToDetectHK2Zone
@property (retain, nonatomic) CKContainer *containerToCheckCloudKitReachability; // ivar: _containerToCheckCloudKitReachability
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)readCurrentHomeKit2EnablementPreferenceKey;
+(id)logCategory;
+(void)relaunchHomed;
+(void)setHomeKit2EnablementPreferenceKey:(BOOL)arg0 ;
+(void)switchBackToHK1AndDoNotLaunchDueToPrimaryAccountRemoval;
+(void)switchBackToHK1AndRelaunch;
+(void)switchBackToHK1AndRelaunchDueToHK2MigrationFailed;
+(void)switchToHK2AndRelaunchHomed;
-(BOOL)_areWeRunningInRightEnvironment;
-(BOOL)areCloudKitServersReachable;
-(BOOL)checkExistenceOfHomeKit2SentinelZone;
-(BOOL)waitForHK2SentinelZoneToBeCreated:(CGFloat)arg0 ;
-(BOOL)waitForHK2SentinelZoneToBeFetchedFromCloud;
-(id)initWithAutoSwitch:(BOOL)arg0 ;
-(id)initWithAutoSwitchDisabled;
-(id)initWithAutoSwitchEnabled;
-(void)cloudDatabase:(id)arg0 didCreateZoneWithID:(id)arg1 ;
-(void)createHK2CloudDatabaseAndStartSyncing;
-(void)createHomeKit2SentinelZoneWithCompletionHandler:(id)arg0 ;
-(void)makeSureWeAreRunningInRightEnvironment;
-(void)performInitialSync:(id)arg0 ;
-(void)removeHK2SentinelZoneWithCompletion:(id)arg0 ;
-(void)waitForHK2SentinelZoneToBeRemoved;


@end


#endif