// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTBILLPAYMENTLEARNMOREVIEWCONTROLLER_H
#define PKACCOUNTBILLPAYMENTLEARNMOREVIEWCONTROLLER_H

@class UIViewController, PKAccount, UIScrollView, NSString, NSArray, UILabel, UITextView;
@protocol UITextViewDelegate, UIScrollViewDelegate;



@interface PKAccountBillPaymentLearnMoreViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate>

 {
    PKAccount *_account;
    UIScrollView *_scrollView;
    NSString *_titleText;
    NSString *_subtitleText;
    NSArray *_suggestionDescriptions;
    NSArray *_footnotes;
    NSString *_customerAgreementText;
    NSString *_customerAgreementLinkText;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_suggestionDescriptionLabels;
    NSArray *_footnoteLabels;
    UITextView *_customerAgreementTextView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_customerAgreementAttributedString;
-(id)initWithAccount:(id)arg0 ;
-(void)_reportEventForPassIfNecessary:(id)arg0 ;
-(void)doneButtonTapped;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif