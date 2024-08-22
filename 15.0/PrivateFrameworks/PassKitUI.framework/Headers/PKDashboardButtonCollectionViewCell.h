// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDBUTTONCOLLECTIONVIEWCELL_H
#define PKDASHBOARDBUTTONCOLLECTIONVIEWCELL_H

@class UIActivityIndicatorView, UILabel, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardButtonCollectionViewCell : PKDashboardCollectionViewCell {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
}


@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL showActivity; // ivar: _showActivity
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetFonts;
-(void)_updateTextColor;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif