// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKHAPTICENGINE_H
#define MKHAPTICENGINE_H

@class UINotificationFeedbackGenerator, UIImpactFeedbackGenerator, _UIDragSnappingFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface MKHapticEngine : NSObject {
    UINotificationFeedbackGenerator *_notificationGenerator;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _UIDragSnappingFeedbackGenerator *_dragSnappingGenerator;
    BOOL _isDragging;
}




-(id)init;
-(void)draggedObjectLanded;
-(void)draggedObjectLifted;
-(void)playFailure;
-(void)playSuccess;
-(void)prepare;


@end


#endif