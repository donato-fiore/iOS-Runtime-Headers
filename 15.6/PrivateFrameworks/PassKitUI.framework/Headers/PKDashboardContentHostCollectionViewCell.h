// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDCONTENTHOSTCOLLECTIONVIEWCELL_H
#define PKDASHBOARDCONTENTHOSTCOLLECTIONVIEWCELL_H

@class UIView;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardContentHostCollectionViewCell : PKDashboardCollectionViewCell

@property (retain, nonatomic) UIView *hostedContentView; // ivar: _hostedContentView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif