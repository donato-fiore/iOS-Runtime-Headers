// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCONNECTEDCOLLECTIONVIEWCELL_H
#define PKCONNECTEDCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UILabel, NSString, UIColor;


#import "PKConnectedCircleView.h"
#import "PKGradientVerticalConnector.h"
#import "PKConnectedCircleTarget.h"

@interface PKConnectedCollectionViewCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    PKConnectedCircleView *_circleView;
}


@property (retain, nonatomic) PKGradientVerticalConnector *bottomConnector; // ivar: _bottomConnector
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UIColor *detailTextColor; // ivar: _detailTextColor
@property (retain, nonatomic) PKConnectedCircleTarget *target; // ivar: _target
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor
@property (retain, nonatomic) PKGradientVerticalConnector *topConnector; // ivar: _topConnector


+(CGFloat)textInsetWithOuterRadius:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureView;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif