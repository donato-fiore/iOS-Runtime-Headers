// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMURLSESSION_H
#define IMURLSESSION_H

@class AMSURLSession;
@protocol OS_dispatch_queue;



@interface IMURLSession : AMSURLSession {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSInteger _state;
}


@property (nonatomic) BOOL followsRedirects; // ivar: _followsRedirects
@property (readonly, nonatomic) BOOL isUsable;
@property (readonly, nonatomic) NSInteger state;


-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)_configureProtocolHandler;
-(void)finishTasksAndInvalidate;
-(void)invalidateAndCancel;


@end


#endif