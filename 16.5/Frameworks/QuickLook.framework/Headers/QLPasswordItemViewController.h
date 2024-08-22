// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPASSWORDITEMVIEWCONTROLLER_H
#define QLPASSWORDITEMVIEWCONTROLLER_H

@class QLItemViewController, QLPreviewContext;
@protocol UIDocumentPasswordViewDelegate;



@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate>

 {
    QLPreviewContext *_context;
    id *_completionBlock;
}




-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(id)passwordView;
-(void)invalidate;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadView;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewWillDisappear:(BOOL)arg0 ;
-(void)userDidEnterPassword:(id)arg0 forPasswordView:(id)arg1 ;


@end


#endif