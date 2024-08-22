// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLSTEPPERVIEWPROFILE_H
#define HUQUICKCONTROLSTEPPERVIEWPROFILE_H

@class NSArray;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile

@property (nonatomic) NSUInteger numberOfSegments; // ivar: _numberOfSegments
@property (copy, nonatomic) NSArray *segmentTitles; // ivar: _segmentTitles
@property (nonatomic) BOOL showSegmentTitles; // ivar: _showSegmentTitles
@property (nonatomic) NSUInteger stepperBehavior; // ivar: _stepperBehavior
@property (nonatomic) NSUInteger stepperStyle; // ivar: _stepperStyle


-(BOOL)supportsTouchContinuation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif