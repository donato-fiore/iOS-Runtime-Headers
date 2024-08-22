// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDAEMON_H
#define BMDAEMON_H

@class NSString;
@protocol BMComputeSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BMComputeXPCSubscriptionBookmarkStorage.h"
#import "BMComputeXPCPublisherServer.h"
#import "BMComputeSourceServer.h"

@interface BMDaemon : NSObject <BMComputeSource>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) BMComputeXPCSubscriptionBookmarkStorage *bookmarkStorage; // ivar: _bookmarkStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer; // ivar: _publisherServer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BMComputeSourceServer *sourceServer; // ivar: _sourceServer
@property (readonly) Class superclass;


+(id)computePublisherServiceName;
+(id)computePublisherStreamName;
+(id)computeSourceServiceName;
+(void)_handlePrivacyResetNotification;
+(void)prunePrivateStreamDirectory:(id)arg0 maxAge:(CGFloat)arg1 maxStreamSize:(NSUInteger)arg2 ;
+(void)pruneRestrictedStreams;
+(void)registerXPCActivities;
-(id)fetchBookmarkWithSubscription:(id)arg0 upToTimestamp:(id)arg1 success:(*BOOL)arg2 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)sendEventWithStreamIdentifier:(id)arg0 timestamp:(id)arg1 ;
-(void)setUpNotificationHandler;


@end


#endif