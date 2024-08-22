// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTSYNCCONTROLLER_H
#define HMDRESIDENTSYNCCONTROLLER_H

@class NSUUID, NSString;
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
    HMDManagedObjectContext *_context;
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
-(id)initWithHome:(id)arg0 codingModel:(id)arg1 persistence:(id)arg2 ;
-(id)logIdentifier;


@end


#endif