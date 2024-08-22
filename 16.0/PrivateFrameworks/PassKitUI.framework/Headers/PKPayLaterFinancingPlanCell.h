// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANCELL_H
#define PKPAYLATERFINANCINGPLANCELL_H

@class PKPayLaterFinancingPlan;


#import "PKPayLaterIconCell.h"
#import "PKPayLaterFinancingPlanCellView.h"

@interface PKPayLaterFinancingPlanCell : PKPayLaterIconCell {
    PKPayLaterFinancingPlanCellView *_view;
}


@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner


-(CGFloat)minimumHeight;
-(void)prepareForReuse;


@end


#endif