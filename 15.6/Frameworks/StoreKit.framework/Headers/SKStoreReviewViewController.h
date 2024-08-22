// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTOREREVIEWVIEWCONTROLLER_H
#define SKSTOREREVIEWVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, NSString, SKInvocationQueueProxy<SKUIServiceReviewViewController>;
@protocol SKRemoteReviewViewControllerDelegate;


#import "SKRemoteReviewViewController.h"

@interface SKStoreReviewViewController : UIViewController <SKRemoteReviewViewControllerDelegate>



@property (retain, nonatomic) _UIAsyncInvocation *cancelRequest; // ivar: _cancelRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKRemoteReviewViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSString *reviewRequestToken; // ivar: _reviewRequestToken
@property (retain, nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


-(id)initWithReviewRequestToken:(id)arg0 ;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)dealloc;
-(void)remoteReviewViewControllerTerminatedWithError:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif