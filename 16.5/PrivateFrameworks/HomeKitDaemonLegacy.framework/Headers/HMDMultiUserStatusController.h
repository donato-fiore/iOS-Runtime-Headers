// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMULTIUSERSTATUSCONTROLLER_H
#define HMDMULTIUSERSTATUSCONTROLLER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDMultiUserStatusControllerDelegate, OS_dispatch_queue;



@interface HMDMultiUserStatusController : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property NSUInteger dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDMultiUserStatusControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger haveActiveSignedInAccount; // ivar: _haveActiveSignedInAccount
@property NSInteger multiUserState; // ivar: _multiUserState
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)didChangeHasActiveAccountState:(BOOL)arg0 ;
-(void)didUpdateDataSyncState:(NSUInteger)arg0 ;


@end


#endif