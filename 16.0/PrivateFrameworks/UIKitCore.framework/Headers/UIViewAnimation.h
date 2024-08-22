// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWANIMATION_H
#define UIVIEWANIMATION_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIViewAnimation : NSObject {
    BOOL _animateFromCurrentPosition;
    BOOL _shouldDeleteAfterAnimation;
    BOOL _editing;
    BOOL _shouldAnimateShadow;
    BOOL _shouldResetGroupOpacityAfterAnimation;
    BOOL _shouldAllowGroupOpacityAfterAnimation;
    BOOL _shouldClipToBoundsAfterAnimation;
    int _viewType;
    int _curve;
    UIView *_view;
    NSIndexPath *_indexPath;
    CGFloat _endAlpha;
    CGFloat _startFraction;
    CGFloat _endFraction;
    CGRect _endRect;
}




-(id)description;


@end


#endif