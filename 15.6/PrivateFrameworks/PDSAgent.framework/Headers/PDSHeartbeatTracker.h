// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSHEARTBEATTRACKER_H
#define PDSHEARTBEATTRACKER_H

@class IMTimer, NSDate;
@protocol PDSHeartbeatTrackerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PDSBag.h"

@interface PDSHeartbeatTracker : NSObject

@property (weak, nonatomic) NSObject<PDSHeartbeatTrackerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) IMTimer *heartbeatTimer; // ivar: _heartbeatTimer
@property (readonly, nonatomic) BOOL isPassedTrackedHeartbeatDate;
@property (copy, nonatomic) id *kvStoreBlock; // ivar: _kvStoreBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL scheduledActivity; // ivar: _scheduledActivity
@property (retain, nonatomic) PDSBag *serverBag; // ivar: _serverBag
@property (readonly, nonatomic) NSDate *trackedHeartbeatDate;


// -(id)initWithDelegate:(id)arg0 queue:(id)arg1 kvStoreBlock:(id)arg2 serverBag:(unk)arg3  ;
-(void)_handleHeartbeatFired;
-(void)_markNextCheckpointTimeWithTTL:(CGFloat)arg0 ;
-(void)_setupMaintenanceActivity;
-(void)noteShouldNotTrackHeartbeat;
-(void)noteShouldTrackHeartbeat;
-(void)noteUpdatedHeartbeatTTL:(CGFloat)arg0 ;


@end


#endif