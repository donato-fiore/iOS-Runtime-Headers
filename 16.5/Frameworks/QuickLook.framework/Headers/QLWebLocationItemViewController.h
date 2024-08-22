// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLWEBLOCATIONITEMVIEWCONTROLLER_H
#define QLWEBLOCATIONITEMVIEWCONTROLLER_H

@class QLItemViewController, WKWebView, NSLayoutConstraint;



@interface QLWebLocationItemViewController : QLItemViewController {
    WKWebView *_webView;
    id *_loadingHandler;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}




-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(id)scrollView;
-(void)_updateConstraintConstants:(BOOL)arg0 ;
-(void)dealloc;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif