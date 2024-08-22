// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTMOREINFORMATIONVIEWCONTROLLER_H
#define PKPAYMENTMOREINFORMATIONVIEWCONTROLLER_H

@class UIViewController, UIScrollView, UILabel, UITextView, UIButton, NSString;
@protocol UITextViewDelegate, PKPaymentMoreInformationViewControllerDelegate;


#import "PKBusinessChatController.h"

@interface PKPaymentMoreInformationViewController : UIViewController <UITextViewDelegate>

 {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextView *_detailTextView;
    UIButton *_businessChatButton;
    PKBusinessChatController *_businessChatController;
    NSInteger _context;
}


@property (copy, nonatomic) NSString *businessChatButtonTitle; // ivar: _businessChatButtonTitle
@property (copy, nonatomic) NSString *businessChatIdentifier; // ivar: _businessChatIdentifier
@property (copy, nonatomic) NSString *businessChatIntentName; // ivar: _businessChatIntentName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentMoreInformationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailBody; // ivar: _detailBody
@property (copy, nonatomic) NSString *detailSubtitle; // ivar: _detailSubtitle
@property (copy, nonatomic) NSString *detailTitle; // ivar: _detailTitle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowBusinessChatButton;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithContext:(NSInteger)arg0 ;
-(void)_businessChatButtonTapped;
-(void)doneButtonTapped;
-(void)loadView;
-(void)setupBusinessChatButton;
-(void)setupDetailTextView;
-(void)setupSubtitleLabel;
-(void)setupTitleLabel;
-(void)setupViewAndScrollView;
-(void)viewDidLayoutSubviews;


@end


#endif