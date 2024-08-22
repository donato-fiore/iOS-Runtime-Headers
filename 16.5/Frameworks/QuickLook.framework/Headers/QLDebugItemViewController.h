// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDEBUGITEMVIEWCONTROLLER_H
#define QLDEBUGITEMVIEWCONTROLLER_H

@class QLItemViewController, UITextView, NSMutableDictionary, NSLayoutConstraint;



@interface QLDebugItemViewController : QLItemViewController {
    BOOL _constraintsSetUp;
    UITextView *_logTextView;
    NSMutableDictionary *_selectorToCount;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}




-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(id)_attributesForLogLevel:(NSUInteger)arg0 ;
-(void)_addLog:(id)arg0 logLevel:(NSUInteger)arg1 ;
-(void)_encounterMethodCall:(SEL)arg0 ;
-(void)_encounterMethodCall:(SEL)arg0 animatedValue:(NSUInteger)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)previewIsAppearingWithProgress:(CGFloat)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)previewWillFinishAppearing;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif