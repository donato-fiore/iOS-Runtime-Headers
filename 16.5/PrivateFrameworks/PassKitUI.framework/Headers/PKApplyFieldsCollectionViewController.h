// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYFIELDSCOLLECTIONVIEWCONTROLLER_H
#define PKAPPLYFIELDSCOLLECTIONVIEWCONTROLLER_H

@class NSString;
@protocol PKApplyInlineFooterSectionControllerDelegate, PKApplyCollectionViewSectionControllerDelegate;


#import "PKApplyCollectionViewController.h"
#import "PKApplyInlineFooterSectionController.h"
#import "PKApplyRadioPickerSectionController.h"

@interface PKApplyFieldsCollectionViewController : PKApplyCollectionViewController <PKApplyInlineFooterSectionControllerDelegate, PKApplyCollectionViewSectionControllerDelegate>

 {
    PKApplyInlineFooterSectionController *_inlineFooterSectionController;
    PKApplyRadioPickerSectionController *_pickerSectionController;
    BOOL _needsToReachEndOfPage;
    NSUInteger _useInlinePrimaryButton;
    BOOL _primaryButtonLoading;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFieldsSubmitted; // ivar: _hasFieldsSubmitted
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_determineNextEnablementWithPage:(id)arg0 ;
-(id)_recomputeSections;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_terminateFlow;
-(void)_updatePrimaryButton;
-(void)handleNextStep;
-(void)primaryButtonTapped;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)recomputeSectionsWithReload:(BOOL)arg0 ;
-(void)reloadDataAnimated:(BOOL)arg0 ;
-(void)showButtonSpinner:(BOOL)arg0 ;
-(void)submitFields;
-(void)verifyAndSubmitFields;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif