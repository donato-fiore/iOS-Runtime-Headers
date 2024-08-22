// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITOUCHDATA_H
#define UITOUCHDATA_H


#import <Foundation/Foundation.h>

#import "UITouch.h"

@interface UITouchData : NSObject {
    CGPoint startTouchDownLocation;
    NSUInteger lastTapCount;
    CGFloat lastTouchUpTimestamp;
    CGFloat lastTouchDownTimestamp;
    BOOL touchIsValidTap;
    UITouch *lastTouch;
}






@end


#endif