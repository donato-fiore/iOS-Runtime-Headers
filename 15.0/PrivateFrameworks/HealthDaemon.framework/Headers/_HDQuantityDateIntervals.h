// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDQUANTITYDATEINTERVALS_H
#define _HDQUANTITYDATEINTERVALS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _HDQuantityDateIntervals : NSObject {
    CGFloat _currentStartInterval;
    CGFloat _currentEndInterval;
    NSInteger _currentPairIndex;
    BOOL _containsUUIDs;
    NSMutableArray *_intervalPairs;
}




-(id)init;


@end


#endif