// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVDAMPINGDECELERATION_H
#define ASVDAMPINGDECELERATION_H



#import "ASVDeceleration.h"

@interface ASVDampingDeceleration : ASVDeceleration

@property (nonatomic) float decelerationRate; // ivar: _decelerationRate


-(float)decelerationDelta;
-(id)initWithVelocity:(float)arg0 minEndDelta:(float)arg1 decelerationRate:(float)arg2 ;


@end


#endif