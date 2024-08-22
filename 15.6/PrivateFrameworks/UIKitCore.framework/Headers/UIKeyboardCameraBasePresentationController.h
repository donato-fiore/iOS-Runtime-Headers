// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDCAMERABASEPRESENTATIONCONTROLLER_H
#define UIKEYBOARDCAMERABASEPRESENTATIONCONTROLLER_H



#import "UIPresentationController.h"

@interface UIKeyboardCameraBasePresentationController : UIPresentationController

@property (nonatomic) BOOL presentingOverKeyboard; // ivar: _presentingOverKeyboard
@property (readonly, nonatomic) BOOL updatesGuideDuringRotation;


-(void)postNotificationsForType:(NSUInteger)arg0 forStart:(BOOL)arg1 ;
-(void)postNotificationsForType:(NSUInteger)arg0 from:(struct CGRect )arg1 to:(struct CGRect )arg2 forStart:(BOOL)arg3 ;


@end


#endif