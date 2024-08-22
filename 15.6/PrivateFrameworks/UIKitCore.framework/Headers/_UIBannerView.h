// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBANNERVIEW_H
#define _UIBANNERVIEW_H

@class CALayer;


#import "UIView.h"
#import "UILabel.h"
#import "_UIBannerContent.h"
#import "UIImageView.h"

@interface _UIBannerView : UIView

@property (retain, nonatomic) CALayer *backgroundLayer; // ivar: _backgroundLayer
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) _UIBannerContent *content; // ivar: _content
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif