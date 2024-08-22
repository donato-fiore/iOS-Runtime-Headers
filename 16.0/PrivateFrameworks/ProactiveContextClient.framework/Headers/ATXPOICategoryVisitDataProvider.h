// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPOICATEGORYVISITDATAPROVIDER_H
#define ATXPOICATEGORYVISITDATAPROVIDER_H

@class BMBiomeScheduler, BPSSink;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXPOICategoryStream.h"
#import "ATXPOICategoryEventAggregator.h"

@interface ATXPOICategoryVisitDataProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) BMBiomeScheduler *scheduler; // ivar: _scheduler
@property (retain, nonatomic) BPSSink *sink; // ivar: _sink
@property (retain, nonatomic) ATXPOICategoryStream *stream; // ivar: _stream
@property (retain, nonatomic) ATXPOICategoryEventAggregator *streamAggregator; // ivar: _streamAggregator


-(BOOL)hasExitedAllCategories:(id)arg0 ;
-(id)getCurrentVisit;
-(id)init;
-(id)initWithStream:(id)arg0 ;
-(void)subscribeToPOIChangesForCategories:(id)arg0 observer:(id)arg1 enterSelector:(SEL)arg2 exitSelector:(SEL)arg3 sinkCompletion:(id)arg4 ;
-(void)unsubscribeToPOIChanges;


@end


#endif