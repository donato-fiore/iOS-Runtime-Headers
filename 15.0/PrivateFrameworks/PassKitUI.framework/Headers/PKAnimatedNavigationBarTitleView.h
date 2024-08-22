// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKANIMATEDNAVIGATIONBARTITLEVIEW_H
#define PKANIMATEDNAVIGATIONBARTITLEVIEW_H

@class UIView;



@interface PKAnimatedNavigationBarTitleView : UIView {
    UIView *_titleView;
    int _viewState;
}




-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setTitleView:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif