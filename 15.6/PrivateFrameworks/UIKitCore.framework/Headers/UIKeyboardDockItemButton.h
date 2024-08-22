// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDDOCKITEMBUTTON_H
#define UIKEYBOARDDOCKITEMBUTTON_H



#import "UIButton.h"

@interface UIKeyboardDockItemButton : UIButton

@property (nonatomic) CGRect tapActionRegion; // ivar: _tapActionRegion


-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )rectWithSize:(struct CGSize )arg0 forContentRect:(struct CGRect )arg1 withAlignmentRectInsets:(struct UIEdgeInsets )arg2 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;


@end


#endif