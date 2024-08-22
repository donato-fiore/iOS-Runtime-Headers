// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKENGAGEMENTREMOTEVIEWTASK_H
#define SKENGAGEMENTREMOTEVIEWTASK_H

@class NSString, NSError, NSData, NSDictionary, UIWindowScene, UIViewController;
@protocol SKEngagementPresenterProtocol, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKRemoteEngagementPresenterViewController.h"

@interface SKEngagementRemoteViewTask : NSObject <SKEngagementPresenterProtocol>



@property (retain, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKRemoteEngagementPresenterViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSData *requestData; // ivar: _requestData
@property (retain, nonatomic) NSDictionary *result; // ivar: _result
@property (retain, nonatomic) NSData *resultData; // ivar: _resultData
@property (retain, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithRequestData:(id)arg0 presentingViewController:(id)arg1 windowScene:(id)arg2 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_unblock;
-(void)engagementTaskDidFinishWithResult:(id)arg0 resultData:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)preferredContentSizeDidChange:(struct CGSize )arg0 ;
-(void)presentEngagement;


@end


#endif