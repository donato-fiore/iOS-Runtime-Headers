// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACCESSIBILITYCOMPONENTVIEW_H
#define WFACCESSIBILITYCOMPONENTVIEW_H

@class UIView;


#import "WFAccessibilityActionComponent.h"

@interface WFAccessibilityComponentView : UIView

@property (retain, nonatomic, setter=ck_setComponent:) WFAccessibilityActionComponent *ck_component;


-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_ck_accessibilityTarget;
-(id)accessibilityAttributedValue;
-(id)accessibilityValue;
-(struct CGPoint )accessibilityActivationPoint;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;


@end


#endif