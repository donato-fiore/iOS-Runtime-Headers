// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMVALUETHROTTLER_H
#define FMVALUETHROTTLER_H

@class NSMutableSet;
@protocol FMScheduler, FMCancelable;

#import <Foundation/Foundation.h>


@interface FMValueThrottler : NSObject

@property (readonly, nonatomic) BOOL hasPendingValueChange;
@property (readonly, nonatomic) NSMutableSet *observerBlocks; // ivar: _observerBlocks
@property (readonly, nonatomic) CGFloat throttleInterval; // ivar: _throttleInterval
@property (retain, nonatomic) NSObject<FMScheduler> *updateScheduler; // ivar: _updateScheduler
@property (retain, nonatomic) id *value; // ivar: _value
@property (retain, nonatomic) NSObject<FMCancelable> *valueUpdateCancelationToken; // ivar: _valueUpdateCancelationToken


-(id)init;
-(id)initWithThrottleInterval:(CGFloat)arg0 ;
-(id)initWithThrottleInterval:(CGFloat)arg0 initialValue:(id)arg1 ;
-(id)observeValueChangesWithBlock:(id)arg0 ;
-(void)_enqueueValueUpdateIfNecessary;
-(void)_notifyObserversOfValueUpdate;
-(void)dealloc;
-(void)flushValueChanges;


@end


#endif