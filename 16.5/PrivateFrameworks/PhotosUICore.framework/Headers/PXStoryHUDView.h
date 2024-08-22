// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYHUDVIEW_H
#define PXSTORYHUDVIEW_H

@class UIView, UILabel;
@protocol PXGReusableView;


#import "PXStoryHUDViewConfiguration.h"

@interface PXStoryHUDView : UIView <PXGReusableView>



@property (readonly, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) PXStoryHUDViewConfiguration *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif