// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOPOVERSCENEMANAGER_H
#define _UIPOPOVERSCENEMANAGER_H


#import <Foundation/Foundation.h>


@interface _UIPopoverSceneManager : NSObject



+(id)sharedPopoverSceneManager;
-(id)createPopoverSceneForContentViewController:(id)arg0 sourceView:(id)arg1 sourceRectInParentUIWindow:(struct CGRect )arg2 contentSize:(struct CGSize )arg3 permittedArrowDirections:(NSInteger)arg4 showsArrow:(BOOL)arg5 userInterfaceStyle:(NSInteger)arg6 withCompletionBlock:(id)arg7 ;
-(void)closePopoverSceneForIdentifier:(id)arg0 popoverWindow:(id)arg1 returningToWindow:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)detachPopoverSceneWithIdentifier:(id)arg0 fromPoint:(struct CGPoint )arg1 withCompletionCallback:(id)arg2 ;
-(void)updatePopoverSceneWithIdentifier:(id)arg0 sourceRectInParentUIWindow:(struct CGRect )arg1 contentSize:(struct CGSize )arg2 preferredHorizontalAlignment:(NSInteger)arg3 showsArrow:(BOOL)arg4 isRTL:(BOOL)arg5 ;
-(void)updatePopoverSceneWithIdentifier:(id)arg0 userInterfaceStyle:(NSInteger)arg1 ;
-(void)updateSupportsDetach:(BOOL)arg0 forPopoverWithSceneIdentifier:(id)arg1 ;


@end


#endif