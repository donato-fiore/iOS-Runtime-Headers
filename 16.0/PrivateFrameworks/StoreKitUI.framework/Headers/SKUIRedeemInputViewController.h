// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREDEEMINPUTVIEWCONTROLLER_H
#define SKUIREDEEMINPUTVIEWCONTROLLER_H

@class UIImageView, UIBarButtonItem, NSString;
@protocol UITextFieldDelegate;


#import "SKUIRedeemStepViewController.h"
#import "SKUIRedeemTextField.h"
#import "SKUIRedeemITunesPassLockup.h"

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate>

 {
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}


@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *initialCode; // ivar: _initialCode
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_newTextFieldWithClientContext:(id)arg0 ;
-(id)initWithRedeemCategory:(NSInteger)arg0 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_passbookLockupAction:(id)arg0 ;
-(void)_redeemAction:(id)arg0 ;
-(void)_redeemConfigurationImagesDidLoad:(id)arg0 ;
-(void)_termsButtonAction:(id)arg0 ;
-(void)_textFieldTextDidChange:(id)arg0 ;
-(void)_toggleActivityIndicatorBarButtonItem:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadView;


@end


#endif