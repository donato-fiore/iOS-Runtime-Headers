// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFHEARTBEAT_H
#define AFHEARTBEAT_H

@class NSString, NSDate;
@protocol AFInvalidating, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AFHeartBeat : NSObject <AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_heartBeatTimer;
    NSObject<OS_dispatch_source> *_expirationTimer;
    id *_heartBeatHandler;
    id *_invalidationHandler;
    uint8_t _numberOfHeartBeats;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *effectiveDate; // ivar: _effectiveDate
@property (readonly, nonatomic) CGFloat expirationDuration; // ivar: _expirationDuration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heartBeatInterval; // ivar: _heartBeatInterval
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger numberOfHeartBeats;
@property (readonly) Class superclass;


// -(id)initWithIdentifier:(id)arg0 queue:(id)arg1 effectiveDate:(id)arg2 expirationDuration:(CGFloat)arg3 heartBeatInterval:(CGFloat)arg4 heartBeatHandler:(id)arg5 invalidationHandler:(unk)arg6  ;
-(void)_fire;
-(void)_invalidate;
-(void)dealloc;
-(void)invalidate;


@end


#endif