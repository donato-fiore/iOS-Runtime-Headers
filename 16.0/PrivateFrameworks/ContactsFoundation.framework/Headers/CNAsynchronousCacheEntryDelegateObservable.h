// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNASYNCHRONOUSCACHEENTRYDELEGATEOBSERVABLE_H
#define CNASYNCHRONOUSCACHEENTRYDELEGATEOBSERVABLE_H

@class NSMutableArray, NSString;
@protocol CNAsynchronousCacheEntryDelegate;


#import "CNObservable.h"

@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable <CNAsynchronousCacheEntryDelegate>

 {
    NSMutableArray *_observers;
    id *_currentValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)subscribe:(id)arg0 ;
-(void)cacheEntryDidUpdateValue:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif