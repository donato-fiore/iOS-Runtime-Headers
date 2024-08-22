// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNDISTINCTOBSERVABLE_H
#define _CNDISTINCTOBSERVABLE_H

@class NSMutableSet;
@protocol CNObservable;


#import "CNObservable.h"

@interface _CNDistinctObservable : CNObservable {
    id<CNObservable> *_observable;
    NSMutableSet *_previouslyObservedResults;
}




-(BOOL)_resultIsDistinct:(id)arg0 ;
-(id)initWithObservable:(id)arg0 ;
-(id)subscribe:(id)arg0 ;


@end


#endif