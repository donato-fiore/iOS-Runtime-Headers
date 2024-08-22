// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDDATACOLLECTIONOBSERVERWRAPPER_H
#define _HDDATACOLLECTIONOBSERVERWRAPPER_H


#import <Foundation/Foundation.h>

#import "HDDataCollectionObserverState.h"

@interface _HDDataCollectionObserverWrapper : NSObject {
    id *_observer;
    HDDataCollectionObserverState *_state;
    CGFloat _collectionInterval;
}




-(id)description;


@end


#endif