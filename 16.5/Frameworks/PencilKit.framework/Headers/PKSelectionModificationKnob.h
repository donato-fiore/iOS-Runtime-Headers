// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTIONMODIFICATIONKNOB_H
#define PKSELECTIONMODIFICATIONKNOB_H

@class CALayer;



@interface PKSelectionModificationKnob : CALayer {
    CALayer *_knobLayer;
    CALayer *_knobTailLayer;
    BOOL _isBrushSelecting;
    BOOL _isRTL;
    NSInteger _knobLocation;
    *CGColor _knobColor;
}




-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif