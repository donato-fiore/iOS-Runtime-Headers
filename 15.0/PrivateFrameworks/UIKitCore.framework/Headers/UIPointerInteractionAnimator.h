// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPOINTERINTERACTIONANIMATOR_H
#define UIPOINTERINTERACTIONANIMATOR_H

@class NSMutableArray, NSString;
@protocol UIPointerInteractionAnimating;

#import <Foundation/Foundation.h>


@interface UIPointerInteractionAnimator : NSObject <UIPointerInteractionAnimating>



@property (retain, nonatomic) NSMutableArray *animations; // ivar: _animations
@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugName; // ivar: _debugName
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)performAllAnimations;
-(void)performAllCompletions:(BOOL)arg0 ;


@end


#endif