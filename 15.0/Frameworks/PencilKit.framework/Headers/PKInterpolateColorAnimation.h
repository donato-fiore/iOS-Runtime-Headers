// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINTERPOLATECOLORANIMATION_H
#define PKINTERPOLATECOLORANIMATION_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PKInterpolateColorAnimation : NSObject {
    CGFloat _sourceRGBA;
    CGFloat _destRGBA;
    CGFloat _startTime;
    CGFloat _duration;
    UIColor *_endColorFallback;
}






@end


#endif