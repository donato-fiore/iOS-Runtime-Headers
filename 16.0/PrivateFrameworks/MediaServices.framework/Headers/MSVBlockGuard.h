// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVBLOCKGUARD_H
#define MSVBLOCKGUARD_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSVTimer.h"

@interface MSVBlockGuard : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    id *_interruptionHandler;
}




-(BOOL)disarm;
-(id)init;
-(id)initWithDeallocHandler:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 interruptionHandler:(id)arg1 ;
-(void)_interruptWithReason:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif