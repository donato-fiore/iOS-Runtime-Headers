// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSGROUPVIEWVERTICALPANANIMATOR_H
#define PKPASSGROUPVIEWVERTICALPANANIMATOR_H

@class _UIDynamicValueAnimation, UIPanGestureRecognizer;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    BOOL _recognizing;
    _UIDynamicValueAnimation *_dismissAnimation;
    _UIUpdateRequest _updateRequest;
    unsigned int _updateReason;
    BOOL _invalidated;
    BOOL _updating;
    PKPassGroupView *_groupView;
    UIPanGestureRecognizer *_gestureRecognizer;
    id *_updater;
    CGFloat _panningViewTargetScale;
    CGPoint _panningViewStartPosition;
    CGPoint _panningViewTargetPosition;
}




-(id)init;
-(void)dealloc;


@end


#endif