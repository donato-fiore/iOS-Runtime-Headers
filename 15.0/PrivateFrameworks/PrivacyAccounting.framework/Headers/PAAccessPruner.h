// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAACCESSPRUNER_H
#define PAACCESSPRUNER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PAAccessPruner : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)pruneEventsFromStartTime:(CGFloat)arg0 toEndTime:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif