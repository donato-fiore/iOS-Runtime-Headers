// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKALTERNATIVESTROKESANIMATION_H
#define PKALTERNATIVESTROKESANIMATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PKShape.h"

@interface PKAlternativeStrokesAnimation : NSObject {
    BOOL _accepted;
    BOOL _forceDone;
    PKShape *_shape;
    NSArray *_strokes;
    CGFloat _startTime;
    CGFloat _crossFadeStartTime;
    CGFloat _fadeDuration;
    CGFloat _originalStrokeDimmingFactor;
}






@end


#endif