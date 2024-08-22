// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPREQUESTRESPONSECONTROLLER_H
#define MPREQUESTRESPONSECONTROLLER_H

@class NSString, NSError;
@protocol MPRequestCancellationToken, OS_dispatch_source, OS_dispatch_queue, MPRequestResponseControllerDelegate;

#import <Foundation/Foundation.h>


@interface MPRequestResponseController : NSObject {
    NSInteger _numberOfObservers;
    NSString *_requestID;
    BOOL _shouldAutomaticallyLoad;
    BOOL _needsReload;
    id<MPRequestCancellationToken> *_cancelToken;
    CGFloat _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSError *_lastError;
    id *_pendingResponse;
    NSUInteger _stateHandle;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (weak, nonatomic) NSObject<MPRequestResponseControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) id *request; // ivar: _request
@property (retain, nonatomic) id *response; // ivar: _response


-(id)_onQueue_stateDictionary;
-(id)init;
-(void)_onQueue_reloadIfNeeded;
-(void)_onQueue_scheduleRetryAfterInterval:(CGFloat)arg0 ;
-(void)_onQueue_updateRequestID;
-(void)_responseDidInvalidate:(id)arg0 ;
-(void)beginAutomaticResponseLoading;
-(void)dealloc;
-(void)endAutomaticResponseLoading;
-(void)reloadIfNeeded;
-(void)setNeedsReload;
-(void)setNeedsReloadForSignificantRequestChange;


@end


#endif