// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWACTIVITYXPC_H
#define NWACTIVITYXPC_H

@class NSXPCConnection, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWActivityXPC : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSMutableArray *pendingCompletionHandlers; // ivar: _pendingCompletionHandlers
@property (nonatomic) unsigned int qosClass; // ivar: _qosClass
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)description;
-(id)initWithQueue:(id)arg0 qosClass:(unsigned int)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)retrieveMetricsForActivity:(unsigned char)arg0 completion:(id)arg1 ;
-(void)start;


@end


#endif