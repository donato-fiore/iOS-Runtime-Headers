// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYREACHABILITYCHANGEDLOGEVENTMANAGER_H
#define HMDACCESSORYREACHABILITYCHANGEDLOGEVENTMANAGER_H

@class HMFObject, NSMutableDictionary, NSString, NSArray;
@protocol HMFLogging, HMDLogEventDailyProvider, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDAccessoryReachabilityChangedLogEventManager : HMFObject <HMFLogging, HMDLogEventDailyProvider>

 {
    NSMutableDictionary *_transportReachabilityChangeDatesByUUID;
    BOOL _enabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithHome:(id)arg0 ;
-(id)logEventDispatcher;
-(id)logIdentifier;
-(void)_disable;
-(void)_enable;
-(void)_reset;
-(void)_submit;
-(void)_submitDailyUpdateForAccessory:(id)arg0 withTransportReport:(id)arg1 ;
-(void)_submitForAccessory:(id)arg0 ;
-(void)_submitForAccessory:(id)arg0 withTransportReport:(id)arg1 reachable:(BOOL)arg2 changed:(BOOL)arg3 ;
-(void)handlePrimaryResidentUpdatedNotification:(id)arg0 ;
-(void)submitForAccessory:(id)arg0 withTransportReport:(id)arg1 reachable:(BOOL)arg2 ;


@end


#endif