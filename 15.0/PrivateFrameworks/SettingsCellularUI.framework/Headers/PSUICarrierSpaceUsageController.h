// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICARRIERSPACEUSAGECONTROLLER_H
#define PSUICARRIERSPACEUSAGECONTROLLER_H

@class PSListController;



@interface PSUICarrierSpaceUsageController : PSListController



-(BOOL)hasMultipleDevicesOfTheSameType;
-(BOOL)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)arg0 ;
-(BOOL)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)shouldShowCalls:(id)arg0 ;
-(BOOL)shouldShowData:(id)arg0 ;
-(BOOL)shouldShowMessages:(id)arg0 ;
-(BOOL)shouldShowOnlyRemainingCalls:(id)arg0 ;
-(BOOL)shouldShowOnlyRemainingData:(id)arg0 ;
-(BOOL)shouldShowOnlyRemainingMessages:(id)arg0 ;
-(BOOL)shouldShowPlanSection:(id)arg0 ;
-(BOOL)shouldShowRemainingCredit:(id)arg0 ;
-(id)barGraphColors;
-(id)callsDescription:(id)arg0 ;
-(id)dataUsageDescription:(id)arg0 ;
-(id)deviceTypeSectionLabelForAccountMetrics:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)messagesDescription:(id)arg0 ;
-(id)planCategorySectionLabelForPlanMetrics:(id)arg0 ;
-(id)remainingCreditDescription:(id)arg0 ;
-(id)specifiers;
-(id)usageCategories;
-(id)usageGraphSpecifierForSection:(id)arg0 ;
-(id)usageSections;
-(void)carrierSpaceChanged;
-(void)simStatusChanged;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif