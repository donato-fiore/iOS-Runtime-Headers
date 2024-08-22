// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICPROVISIONINGPAGEVIEWCONTROLLER_H
#define PKDYNAMICPROVISIONINGPAGEVIEWCONTROLLER_H

@class UIImage, NSString, PKDynamicProvisioningPageContent;
@protocol PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable;


#import "PKExplanationViewController.h"

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable>

 {
    UIImage *_heroImage;
}


@property (copy, nonatomic) id *bodyButtonAction; // ivar: _bodyButtonAction
@property (copy, nonatomic) id *cancelButtonAction; // ivar: _cancelButtonAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *doneButtonAction; // ivar: _doneButtonAction
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *linkAction; // ivar: _linkAction
@property (readonly, nonatomic) PKDynamicProvisioningPageContent *page; // ivar: _page
@property (copy, nonatomic) id *primaryButtonAction; // ivar: _primaryButtonAction
@property (copy, nonatomic) id *secondaryButtonAction; // ivar: _secondaryButtonAction
@property (readonly) Class superclass;


-(id)initWithPage:(id)arg0 context:(NSInteger)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewControllerDidSelectDone:(id)arg0 ;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif