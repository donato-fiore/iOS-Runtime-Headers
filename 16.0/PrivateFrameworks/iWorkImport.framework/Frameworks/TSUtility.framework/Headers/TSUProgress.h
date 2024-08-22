// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUPROGRESS_H
#define TSUPROGRESS_H

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUProgress : NSObject {
    NSMutableSet *_progressObservers;
    NSObject<OS_dispatch_queue> *_progressObserversQueue;
    NSObject<OS_dispatch_queue> *_progressObserversValueQueue;
}


@property (readonly, getter=isIndeterminate) BOOL indeterminate;
@property (readonly) CGFloat maxValue;
@property (copy) NSString *message; // ivar: _message
@property (readonly) CGFloat value;


-(BOOL)protected_hasProgressObservers;
-(CGFloat)protected_minProgressObserverValueInterval;
-(id)addProgressObserverWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(id)initForSubclass;
-(void)protected_progressDidChange;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif