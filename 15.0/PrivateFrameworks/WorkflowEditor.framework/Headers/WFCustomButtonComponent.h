// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCUSTOMBUTTONCOMPONENT_H
#define WFCUSTOMBUTTONCOMPONENT_H

@class NSAttributedString, NSString, UIFont, UIImage, UITraitCollection;


#import "CKComponent.h"

@interface WFCustomButtonComponent : CKComponent {
    CGSize _intrinsicSize;
    NSAttributedString *_attributedTitle;
    NSString *_title;
    UIFont *_titleFont;
    UIImage *_image;
    UIImage *_backgroundImage;
    UIEdgeInsets _contentEdgeInsets;
    CGFloat _spacing;
    NSInteger _numberOfLines;
    UITraitCollection *_traitCollection;
}




+(id)newWithTitles:(*void)arg0 attributedTitles:(*void)arg1 titleColors:(*void)arg2 images:(*void)arg3 backgroundImages:(*void)arg4 titleFont:(id)arg5 selected:(BOOL)arg6 enabled:(BOOL)arg7 action:(struct CKTypedComponentAction<UIEvent *> )arg8 size:(struct CKComponentSize *)arg9 buttonClass:(*void)arg10 attributes:(*void)arg11 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration )arg12 ;
+(id)newWithTitles:(*void)arg0 attributedTitles:(*void)arg1 titleColors:(*void)arg2 images:(*void)arg3 backgroundImages:(*void)arg4 titleFont:(id)arg5 selected:(BOOL)arg6 enabled:(BOOL)arg7 traitCollection:(id)arg8 action:(struct CKTypedComponentAction<UIEvent *> )arg9 size:(struct CKComponentSize *)arg10 buttonClass:(*void)arg11 attributes:(*void)arg12 titleLabelAttributes:(*void)arg13 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration )arg14 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif