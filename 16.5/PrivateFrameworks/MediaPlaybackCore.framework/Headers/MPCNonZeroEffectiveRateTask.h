// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCNONZEROEFFECTIVERATETASK_H
#define MPCNONZEROEFFECTIVERATETASK_H

@class AVPlayerItem;


#import "MPCDeferrableTask.h"

@interface MPCNonZeroEffectiveRateTask : MPCDeferrableTask

@property (weak, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem


-(id)initWithPlayerItem:(id)arg0 identifier:(id)arg1 timeout:(CGFloat)arg2 queue:(id)arg3 block:(id)arg4 ;
-(void)effectiveRateDidChange:(id)arg0 ;
-(void)taskDidExecute;


@end


#endif