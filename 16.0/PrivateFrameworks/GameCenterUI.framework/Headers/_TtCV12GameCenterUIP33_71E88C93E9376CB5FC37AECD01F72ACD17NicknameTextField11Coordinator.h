// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV12GAMECENTERUIP33_71E88C93E9376CB5FC37AECD01F72ACD17NICKNAMETEXTFIELD11COORDINATOR_H
#define _TTCV12GAMECENTERUIP33_71E88C93E9376CB5FC37AECD01F72ACD17NICKNAMETEXTFIELD11COORDINATOR_H

@protocol GKNicknameControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV12GameCenterUIP33_71E88C93E9376CB5FC37AECD01F72ACD17NicknameTextField11Coordinator : NSObject <GKNicknameControllerDelegate>

 {
    ? parent;
    ? nicknameController;
    ? cancellableSubcriber;
}




-(BOOL)nicknameShouldBeginEditing;
-(id)init;
-(void)dealloc;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)nicknameDidBecomeFirstResponder;
-(void)nicknameDidResignFirstResponder;
-(void)nicknameTextDidChangeWithMessage:(id)arg0 ;
-(void)nicknameUpdateRequestCompletedWithStatus:(id)arg0 error:(id)arg1 ;
-(void)nicknameWillbeginUpdating;


@end


#endif