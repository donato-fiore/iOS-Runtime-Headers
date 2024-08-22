// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKCONTINUITYCOORDINATOR_H
#define NPKCONTINUITYCOORDINATOR_H

@class NSUserActivity;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKContinuityCoordinator : NSObject

@property (weak, nonatomic) NSUserActivity *currentUserActivity; // ivar: _currentUserActivity
@property (retain, nonatomic) NSUserActivity *getPaymentPassesUserActivity; // ivar: _getPaymentPassesUserActivity
@property (retain, nonatomic) NSUserActivity *individualPassUserActivity; // ivar: _individualPassUserActivity
@property (retain, nonatomic) NSUserActivity *passListUserActivity; // ivar: _passListUserActivity
@property (retain, nonatomic) NSUserActivity *provisionPassUserActivity; // ivar: _provisionPassUserActivity
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSUserActivity *setUpPeerPaymentUserActivity; // ivar: _setUpPeerPaymentUserActivity
@property (retain, nonatomic) NSUserActivity *viewPeerPaymentUserActivity; // ivar: _viewPeerPaymentUserActivity


+(id)sharedContinuityCoordinator;
-(id)_init;
-(id)_skeletonBridgeUserActivity;
-(id)init;
-(id)userActivityForPassWithUniqueID:(id)arg0 ;
-(void)_saveUserActivity:(id)arg0 ;
-(void)dealloc;
-(void)invalidateAllActivities;
-(void)userNeedsPaymentPasses;
-(void)userNeedsToProvisionPassWithUniqueID:(id)arg0 ;
-(void)userNeedsToSetUpPeerPayment;
-(void)userNeedsToViewPeerPaymentForHandle:(id)arg0 ;
-(void)userViewingPassList;
-(void)userViewingPassWithUniqueID:(id)arg0 isPaymentPass:(BOOL)arg1 ;


@end


#endif