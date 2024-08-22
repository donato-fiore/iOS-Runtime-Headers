// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOREQUESTCOUNTERTICKETBASE_H
#define GEOREQUESTCOUNTERTICKETBASE_H

@class NSString, NSURLSessionTask;
@protocol GEORequestCounterTicket, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "GEORequestCounterTicketBase.h"

@interface GEORequestCounterTicketBase : NSObject <GEORequestCounterTicket>

 {
    NSString *_appId;
    ? _type;
    BOOL _logNetworkActivityOnly;
    BOOL _complete;
    CGFloat _start;
    CGFloat _end;
    NSInteger _subTaskXmitBytes;
    NSInteger _subTaskRecvBytes;
    NSUInteger _subTaskUsedInterfaces;
    GEORequestCounterTicketBase *_parentTask;
    unsigned char _subTaskResult;
    unsigned char _subtasks;
    NSURLSessionTask *_task;
    NSObject<OS_nw_activity> *_nwActivity;
    NSUInteger _signpostId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_requestCounterTicketForType:(struct ? )arg0 appId:(id)arg1 withParent:(id)arg2 logNetworkActivityOnly:(BOOL)arg3 ;
+(id)requestCounterTicketForType:(struct ? )arg0 appId:(id)arg1 ;
-(id)createSubtask:(BOOL)arg0 ;
-(void)_incrementForApp:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 requestType:(struct ? )arg3 result:(unsigned char)arg4 xmitBytes:(NSInteger)arg5 recvBytes:(NSInteger)arg6 usedInterfaces:(NSUInteger)arg7 ;
-(void)_subTask:(id)arg0 completed:(unsigned char)arg1 started:(CGFloat)arg2 finished:(CGFloat)arg3 xmitBytes:(NSInteger)arg4 recvBytes:(NSInteger)arg5 usedInterfaces:(NSUInteger)arg6 ;
-(void)dealloc;
-(void)requestCompletedWithError:(id)arg0 ;
-(void)requestCompletedWithResult:(unsigned char)arg0 ;
-(void)startingRequestWithTask:(id)arg0 ;


@end


#endif