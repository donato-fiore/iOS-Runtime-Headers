// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDSHEARTBEAT_H
#define NPKIDSHEARTBEAT_H

@class IDSProtobuf, NSString, NSDictionary, IDSService;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NPKIDSHeartbeat : NSObject

@property (nonatomic) NSUInteger maxUpdates; // ivar: _maxUpdates
@property (nonatomic) NSInteger messagePriority; // ivar: _messagePriority
@property (retain, nonatomic) IDSProtobuf *pendingStatusProtobuf; // ivar: _pendingStatusProtobuf
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSString *responseIdentifier; // ivar: _responseIdentifier
@property (retain, nonatomic) NSDictionary *sendOptions; // ivar: _sendOptions
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) NSObject<OS_dispatch_source> *statusTimer; // ivar: _statusTimer
@property (nonatomic) NSUInteger updatesSent; // ivar: _updatesSent


-(id)initWithPendingStatusProtobuf:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 maxUpdates:(NSUInteger)arg3 responseIdentifier:(id)arg4 sendOptions:(id)arg5 queue:(id)arg6 ;
-(id)initWithPendingStatusProtobuf:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 maxUpdates:(NSUInteger)arg3 responseIdentifier:(id)arg4 sendOptions:(id)arg5 queue:(id)arg6 updateInterval:(CGFloat)arg7 ;
-(void)_sendHeartbeat;
-(void)dealloc;
-(void)invalidate;


@end


#endif