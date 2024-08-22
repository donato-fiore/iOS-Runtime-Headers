// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANCELLVIEW_H
#define PKPAYLATERFINANCINGPLANCELLVIEW_H

@class UIView, PKPayLaterFinancingPlan, UILabel, UIImageView, UIActivityIndicatorView;


#import "PKProgressBar.h"

@interface PKPayLaterFinancingPlanCellView : UIView {
    PKPayLaterFinancingPlan *_financingPlan;
    NSUInteger _context;
    CGSize _disclosureViewSize;
    NSInteger _rowIndex;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinner;
    PKProgressBar *_progressBar;
}


@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner


-(id)initWithFinancingPlan:(id)arg0 context:(NSUInteger)arg1 rowIndex:(NSInteger)arg2 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif