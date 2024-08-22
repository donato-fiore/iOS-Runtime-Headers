// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMIMAGEQUADEDITKNOBACCESSIBILITYELEMENT_H
#define ICDOCCAMIMAGEQUADEDITKNOBACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, CALayer;


#import "ICDocCamImageQuadEditOverlay.h"

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) CALayer *knobLayer; // ivar: _knobLayer
@property (weak, nonatomic) ICDocCamImageQuadEditOverlay *overlayView; // ivar: _overlayView


-(BOOL)accessibilityViewIsModal;
-(BOOL)isAccessibilityElement;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)initWithKnobLayer:(id)arg0 overlayView:(id)arg1 ;
-(struct CGRect )accessibilityFrame;


@end


#endif