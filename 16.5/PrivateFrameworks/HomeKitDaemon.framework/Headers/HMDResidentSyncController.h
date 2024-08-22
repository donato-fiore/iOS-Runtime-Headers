// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTSYNCCONTROLLER_H
#define HMDRESIDENTSYNCCONTROLLER_H

@class NSUUID, HMFVersion, NSNotificationCenter, NSString;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHome.h"
#import "HMDManagedObjectCodingModel.h"
#import "HMDManagedObjectContext.h"

@interface HMDResidentSyncController : NSObject <HMFMessageReceiver, HMFLogging>

 {
    HMDHome *_home;
    NSUUID *_homeUUID;
    HMDManagedObjectCodingModel *_codingModel;
    HMFVersion *_schemaVersion;
    HMDManagedObjectContext *_context;
    NSNotificationCenter *_notificationCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)changeToken:(id)arg0 isAheadOf:(id)arg1 ;
-(id)decodeToken:(id)arg0 error:(*id)arg1 ;
-(id)dispatchContextForMessage:(id)arg0 ;
-(id)encodeToken:(id)arg0 error:(*id)arg1 ;
-(id)initWithHome:(id)arg0 codingModel:(id)arg1 notificationCenter:(id)arg2 persistence:(id)arg3 ;
-(id)logIdentifier;


@end


#endif