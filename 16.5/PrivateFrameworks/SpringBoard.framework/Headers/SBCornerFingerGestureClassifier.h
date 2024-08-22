// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCORNERFINGERGESTURECLASSIFIER_H
#define SBCORNERFINGERGESTURECLASSIFIER_H


#import <Foundation/Foundation.h>

#import "SBCornerFingerPanGestureSettings.h"

@interface SBCornerFingerGestureClassifier : NSObject {
    SBCornerFingerPanGestureSettings *_settings;
}




-(BOOL)classifySwipeWithOffsettedAngle:(CGFloat)arg0 distanceToCorner:(CGFloat)arg1 portrait:(BOOL)arg2 ;
-(id)initWithSettings:(id)arg0 ;


@end


#endif