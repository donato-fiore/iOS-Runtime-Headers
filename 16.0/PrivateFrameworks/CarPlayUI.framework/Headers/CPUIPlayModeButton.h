// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUIPLAYMODEBUTTON_H
#define CPUIPLAYMODEBUTTON_H



#import "CPUIMediaButton.h"

@interface CPUIPlayModeButton : CPUIMediaButton



-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(BOOL)showBezelInTouch;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocusLayerSelected;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayer;
-(id)colorForTouchFocusLayerSelected;
-(id)tintColorForUnhighlightedTextLabel;


@end


#endif