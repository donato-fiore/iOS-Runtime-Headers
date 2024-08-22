// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKCOMPOSEREVIEWVIEWCONTROLLER_H
#define SKCOMPOSEREVIEWVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, NSURL, SKInvocationQueueProxy<SKUIServiceComposeReviewViewController>;
@protocol SKComposeReviewDelegate;


#import "SKRemoteComposeReviewViewController.h"

@interface SKComposeReviewViewController : UIViewController {
    _UIAsyncInvocation *_cancelRequest;
    NSURL *_compositionURL;
    id *_prepareBlock;
    SKRemoteComposeReviewViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> *_serviceProxy;
}


@property (weak, nonatomic) NSObject<SKComposeReviewDelegate> *delegate; // ivar: _delegate


-(id)initWithCompositionURL:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_didPrepareWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)_tearDownAfterError:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)prepareWithCompletionBlock:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif