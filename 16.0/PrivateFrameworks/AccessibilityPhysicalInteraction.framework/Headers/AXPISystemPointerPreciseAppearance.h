// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPISYSTEMPOINTERPRECISEAPPEARANCE_H
#define AXPISYSTEMPOINTERPRECISEAPPEARANCE_H



#import "AXPIFingerSmallAppearance.h"

@interface AXPISystemPointerPreciseAppearance : AXPIFingerSmallAppearance



-(BOOL)showFingerOutlines;
-(BOOL)showInnerCircle;
-(BOOL)useSystemFilters;
-(CGFloat)fingerInnerCircleInnerRadius;
-(CGFloat)fingerInnerRadius;
-(CGFloat)innerCircleStrokeWidth;
-(CGFloat)pressedAlpha;
-(CGFloat)pressedScale;
-(CGFloat)strokeOutlineWidth;
-(CGFloat)strokeWidth;
-(CGFloat)unpressedAlpha;
-(CGFloat)unpressedScale;
-(id)circularProgressFillColor;
-(id)deselectedStrokeColor;
-(id)pressedCircularProgressFillColor;
-(id)selectedStrokeColor;
-(id)strokeOutlineColor;


@end


#endif