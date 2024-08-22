// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCLOUDSYNCLOGEVENTDATASYNCSTATEMANAGER_H
#define HMDCLOUDSYNCLOGEVENTDATASYNCSTATEMANAGER_H

@class HMFObject, HMFUnfairLock, NSString;
@protocol HMDLogEventDataSyncStateContext;



@interface HMDCloudSyncLogEventDataSyncStateManager : HMFObject <HMDLogEventDataSyncStateContext>

 {
    HMFUnfairLock *_lock;
}


@property (setter=updateWithDataSyncState:) NSUInteger dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL firstDataSyncEventReceived; // ivar: _firstDataSyncEventReceived
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)currentContext;
-(id)init;
-(void)updateWithDataSyncState:(NSUInteger)arg0 ;


@end


#endif