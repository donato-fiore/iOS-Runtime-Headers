// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTACKEDLEADINGTRAILINGLABELVIEW_H
#define PKSTACKEDLEADINGTRAILINGLABELVIEW_H

@class UIView, UILabel, NSString;



@interface PKStackedLeadingTrailingLabelView : UIView {
    UILabel *_leadingPrimaryLabel;
    UILabel *_leadingSecondaryLabel;
    UILabel *_trailingPrimaryLabel;
    UILabel *_trailingSecondaryLabel;
}


@property (copy, nonatomic) NSString *leadingPrimaryText; // ivar: _leadingPrimaryText
@property (copy, nonatomic) NSString *leadingSecondaryText; // ivar: _leadingSecondaryText
@property (copy, nonatomic) NSString *trailingPrimaryText; // ivar: _trailingPrimaryText
@property (copy, nonatomic) NSString *trailingSecondaryText; // ivar: _trailingSecondaryText


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif