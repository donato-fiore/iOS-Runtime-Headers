// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUANIMATOR_H
#define _UICONTEXTMENUANIMATOR_H

@class NSMutableArray, NSString;
@protocol UIContextMenuInteractionCommitAnimating, UIContextMenuInteractionAnimating;

#import <Foundation/Foundation.h>

#import "UIViewController.h"

@interface _UIContextMenuAnimator : NSObject <UIContextMenuInteractionCommitAnimating, UIContextMenuInteractionAnimating>



@property (readonly, nonatomic) NSMutableArray *animations; // ivar: _animations
@property (readonly, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAnyActions;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preferredCommitStyle; // ivar: _preferredCommitStyle
@property (readonly, nonatomic) UIViewController *previewViewController; // ivar: _previewViewController
@property (readonly) Class superclass;


+(id)animatorWithViewController:(id)arg0 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)performAllAnimations;
-(void)performAllCompletions;


@end


#endif