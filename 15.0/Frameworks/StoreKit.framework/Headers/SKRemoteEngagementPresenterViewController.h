// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKREMOTEENGAGEMENTPRESENTERVIEWCONTROLLER_H
#define SKREMOTEENGAGEMENTPRESENTERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SKEngagementViewServiceProtocol, SKEngagementPresenterProtocol, OS_dispatch_queue, OS_dispatch_semaphore;


#import "SKRemoteEngagementRemoteViewController.h"

@interface SKRemoteEngagementPresenterViewController : UIViewController <SKEngagementViewServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKEngagementPresenterProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *engagementPresentationQueue; // ivar: _engagementPresentationQueue
@property (readonly) NSUInteger hash;
@property (retain) SKRemoteEngagementRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) NSObject<OS_dispatch_semaphore> *remoteViewControllerSemaphore; // ivar: _remoteViewControllerSemaphore
@property (readonly) Class superclass;


-(id)init;
-(void)_addRemoteView;
-(void)_loadRemoteViewController;
-(void)presentEngagementRequestData:(id)arg0 clientBundleID:(id)arg1 completion:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif