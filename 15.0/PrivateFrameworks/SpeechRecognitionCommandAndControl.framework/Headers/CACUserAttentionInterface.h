// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACUSERATTENTIONINTERFACE_H
#define CACUSERATTENTIONINTERFACE_H

@protocol CACUserAttentionControllerDelegate;

#import <Foundation/Foundation.h>

#import "CACUserAttentionController.h"

@interface CACUserAttentionInterface : NSObject <CACUserAttentionControllerDelegate>



@property (nonatomic) BOOL isAttentionAwarenessInterrupted; // ivar: _isAttentionAwarenessInterrupted
@property (retain, nonatomic, getter=_userAttentionController, setter=_setUserAttentionController:) CACUserAttentionController *userAttentionController; // ivar: _userAttentionController


+(id)sharedManager;
-(void)cancelDelayedUserAttentionControllerStop;
-(void)startUserAttentionControllerIfNeeded;
-(void)startUserAttentionControllerIfNeededForTypes:(NSUInteger)arg0 ;
-(void)stopUserAttentionControllerIfNeeded;
-(void)stopUserAttentionControllerIfNeededAfterDelay:(CGFloat)arg0 ;
-(void)userAttentionController:(id)arg0 didGainAttentionWithEvent:(NSInteger)arg1 ;
-(void)userAttentionController:(id)arg0 didLoseAttentionWithEvent:(NSInteger)arg1 ;
-(void)userAttentionControllerAttentionAwarenessInterrupted:(id)arg0 ;
-(void)userAttentionControllerAttentionAwarenessInterruptionEnded:(id)arg0 ;


@end


#endif