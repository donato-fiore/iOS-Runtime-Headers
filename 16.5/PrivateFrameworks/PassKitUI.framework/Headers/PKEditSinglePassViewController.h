// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEDITSINGLEPASSVIEWCONTROLLER_H
#define PKEDITSINGLEPASSVIEWCONTROLLER_H

@class UIViewController, PKGroup, PKPass, UIBarButtonItem, NSString;
@protocol WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder;


#import "PKPassView.h"

@interface PKEditSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKEditPassesPerformanceTestResponder, PKEditPassesDetailsResponder>

 {
    PKGroup *_group;
    PKPass *_pass;
    PKPassView *_passView;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_flexibleSpace;
    UIBarButtonItem *_infoButton;
    NSInteger _performanceTest;
    NSString *_performanceTestName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleDeletePassRequestWithPass:(id)arg0 forViewController:(id)arg1 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg0 ;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg0 ;
-(id)group;
-(id)initWithGroup:(id)arg0 pass:(id)arg1 ;
-(id)pass;
-(void)_deletePassConfirmed;
-(void)_deletePassPressed;
-(void)_didPresentDetailViewController;
-(void)_doneButtonPressed;
-(void)_moreButtonPressed;
-(void)disableDeleteButton;
-(void)enableDeleteButton;
-(void)passViewSetup;
-(void)passWasUpdated:(id)arg0 ;
-(void)setPerformanceTest:(NSInteger)arg0 ;
-(void)setPerformanceTestName:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif