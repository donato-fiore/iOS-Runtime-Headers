// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERSHADOWEDSCROLLVIEW_H
#define _UIALERTCONTROLLERSHADOWEDSCROLLVIEW_H



#import "UIScrollView.h"
#import "_UIAlertControllerGradientView.h"

@interface _UIAlertControllerShadowedScrollView : UIScrollView {
    _UIAlertControllerGradientView *_shadowView;
}


@property (nonatomic) BOOL shouldPinToBottomOnResize; // ivar: _shouldPinToBottomOnResize


-(struct CGRect )_boundsForPinningToBottomWithNewBounds:(struct CGRect )arg0 ;
-(void)_updateScrollabilityAndShadow;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentSize:(struct CGSize )arg0 ;


@end


#endif