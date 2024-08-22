// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBUTTONCOMPONENT_H
#define CKBUTTONCOMPONENT_H



#import "CKComponent.h"

@interface CKButtonComponent : CKComponent {
    CGSize _intrinsicSize;
}




+(id)newWithTitles:(*void)arg0 titleColors:(*void)arg1 images:(*void)arg2 backgroundImages:(*void)arg3 titleFont:(id)arg4 selected:(BOOL)arg5 enabled:(BOOL)arg6 action:(struct CKTypedComponentAction<UIEvent *> )arg7 size:(struct CKComponentSize *)arg8 attributes:(*void)arg9 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration )arg10 ;
-(struct CKComponentLayout )computeLayoutThatFits:(struct CKSizeRange )arg0 ;


@end


#endif