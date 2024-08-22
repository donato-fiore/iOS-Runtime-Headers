// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPUSHTOKENFETCHER_H
#define PKPUSHTOKENFETCHER_H

@class NSMutableArray, APSConnection, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableArray *_completionHandlers;
    APSConnection *_pushConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_handleTimeout;
-(void)_invokeCompletionWithPushToken:(id)arg0 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)dealloc;
-(void)fetchPushTokenWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif