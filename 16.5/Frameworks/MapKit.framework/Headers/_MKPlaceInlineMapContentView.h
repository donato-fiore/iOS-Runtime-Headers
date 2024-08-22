// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKPLACEINLINEMAPCONTENTVIEW_H
#define _MKPLACEINLINEMAPCONTENTVIEW_H

@class MKUIViewControllerClickableRootView, NSLayoutConstraint, UIView, UIImageView, UIImage;


#import "MKViewWithHairline.h"
#import "_MKUILabel.h"
#import "MKMapItemView.h"

@interface _MKPlaceInlineMapContentView : MKUIViewControllerClickableRootView {
    MKViewWithHairline *_hairlineView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
    UIView *_mapView;
    UIImageView *_mapImageView;
    _MKUILabel *_titleLabel;
}


@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property (retain, nonatomic) UIImage *map;
@property (retain, nonatomic) MKMapItemView *mapItemView; // ivar: _mapItemView


-(BOOL)hasTitle;
-(BOOL)useImageView;
-(CGFloat)titleHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeDidChange;
-(void)infoCardThemeChanged;


@end


#endif