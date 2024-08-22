// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FPDEXTENSIONREQUESTRECORD_H
#define _FPDEXTENSIONREQUESTRECORD_H

@class NSDate, NSProgress, NSObservation, FPXPCAutomaticErrorProxy;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _FPDExtensionRequestRecord : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_source> *_progressTimer;
    NSDate *_timeout;
    SEL _selector;
    NSProgress *_progress;
    NSObject<OS_dispatch_queue> *_queue;
    id *_handler;
    NSDate *_lastEventDate;
    NSObservation *_fractionCompletedObservation;
}


@property (readonly, weak) FPXPCAutomaticErrorProxy *proxy; // ivar: _proxy


-(char *)_timeoutExpirationState;
-(id)description;
-(id)initWithSelector:(SEL)arg0 proxy:(id)arg1 timeout:(CGFloat)arg2 queue:(id)arg3 timeoutHandler:(id)arg4 ;
-(void)_handleTimeout;
-(void)_setupProgressTimer;
-(void)_setupTimer:(CGFloat)arg0 ;
-(void)cancelTimeout;
-(void)monitorProgress:(id)arg0 ;


@end


#endif