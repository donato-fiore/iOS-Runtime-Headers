// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSYNCCANCELLINGPROGRESS_H
#define PLSYNCCANCELLINGPROGRESS_H

@class NSProgress;



@interface PLSyncCancellingProgress : NSProgress

@property (copy) id *pl_cancellationHandler; // ivar: _pl_cancellationHandler


+(id)discreteProgressWithTotalUnitCount:(NSInteger)arg0 ;
-(void)cancel;
-(void)setCancellationHandler:(id)arg0 ;


@end


#endif