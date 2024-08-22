// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNASYNCHRONOUSCACHEENTRY_H
#define CNASYNCHRONOUSCACHEENTRY_H

@class NSPointerArray;
@protocol CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNAsynchronousCacheEntry : NSObject

@property (retain) id *currentValue; // ivar: _currentValue
@property (readonly) NSPointerArray *delegates; // ivar: _delegates
@property (readonly) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) CGFloat timestampOfCurrentValue; // ivar: _timestampOfCurrentValue


-(id)description;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)removeDelegates:(id)arg0 ;
-(void)updateValue:(id)arg0 ;
-(void)withLock_addDelegate:(id)arg0 ;
-(void)withLock_compactAndRemoveDelegates:(id)arg0 ;
-(void)withLock_compactDelegates;


@end


#endif