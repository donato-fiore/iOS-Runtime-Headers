// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSPORTDEATHSENTINEL_H
#define BSPORTDEATHSENTINEL_H

@class NSString;
@protocol BSInvalidatable, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSMachPortSendRight.h"

@interface BSPortDeathSentinel : NSObject <BSInvalidatable>

 {
    BSMachPortSendRight *_sendRight;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_source> *_source;
    BOOL _activated;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _callOutQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(void)monitorSendRight:(id)arg0 withHandler:(id)arg1 ;
-(id)initWithSendRight:(id)arg0 ;
-(void)activateWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif