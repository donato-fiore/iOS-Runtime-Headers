// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNTHROTTLEDOBSERVABLE_H
#define _CNTHROTTLEDOBSERVABLE_H

@protocol CNCancelable, CNScheduler;


#import "CNObservable.h"

@interface _CNThrottledObservable : CNObservable

@property (retain) NSObject<CNCancelable> *delayToken; // ivar: _delayToken
@property (readonly) CGFloat interval; // ivar: _interval
@property BOOL isCoalescing; // ivar: _isCoalescing
@property (retain) id *mostRecentResult; // ivar: _mostRecentResult
@property (readonly) CNObservable *observable; // ivar: _observable
@property (readonly) NSObject<CNScheduler> *observerScheduler; // ivar: _observerScheduler
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock


-(id)initWithInterval:(CGFloat)arg0 options:(NSUInteger)arg1 observable:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)subscribe:(id)arg0 ;
-(void)dealloc;
-(void)observerScheduler_sendResultToObserver:(id)arg0 ;


@end


#endif