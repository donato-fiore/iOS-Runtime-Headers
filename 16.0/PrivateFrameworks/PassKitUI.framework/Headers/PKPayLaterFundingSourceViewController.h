// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFUNDINGSOURCEVIEWCONTROLLER_H
#define PKPAYLATERFUNDINGSOURCEVIEWCONTROLLER_H

@class PKPayLaterPaymentSource, NSString;
@protocol PKPayLaterFundingSourceSectionControllerDelegate, PKPayLaterSectionControllerDelegate;


#import "PKPayLaterSetupViewController.h"
#import "PKPayLaterFundingSourceSectionController.h"

@interface PKPayLaterFundingSourceViewController : PKPayLaterSetupViewController <PKPayLaterFundingSourceSectionControllerDelegate, PKPayLaterSectionControllerDelegate>

 {
    PKPayLaterPaymentSource *_selectedFundingSource;
    PKPayLaterFundingSourceSectionController *_sectionController;
    BOOL _autoPayment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_subtitle;
-(id)_title;
-(id)additionalAnalyticsDictionary;
-(id)initWithSetupFlowController:(id)arg0 ;
-(void)_updateEnabledButtons;
-(void)didSelectFundingSource:(id)arg0 ;
-(void)didUpdateAutoPayment:(BOOL)arg0 ;
-(void)nextButtonTapped;
-(void)reloadFundingSources;
-(void)setShowNavigationBarSpinner:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif