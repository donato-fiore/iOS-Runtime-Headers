// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERPRODUCTOPTIONSVIEWCONTROLLER_H
#define PKPAYLATERPRODUCTOPTIONSVIEWCONTROLLER_H

@class NSString;
@protocol PKPayLaterProductOptionsSectionControllerDelegate, PKPayLaterSectionControllerDelegate;


#import "PKPayLaterSetupViewController.h"
#import "PKPayLaterProductOptionsSectionController.h"

@interface PKPayLaterProductOptionsViewController : PKPayLaterSetupViewController <PKPayLaterProductOptionsSectionControllerDelegate, PKPayLaterSectionControllerDelegate>

 {
    PKPayLaterProductOptionsSectionController *_sectionController;
    NSUInteger _pageType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSetupFlowController:(id)arg0 dynamicContentPageType:(NSUInteger)arg1 ;
-(void)_loadNextViewController;
-(void)_selectedEligibleAssessment;
-(void)productOptionsSectionController:(id)arg0 didSelectFinancingOption:(id)arg1 ;
-(void)productOptionsSectionController:(id)arg0 didSelectPreliminaryAssessment:(id)arg1 ;
-(void)reloadAllSectionsAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif