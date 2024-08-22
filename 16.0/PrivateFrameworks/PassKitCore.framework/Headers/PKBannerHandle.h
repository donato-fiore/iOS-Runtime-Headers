// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBANNERHANDLE_H
#define PKBANNERHANDLE_H

@class BSServiceConnection<BSServiceConnectionClient>, NSArray, NSString;
@protocol PKBannerService_Client, PKInvalidatable, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PKBannerServiceRequest.h"

@interface PKBannerHandle : NSObject <PKBannerService_Client, PKInvalidatable>

 {
    PKBannerServiceRequest *_request;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_messageTracker;
    uint8_t _invalidated;
    BOOL _started;
    BOOL _posted;
    BOOL _complete;
    id *_completion;
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    NSArray *_attributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


+(id)createHandleForRequest:(id)arg0 queue:(id)arg1 ;
-(id)init;
-(void)didCompleteWithReply:(id)arg0 ;
-(void)displayWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif