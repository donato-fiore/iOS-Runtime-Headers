// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENUPRESENTATIONANIMATOR_H
#define _UIEDITMENUPRESENTATIONANIMATOR_H

@class NSMutableArray, NSString;
@protocol UIEditMenuInteractionAnimating;

#import <Foundation/Foundation.h>


@interface _UIEditMenuPresentationAnimator : NSObject <UIEditMenuInteractionAnimating>



@property (retain, nonatomic) NSMutableArray *animationBlocks; // ivar: _animationBlocks
@property (retain, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)runAnimations;
-(void)runCompletions;


@end


#endif