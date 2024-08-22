// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKSAFEBROWSINGWARNING_H
#define WKSAFEBROWSINGWARNING_H

@class UIScrollView, NSString;
@protocol UITextViewDelegate;



@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate>

 {
    CompletionHandler<void (WTF::Variant<WebKit::ContinueUnsafeLoad, WTF::URL> &&)> _completionHandler;
    RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> _warning;
    WeakObjCPtr<WKSafeBrowsingTextView> _details;
    WeakObjCPtr<WKSafeBrowsingBox> _box;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)forMainFrameNavigation;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 safeBrowsingWarning:(*void)arg1 completionHandler:(*void)arg2 ;
-(void)addContent;
-(void)clickedOnLink:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)goBackClicked;
-(void)layoutSubviews;
-(void)layoutText;
-(void)showDetailsClicked;
-(void)updateContentSize;


@end


#endif