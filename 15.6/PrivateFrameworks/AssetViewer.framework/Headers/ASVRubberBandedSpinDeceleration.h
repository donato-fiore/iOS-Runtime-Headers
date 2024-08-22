// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVRUBBERBANDEDSPINDECELERATION_H
#define ASVRUBBERBANDEDSPINDECELERATION_H



#import "ASVDampingDeceleration.h"
#import "ASVRubberBand.h"

@interface ASVRubberBandedSpinDeceleration : ASVDampingDeceleration

@property (nonatomic) float currentOffset; // ivar: _currentOffset
@property (nonatomic) float previousRubberBandedOffset; // ivar: _previousRubberBandedOffset
@property (retain, nonatomic) ASVRubberBand *rubberBand; // ivar: _rubberBand


-(float)decelerationDelta;
-(id)initWithVelocity:(float)arg0 minEndDelta:(float)arg1 startingOffset:(float)arg2 decelerationRate:(float)arg3 rubberBand:(id)arg4 ;


@end


#endif