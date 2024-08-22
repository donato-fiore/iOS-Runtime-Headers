// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMBIOMESCHEDULER_H
#define BMBIOMESCHEDULER_H

@class NSString;
@protocol BMDSLScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BMBookmarkStorage.h"
#import "BMComputeXPCPublisherClient.h"

@interface BMBiomeScheduler : NSObject <BMDSLScheduler>

 {
    BMBookmarkStorage *_bookmarkStorage;
}


@property (readonly, nonatomic) BMComputeXPCPublisherClient *client; // ivar: _client
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL waking; // ivar: _waking


+(id)new;
-(id)init;
-(id)initWithIdentifier:(id)arg0 targetQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 targetQueue:(id)arg1 client:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 targetQueue:(id)arg1 client:(id)arg2 storageProvider:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 targetQueue:(id)arg1 client:(id)arg2 waking:(BOOL)arg3 ;
-(id)initWithIdentifier:(id)arg0 targetQueue:(id)arg1 client:(id)arg2 waking:(BOOL)arg3 storageProvider:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 targetQueue:(id)arg1 waking:(BOOL)arg2 ;
-(void)subscribeWithDSLGraph:(id)arg0 forSubscriber:(id)arg1 ;


@end


#endif