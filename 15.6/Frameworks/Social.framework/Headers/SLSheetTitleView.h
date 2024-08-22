// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLSHEETTITLEVIEW_H
#define SLSHEETTITLEVIEW_H

@class UIView, UIImageView, NSMutableArray, UILabel, NSString;



@interface SLSheetTitleView : UIView {
    UIImageView *_serviceIconView;
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
}


@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setupTitleLabel;
-(void)layoutSubviews;
-(void)setServiceIconImage:(id)arg0 ;
-(void)sizeToFit;
-(void)updateConstraints;


@end


#endif