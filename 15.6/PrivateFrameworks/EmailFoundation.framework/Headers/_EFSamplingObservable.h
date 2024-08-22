// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFSAMPLINGOBSERVABLE_H
#define _EFSAMPLINGOBSERVABLE_H

@protocol EFObservable;


#import "EFObservable.h"

@interface _EFSamplingObservable : EFObservable {
    id<EFObservable> *_observable;
    id<EFObservable> *_sampler;
}




-(id)initWithObservable:(id)arg0 sampler:(id)arg1 ;
-(id)subscribe:(id)arg0 ;


@end


#endif