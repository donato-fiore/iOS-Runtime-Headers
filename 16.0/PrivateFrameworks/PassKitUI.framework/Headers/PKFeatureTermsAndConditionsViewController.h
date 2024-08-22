// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFEATURETERMSANDCONDITIONSVIEWCONTROLLER_H
#define PKFEATURETERMSANDCONDITIONSVIEWCONTROLLER_H

@class RemoteUIController, QLItem, QLPreviewController, NSData, UINavigationController, NSString;
@protocol QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable, PKPaymentSetupViewControllerDelegate;


#import "PKPortraitNavigationController.h"

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable>

 {
    BOOL _isIpad;
    RemoteUIController *_termsUIController;
    QLItem *_pdfItem;
    QLPreviewController *_previewController;
    NSData *_pdfData;
    NSData *_htmlData;
    BOOL _performedInitialLoad;
}


@property (readonly, nonatomic) UINavigationController *containerNavigationController; // ivar: _containerNavigationController
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL useModalPresentation; // ivar: _useModalPresentation


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)_loadPDFViewControllerWithFileName:(id)arg0 ;
-(id)displayTitle;
-(id)initWithSetupDelegate:(id)arg0 context:(NSInteger)arg1 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)provideDataForItem:(id)arg0 ;
-(void)_handleWalletTermsLink:(id)arg0 withCompletion:(id)arg1 ;
-(void)_loadHTML;
-(void)_loadHTMLViewController;
-(void)_loadPDF;
-(void)_pk_dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)_renderTermsView;
-(void)_showTermsSpinner:(BOOL)arg0 objectModel:(id)arg1 ;
-(void)_updateTermsData:(id)arg0 ;
-(void)dismissViewControllerWithCompletion:(id)arg0 ;
-(void)htmlTermsDataWithCompletion:(id)arg0 ;
-(void)initalTermsDataWithCompletion:(id)arg0 ;
-(void)loader:(id)arg0 didFinishLoadWithError:(id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)popViewControllerWithCompletion:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentErrorAlert;
-(void)presentWithNavigationController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)previewControllerWillDismiss:(id)arg0 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;
-(void)reportAnalyticsForTermsLink:(id)arg0 ;
-(void)termsAccepted:(BOOL)arg0 completion:(id)arg1 ;
-(void)termsShown;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif