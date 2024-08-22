// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNBUFFERINGOBSERVABLE_H
#define _CNBUFFERINGOBSERVABLE_H

@class NSMutableArray;
@protocol CNObservable, _CNBufferingStrategy;


#import "CNObservable.h"

@interface _CNBufferingObservable : CNObservable

@property (retain, nonatomic) NSObject<CNObservable> *observable; // ivar: _observable
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (retain, nonatomic) NSObject<_CNBufferingStrategy> *strategy; // ivar: _strategy


-(id)initWithBufferingStrategy:(id)arg0 observable:(id)arg1 ;
-(id)initWithLength:(NSUInteger)arg0 observable:(id)arg1 ;
-(id)initWithLength:(NSUInteger)arg0 timeInterval:(CGFloat)arg1 scheduler:(id)arg2 observable:(id)arg3 ;
-(id)initWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 observable:(id)arg2 ;
-(id)subscribe:(id)arg0 ;
-(void)sendBufferedResultsToObserver:(id)arg0 ;


@end


#endif