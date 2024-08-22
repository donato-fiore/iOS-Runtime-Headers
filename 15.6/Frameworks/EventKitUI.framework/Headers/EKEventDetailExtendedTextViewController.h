// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILEXTENDEDTEXTVIEWCONTROLLER_H
#define EKEVENTDETAILEXTENDEDTEXTVIEWCONTROLLER_H

@class UIViewController, UITextView, NSString, EKEvent;
@protocol EKEditItemViewControllerProtocol, EKEditItemViewControllerDelegate;



@interface EKEventDetailExtendedTextViewController : UIViewController <EKEditItemViewControllerProtocol>

 {
    UITextView *_textView;
    NSString *_text;
    NSString *_textToCopy;
    EKEvent *_event;
}


@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL useCustomBackButton;


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithText:(id)arg0 title:(id)arg1 event:(id)arg2 textForCopyAction:(id)arg3 ;
-(void)_share:(id)arg0 ;
-(void)_updateConstraints;
-(void)loadTextView;
-(void)loadView;
-(void)updateTextView;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;


@end


#endif