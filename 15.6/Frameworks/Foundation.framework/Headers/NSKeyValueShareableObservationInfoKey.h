// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSKEYVALUESHAREABLEOBSERVATIONINFOKEY_H
#define NSKEYVALUESHAREABLEOBSERVATIONINFOKEY_H


#import <Foundation/Foundation.h>

#import "NSKeyValueObservationInfo.h"
#import "NSKeyValueProperty.h"
#import "NSKeyValueObservance.h"

@interface NSKeyValueShareableObservationInfoKey : NSObject {
    BOOL _addingNotRemoving;
    NSKeyValueObservationInfo *_baseObservationInfo;
    NSObject *_additionObserver;
    NSKeyValueProperty *_additionProperty;
    NSUInteger _additionOptions;
    *void _additionContext;
    NSObject *_additionOriginalObservable;
    NSKeyValueObservance *_removalObservance;
    NSUInteger _removalObservanceIndex;
    NSUInteger _cachedHash;
}






@end


#endif