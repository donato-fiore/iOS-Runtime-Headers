// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASEXTENSIONVIEWCONTROLLER_H
#define _ASEXTENSIONVIEWCONTROLLER_H

@class UIViewController, NSTimer, NSString, NSExtension, NSExtensionContext;
@protocol _ASExtensionHostContextDelegate;



@interface _ASExtensionViewController : UIViewController <_ASExtensionHostContextDelegate>

 {
    UIViewController *_remoteViewController;
    NSTimer *_nonUIRequestTimer;
    BOOL _allowRequestingUIFromNonUIRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissOnBackground; // ivar: _dismissOnBackground
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSExtensionContext *nonUIHostContext; // ivar: _nonUIHostContext
@property (readonly) Class superclass;


-(BOOL)_shouldUseNonUIRequestTimer;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)initWithExtension:(id)arg0 ;
-(void)_beginNonUIRequest:(BOOL)arg0 connectionHandler:(id)arg1 ;
-(void)_beginRequestWithConnectionHandler:(id)arg0 ;
-(void)_extensionRequestDidFinish:(BOOL)arg0 ;
-(void)_invalidateNonUIRequestTimerIfNeeded;
-(void)_nonUIRequestDidRequireUserInteraction;
-(void)_nonUIRequestTimedOut;
-(void)_requestDidFailWithError:(id)arg0 completion:(id)arg1 ;
-(void)_setRemoteViewController:(id)arg0 ;
-(void)prepareToCancelRequestWithHostContext:(id)arg0 error:(id)arg1 completion:(id)arg2 ;


@end


#endif