// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVRUBBERBAND_H
#define ASVRUBBERBAND_H


#import <Foundation/Foundation.h>


@interface ASVRubberBand : NSObject

@property (nonatomic) float maxOffset; // ivar: _maxOffset
@property (nonatomic) float minOffset; // ivar: _minOffset
@property (nonatomic) float overshoot; // ivar: _overshoot
@property (nonatomic) float rubberBandFactor; // ivar: _rubberBandFactor


-(BOOL)offsetIsWithinRubberBandedRange:(float)arg0 ;
-(float)offsetForRubberBandOffset:(float)arg0 ;
-(float)rubberBandOffsetForOffset:(float)arg0 ;
-(id)initWithRubberBandFactor:(float)arg0 minOffset:(float)arg1 maxOffset:(float)arg2 overshoot:(float)arg3 ;


@end


#endif