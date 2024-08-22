// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUPROGRESS_H
#define TSUPROGRESS_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUProgress : NSObject {
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
}


@property (readonly, getter=isIndeterminate) BOOL indeterminate;
@property (readonly) CGFloat maxValue;
@property (copy) NSString *message; // ivar: mMessage
@property (readonly) CGFloat value;


-(BOOL)protected_hasProgressObservers;
-(CGFloat)protected_minProgressObserverValueInterval;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)protected_progressDidChange;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif