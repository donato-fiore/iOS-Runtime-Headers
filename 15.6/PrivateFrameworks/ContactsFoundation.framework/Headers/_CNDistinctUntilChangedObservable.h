// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNDISTINCTUNTILCHANGEDOBSERVABLE_H
#define _CNDISTINCTUNTILCHANGEDOBSERVABLE_H

@protocol CNObservable;


#import "CNObservable.h"

@interface _CNDistinctUntilChangedObservable : CNObservable {
    id<CNObservable> *_observable;
    id *_lastObservedResult;
}




-(BOOL)_resultIsDistinctFromLastResult:(id)arg0 ;
-(id)initWithObservable:(id)arg0 ;
-(id)subscribe:(id)arg0 ;


@end


#endif