// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PNPWIZARDINKWEIGHTCONTROL_H
#define PNPWIZARDINKWEIGHTCONTROL_H

@class UIView, NSString;
@protocol PNPPencilInteractionEventDestination;


#import "PNPGradientView.h"

@interface PNPWizardInkWeightControl : UIView <PNPPencilInteractionEventDestination>

 {
    CGFloat _value;
    PNPGradientView *_gradient;
    UIView *_knob;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat value;


-(id)_knobColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)eventSource:(id)arg0 hadPencilDoubleTapped:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif