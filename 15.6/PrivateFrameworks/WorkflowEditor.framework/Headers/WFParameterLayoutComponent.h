// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPARAMETERLAYOUTCOMPONENT_H
#define WFPARAMETERLAYOUTCOMPONENT_H

@class NSString, NSArray, UITraitCollection;


#import "CKComponent.h"
#import "CKInsetComponent.h"

@interface WFParameterLayoutComponent : CKComponent {
    NSString *_label;
    NSArray *_labelsToAlignTo;
    CKInsetComponent *_labelComponent;
    WFParameterLayoutComponentStyle _style;
    WFCompressionResistance _controlResistance;
    UITraitCollection *_traitCollection;
}


@property (readonly, nonatomic) CKComponent *controlComponent; // ivar: _controlComponent
@property (readonly, nonatomic) CKTypedComponentAction<> selectionAction; // ivar: _selectionAction


+(id)newWithLabel:(id)arg0 labelsToAlignTo:(id)arg1 selectionAction:(struct CKTypedComponentAction<> )arg2 selectionEnabled:(BOOL)arg3 traitCollection:(id)arg4 style:(struct WFParameterLayoutComponentStyle *)arg5 accessibility:(struct WFParameterLayoutComponentAccessibility *)arg6 controlResistance:(struct WFCompressionResistance *)arg7 controlComponent:(id)arg8 ;
+(id)newWithView:(*void)arg0 size:(struct CKComponentSize *)arg1 ;
+(struct UIEdgeInsets )edgeInsets;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;
-(void)handleParameterLayoutPressed;


@end


#endif