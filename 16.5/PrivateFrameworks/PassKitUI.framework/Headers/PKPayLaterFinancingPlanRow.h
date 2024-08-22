// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANROW_H
#define PKPAYLATERFINANCINGPLANROW_H

@class PKPayLaterFinancingPlan, NSString, UIImage;
@protocol PKPayLaterDashboardIconRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanRow : NSObject <PKPayLaterDashboardIconRow>

 {
    PKPayLaterFinancingPlan *_financingPlan;
    NSInteger _rowIndex;
    id *_selectionHandler;
}


@property (copy, nonatomic) NSString *amountText; // ivar: _amountText
@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) NSUInteger maskType; // ivar: _maskType
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tertiaryText; // ivar: _tertiaryText


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithFinancingPlan:(id)arg0 rowIndex:(NSInteger)arg1 selectionHandler:(id)arg2 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelectionWithContinueBlock:(id)arg0 ;


@end


#endif