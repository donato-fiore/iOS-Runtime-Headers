// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPASSWORDVIEWCONTROLLER_H
#define PDFPASSWORDVIEWCONTROLLER_H

@class UIViewController, UIDocumentPasswordView;
@protocol UIDocumentPasswordViewDelegate, PDFPasswordViewControllerDelegate;



@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate>

 {
    NSObject<PDFPasswordViewControllerDelegate> *_delegate;
    UIDocumentPasswordView *_uiDocPasswordView;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)clearPasswordField;
-(void)focusOnPasswordField;
-(void)presentInvalidPasswordAlertWithParentViewController:(id)arg0 ;
-(void)userDidEnterPassword:(id)arg0 forPasswordView:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif