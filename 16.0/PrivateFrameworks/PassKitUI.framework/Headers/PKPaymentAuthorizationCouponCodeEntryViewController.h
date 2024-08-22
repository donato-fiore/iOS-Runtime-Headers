// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONCOUPONCODEENTRYVIEWCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONCOUPONCODEENTRYVIEWCONTROLLER_H

@class UIViewController, NSString, NSError, UIScrollView, UIStackView, UITextField, UIView;
@protocol UITextFieldDelegate, PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate;



@interface PKPaymentAuthorizationCouponCodeEntryViewController : UIViewController <UITextFieldDelegate>

 {
    NSString *_couponCode;
    BOOL _awaitingCouponCodeUpdate;
    NSError *_firstError;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    UITextField *_textField;
    UIView *_accessoryView;
    BOOL _active;
    BOOL _finishing;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)isPaymentStyle;
-(BOOL)isViewTranslucent;
-(BOOL)shouldUpdatePreferredContentSize;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)canonicalizedText;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)clearAccessoryView;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)reloadDataItem;
-(void)setAccessoryViewToActivityIndicator;
-(void)setAccessoryViewToCheckmark;
-(void)setAccessoryViewToError:(id)arg0 ;
-(void)textFieldDidEditingChanged:(id)arg0 ;
-(void)updateAccessoryView;
-(void)updatePreferredContentSize;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif