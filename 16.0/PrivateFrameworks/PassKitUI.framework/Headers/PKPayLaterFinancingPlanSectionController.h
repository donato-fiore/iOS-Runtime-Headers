// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANSECTIONCONTROLLER_H

@class PKPaymentPass, NSString, NSDateFormatter, NSNumberFormatter, NSOrderedSet, PKPayLaterFinancingPlan, UIImage, PKPayLaterPaymentIntentController;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerDelegate, PKPayLaterFinancingPlanPaymentScheduleComposerDataSource, PKDashboardMessagesViewDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterTitleDetailRow.h"
#import "PKPayLaterStackedLeadingTrailingRow.h"
#import "PKPayLaterTitleDetailValueRow.h"
#import "PKPayLaterSubtitleRow.h"
#import "PKPayLaterFinancingPlanPaymentScheduleComposer.h"
#import "PKCollectionHeaderView.h"

@interface PKPayLaterFinancingPlanSectionController : PKPayLaterSectionController <PKPayLaterFinancingPlanPaymentScheduleComposerDelegate, PKPayLaterFinancingPlanPaymentScheduleComposerDataSource, PKDashboardMessagesViewDelegate>

 {
    PKPayLaterTitleDetailRow *_fundingSourceRow;
    PKPaymentPass *_payLaterPass;
    PKPayLaterStackedLeadingTrailingRow *_totalPaidRow;
    PKPayLaterTitleDetailRow *_totalFinancedRow;
    PKPayLaterTitleDetailValueRow *_statusSummaryRow;
    PKPayLaterSubtitleRow *_miniMirandaRow;
    PKPayLaterFinancingPlanPaymentScheduleComposer *_paymentScheduleComposer;
    NSString *_currentDashboardMessageIdentifier;
    NSInteger _currentDashboardMessageIndex;
    PKCollectionHeaderView *_headerView;
    NSDateFormatter *_shortDateFormatter;
    NSDateFormatter *_mediumDateFormatter;
    NSNumberFormatter *_numberFormatter;
}


@property (retain, nonatomic) NSOrderedSet *dashboardMessages; // ivar: _dashboardMessages
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *merchantIcon; // ivar: _merchantIcon
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController
@property (readonly) Class superclass;


-(CGFloat)headerViewHeight;
-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(NSUInteger)_dashboardMessageIndexForIdentifier:(id)arg0 inMessages:(id)arg1 ;
-(id)_totalCostRow;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 payLaterPass:(id)arg2 dynamicContentPage:(id)arg3 merchantIcon:(id)arg4 paymentIntentController:(id)arg5 delegate:(id)arg6 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)listLayoutConfigurationWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureDashboardMessagesSection:(id)arg0 ;
-(void)_configureDefaultSummarySection:(id)arg0 ;
-(void)_configureFundingSourceSection:(id)arg0 ;
-(void)_configureMiniMirandaSection:(id)arg0 ;
-(void)_configurePaymentScheduleSection:(id)arg0 ;
-(void)_configureStatusInformationSummarySection:(id)arg0 ;
-(void)_configureSummarySection:(id)arg0 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)messagesView:(id)arg0 scrolledToMessageWithIdentifier:(id)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)reportAnalyticsEvent:(id)arg0 ;


@end


#endif