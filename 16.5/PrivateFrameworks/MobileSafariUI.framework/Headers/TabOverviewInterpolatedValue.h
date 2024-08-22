// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABOVERVIEWINTERPOLATEDVALUE_H
#define TABOVERVIEWINTERPOLATEDVALUE_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface TabOverviewInterpolatedValue : NSObject {
    NSHashTable *_dependants;
    NSHashTable *_dependencies;
    CGFloat _instantaneousTargetValue;
    CGFloat _lastRenderedValue;
    CGFloat _value;
    CGFloat _targetValue;
    CGFloat _epsilon;
    CGFloat _decelerationFactor;
}




-(id)description;


@end


#endif