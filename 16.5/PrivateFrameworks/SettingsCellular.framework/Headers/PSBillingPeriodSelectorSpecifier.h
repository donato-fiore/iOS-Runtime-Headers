// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSBILLINGPERIODSELECTORSPECIFIER_H
#define PSBILLINGPERIODSELECTORSPECIFIER_H

@class PSSpecifier;
@protocol PSBillingPeriodSource, PSBillingPeriodSelectorSpecifierDelegate;



@interface PSBillingPeriodSelectorSpecifier : PSSpecifier <PSBillingPeriodSource>



@property (weak, nonatomic) NSObject<PSBillingPeriodSelectorSpecifierDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger selectedPeriod; // ivar: _selectedPeriod


-(id)getBillingPeriod:(id)arg0 ;
-(id)getLogger;
-(id)initWithStatisticsCache:(id)arg0 ;
-(void)refreshSelectorWithStatisticsCache:(id)arg0 ;
-(void)setBillingPeriod:(id)arg0 specifier:(id)arg1 ;


@end


#endif