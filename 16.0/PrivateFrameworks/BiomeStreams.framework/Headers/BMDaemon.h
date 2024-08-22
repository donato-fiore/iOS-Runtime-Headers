// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDAEMON_H
#define BMDAEMON_H

@class NSString;
@protocol BMComputeSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BMBookmarkStorage.h"
#import "BMStreamsAccessService.h"
#import "BMComputeXPCPublisherServer.h"
#import "BMComputeSourceServer.h"

@interface BMDaemon : NSObject <BMComputeSource>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, nonatomic) BMBookmarkStorage *bookmarkStorage; // ivar: _bookmarkStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BMStreamsAccessService *legacyAccessService; // ivar: _legacyAccessService
@property (readonly, nonatomic) BMComputeXPCPublisherServer *publisherServer; // ivar: _publisherServer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BMComputeSourceServer *sourceServer; // ivar: _sourceServer
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMStreamsAccessService *systemAccessService; // ivar: _systemAccessService
@property (readonly, nonatomic) BMStreamsAccessService *userAccessService; // ivar: _userAccessService


+(BOOL)isAgent;
+(id)DSLValidator;
+(id)computePublisherServiceName;
+(id)computePublisherStreamName;
+(id)computeSourceServiceName;
+(id)loadDKStreamNameToTTL;
+(id)new;
+(void)_handlePrivacyResetNotification;
+(void)donateLaunchEvents;
+(void)prunePrivateStreamDirectory:(id)arg0 maxAge:(CGFloat)arg1 maxStreamSize:(NSUInteger)arg2 ;
+(void)pruneRestrictedStreams;
+(void)pruneRestrictedStreamsInDomain:(NSUInteger)arg0 ;
+(void)registerXPCActivities;
-(id)fetchBookmarkWithSubscription:(id)arg0 upToTimestamp:(id)arg1 success:(*BOOL)arg2 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)sendEventWithStreamIdentifier:(id)arg0 timestamp:(id)arg1 storeEvent:(id)arg2 ;
-(void)setUpNotificationHandler;


@end


#endif