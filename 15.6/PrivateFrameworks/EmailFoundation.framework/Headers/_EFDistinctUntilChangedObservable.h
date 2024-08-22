// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFDISTINCTUNTILCHANGEDOBSERVABLE_H
#define _EFDISTINCTUNTILCHANGEDOBSERVABLE_H

@class NSLock;
@protocol EFObservable;


#import "EFObservable.h"

@interface _EFDistinctUntilChangedObservable : EFObservable {
    id<EFObservable> *_observable;
    id *_lastObservedResult;
    NSLock *_lock;
}




-(BOOL)_isLastResultDistinctFromResult:(id)arg0 ;
-(id)initWithObservable:(id)arg0 ;
-(id)subscribe:(id)arg0 ;


@end


#endif