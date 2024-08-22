// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREADERVIEWCONTROLLER_H
#define CKREADERVIEWCONTROLLER_H

@class UIViewController, NSString, NSAttributedString, UITextView;
@protocol UIWebViewDelegate, CKReaderViewControllerDelegate;



@interface CKReaderViewController : UIViewController <UIWebViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKReaderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *messageGUID; // ivar: _messageGUID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView
@property (nonatomic) _NSRange visibleRange;


+(id)readerScrollPositionCache;
+(id)readerViewControllerForChatItem:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif