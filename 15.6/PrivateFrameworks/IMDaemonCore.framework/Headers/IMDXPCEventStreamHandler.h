// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDXPCEVENTSTREAMHANDLER_H
#define IMDXPCEVENTSTREAMHANDLER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDXPCEventStreamHandler : NSObject

@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(id)initWithEventStreamName:(char *)arg0 ;
-(id)queueForDelegate:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)didReceiveEventWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif