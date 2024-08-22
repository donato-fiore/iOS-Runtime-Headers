// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPRODUCTOPTIONSSECTIONCONTROLLER_H
#define PKPAYLATERPRODUCTOPTIONSSECTIONCONTROLLER_H

@class NSNumberFormatter, NSArray, NSDictionary;
@protocol PKPayLaterProductOptionsSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSetupFlowController.h"

@interface PKPayLaterProductOptionsSectionController : PKPayLaterSectionController {
    PKPayLaterSetupFlowController *_setupController;
    id<PKPayLaterProductOptionsSectionControllerDelegate> *_delegate;
    NSNumberFormatter *_numberFormatter;
    BOOL _showAllOptions;
    NSArray *_sortedProductTypeSections;
    NSDictionary *_formattedIdentifiersByProductType;
}




-(NSInteger)_productAssessmentInstallmentCount:(id)arg0 ;
-(id)_productAssessmentForSectionIdentifier:(id)arg0 outIndex:(*NSInteger)arg1 ;
-(id)_productTileDetailRowForProductAssessment:(id)arg0 installmentIndex:(NSInteger)arg1 ;
-(id)_tileDetailRowWithTitle:(id)arg0 subtitle:(id)arg1 text:(id)arg2 detailText:(id)arg3 textSubtitle:(id)arg4 customView:(id)arg5 financingOption:(id)arg6 preliminaryAssessment:(id)arg7 ;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithSetupFlowController:(id)arg0 dynamicContentPage:(id)arg1 delegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureProductSectionWithSectionIdentifier:(id)arg0 snapshot:(id)arg1 ;
-(void)_configureShowMoreOptionsButtonSectionWithSnapshot:(id)arg0 ;
-(void)configureCellForRegistration:(id)arg0 item:(id)arg1 ;


@end


#endif