// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANLISTSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANLISTSECTIONCONTROLLER_H

@class PKPayLaterPaymentIntentController, NSArray, NSMutableDictionary, NSNumberFormatter, PKPayLaterBusinessChatTopic, PKPaymentPass;
@protocol PKPayLaterFinancingPlanListSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPaymentTransactionIconGenerator.h"

@interface PKPayLaterFinancingPlanListSectionController : PKPayLaterSectionController {
    PKPayLaterPaymentIntentController *_paymentIntentController;
    NSArray *_sortedPriaryFinancingPlanIdentifiers;
    NSArray *_sortedSecondaryFinancingPlanIdentifiers;
    NSMutableDictionary *_primaryFinancingPlanRows;
    NSMutableDictionary *_secondaryFinancingPlanRows;
    NSMutableDictionary *_icons;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    id<PKPayLaterFinancingPlanListSectionControllerDelegate> *_delegate;
    NSNumberFormatter *_numberFormatter;
}


@property (retain, nonatomic) PKPayLaterBusinessChatTopic *businessChatTopic; // ivar: _businessChatTopic
@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) PKPaymentPass *payLaterPass; // ivar: _payLaterPass
@property (retain, nonatomic) NSArray *primaryFinancingPlans; // ivar: _primaryFinancingPlans
@property (retain, nonatomic) NSArray *secondaryFinancingPlans; // ivar: _secondaryFinancingPlans
@property (nonatomic) NSInteger tertiaryFinancingPlansCount; // ivar: _tertiaryFinancingPlansCount


-(id)_createFinancingPlanRowForPlan:(id)arg0 rowIndex:(NSInteger)arg1 ;
-(id)_createIconTextRowForPlan:(id)arg0 ;
-(id)_rowForPlanIdentifier:(id)arg0 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 context:(NSUInteger)arg1 primaryFinancingPlans:(id)arg2 secondaryFinancingPlans:(id)arg3 tertiaryFinancingPlansCount:(NSInteger)arg4 payLaterPass:(id)arg5 businessChatTopic:(id)arg6 paymentIntentController:(id)arg7 dynamicContentPage:(id)arg8 delegate:(id)arg9 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(struct NSDirectionalEdgeInsets )firstSectionHeaderEdgeInsets;
-(void)_configurePrimaryFinancingPlansSection:(id)arg0 ;
-(void)_configureSecondaryFinancingPlansSection:(id)arg0 ;
-(void)_configureTertiaryFinancingPlansCountSection:(id)arg0 ;
-(void)_showTopicExplanationForRow:(id)arg0 topic:(id)arg1 financingPlan:(id)arg2 continueBlock:(id)arg3 ;
-(void)_updateCachedValues;
-(void)_updateIconForFinancingPlan:(id)arg0 row:(id)arg1 ;


@end


#endif