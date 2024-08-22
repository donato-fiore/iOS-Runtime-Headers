// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSPAYMENTSUMMARYHEADERVIEW_H
#define PKPASSPAYMENTSUMMARYHEADERVIEW_H

@class UIView, UILabel, UIColor, NSString;



@interface PKPassPaymentSummaryHeaderView : UIView {
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
}


@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *primaryTitle;
@property (retain, nonatomic) NSString *secondaryTitle;


+(CGFloat)preferredHeight;
+(id)_titleFont;
+(struct CGSize )_sizeForLabelWithText:(id)arg0 font:(id)arg1 maximumNumberOfLines:(NSInteger)arg2 width:(CGFloat)arg3 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif