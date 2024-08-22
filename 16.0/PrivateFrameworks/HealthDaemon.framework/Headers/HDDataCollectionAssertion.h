// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATACOLLECTIONASSERTION_H
#define HDDATACOLLECTIONASSERTION_H

@class HDAssertion, NSSet;


#import "HDDataCollectionManager.h"
#import "HDDataCollectionObserverState.h"

@interface HDDataCollectionAssertion : HDAssertion {
    os_unfair_lock_s _lock;
    NSSet *_sampleTypes;
    CGFloat _collectionInterval;
    HDDataCollectionManager *_dataCollectionManager;
}


@property (copy, nonatomic) HDDataCollectionObserverState *observerState; // ivar: _observerState


-(id)description;


@end


#endif