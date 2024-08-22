// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOMPOSEREVIEWVIEWCONTROLLER_H
#define SKUICOMPOSEREVIEWVIEWCONTROLLER_H

@class SUNavigationController, SUPlaceholderViewController, NSString, UIAlertAction;
@protocol SKUIComposeReviewFormDelegate, UITextFieldDelegate, SKUIComposeReviewDelegate;


#import "SKUIComposeReviewFormViewController.h"
#import "SKUIReviewMetadata.h"
#import "SKUIWriteAReviewTemplateViewElement.h"

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UITextFieldDelegate>

 {
    SKUIComposeReviewFormViewController *_formViewController;
    SUPlaceholderViewController *_placeholderViewController;
    NSString *_nickname;
    BOOL _nicknameShouldResetOnError;
    UIAlertAction *_nicknameOKAction;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIComposeReviewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEdit) BOOL edit; // ivar: _edit
@property (readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SKUIWriteAReviewTemplateViewElement *templateViewElement; // ivar: _templateViewElement


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(NSInteger)preferredStatusBarStyle;
-(id)init;
-(void)_attemptReviewSubmission;
-(void)_cancelAction:(id)arg0 ;
-(void)_finishLoadWithOutput:(id)arg0 error:(id)arg1 ;
-(void)_loadReviewWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)_promptForNickname;
-(void)_sendDidCancel;
-(void)_sendDidSubmit;
-(void)_setNickname:(id)arg0 ;
-(void)_setNicknameShouldResetOnError:(BOOL)arg0 ;
-(void)composeReviewFormDidCancel:(id)arg0 ;
-(void)composeReviewFormDidSubmit:(id)arg0 ;
-(void)dealloc;
-(void)loadReviewWithURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)setRating:(float)arg0 ;
-(void)submitReview;


@end


#endif