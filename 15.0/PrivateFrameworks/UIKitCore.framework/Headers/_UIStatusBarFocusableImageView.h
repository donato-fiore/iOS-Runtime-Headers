// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARFOCUSABLEIMAGEVIEW_H
#define _UISTATUSBARFOCUSABLEIMAGEVIEW_H

@class UIStatusBarImageView;


#import "UIColor.h"

@interface _UIStatusBarFocusableImageView : UIStatusBarImageView {
    UIColor *_unfocusedTintColor;
}


@property (retain, nonatomic) UIColor *focusedImageTintColor; // ivar: _focusedImageTintColor


-(BOOL)canBecomeFocused;
-(BOOL)isUserInteractionEnabled;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;


@end


#endif