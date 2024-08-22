// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVSNAPDECELERATION_H
#define ASVSNAPDECELERATION_H



#import "ASVDeceleration.h"

@interface ASVSnapDeceleration : ASVDeceleration

@property (nonatomic) float currentOffset; // ivar: _currentOffset
@property (nonatomic) float maxOffset; // ivar: _maxOffset
@property (nonatomic) float minOffset; // ivar: _minOffset


-(float)decelerationDelta;
-(id)initWithVelocity:(float)arg0 minEndDelta:(float)arg1 startingOffset:(float)arg2 minOffset:(float)arg3 maxOffset:(float)arg4 ;
-(void)calculateSnapFromStartingOffset:(float)arg0 startingVelocity:(float)arg1 deltaTime:(float)arg2 outOffset:(*float)arg3 outVelocity:(*float)arg4 ;


@end


#endif