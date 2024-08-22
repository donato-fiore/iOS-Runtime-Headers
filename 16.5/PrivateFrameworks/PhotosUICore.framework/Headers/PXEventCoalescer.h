// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEVENTCOALESCER_H
#define PXEVENTCOALESCER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface PXEventCoalescer : NSObject {
    NSHashTable *_observers;
}




+(id)delayedCoalescerWithDelay:(CGFloat)arg0 ;
+(id)rateLimitingCoalescerWithRate:(CGFloat)arg0 ;
-(id)init;
-(void)cancel;
-(void)inputEvent;
-(void)registerObserver:(id)arg0 ;
-(void)signalObservers;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif