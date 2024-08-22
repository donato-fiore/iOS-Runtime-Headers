// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYALERTVIEW_H
#define VUILIBRARYALERTVIEW_H

@class UIView, UIScrollView;


#import "VUILabel.h"

@interface VUILibraryAlertView : UIView {
    UIScrollView *_scrollView;
    UIView *_containerView;
}


@property (readonly, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif