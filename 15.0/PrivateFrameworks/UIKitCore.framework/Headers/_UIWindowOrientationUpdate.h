// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWINDOWORIENTATIONUPDATE_H
#define _UIWINDOWORIENTATIONUPDATE_H

@class NSMutableSet, BSAnimationSettings;

#import <Foundation/Foundation.h>


@interface _UIWindowOrientationUpdate : NSObject {
    NSMutableSet *_trackedFences;
    NSInteger _toOrientation;
    BSAnimationSettings *_transitionAnimationSettings;
    id *_updateBlock;
}






@end


#endif