// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDRAGINTERACTIONCONTEXTIMPL_H
#define UIDRAGINTERACTIONCONTEXTIMPL_H

@class NSMutableArray, NSString, NSArray;
@protocol UIDragInteractionContext, UIDragAnimating;

#import <Foundation/Foundation.h>

#import "UITouch.h"

@interface UIDragInteractionContextImpl : NSObject <UIDragInteractionContext, UIDragAnimating>



@property (copy, nonatomic) id *_sessionDidBegin; // ivar: __sessionDidBegin
@property (readonly, nonatomic) NSMutableArray *animationBlocks; // ivar: _animationBlocks
@property (copy, nonatomic) id *animations; // ivar: _animations
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSMutableArray *completionBlocks; // ivar: _completionBlocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBegunDrag; // ivar: _hasBegunDrag
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialLocation; // ivar: _initialLocation
@property (retain, nonatomic) UITouch *initiationTouch; // ivar: _initiationTouch
@property (nonatomic) NSInteger invocationType; // ivar: _invocationType
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic, getter=isPreparedForLift) BOOL preparedForLift; // ivar: _preparedForLift
@property (nonatomic) BOOL shouldAnimateLift; // ivar: _shouldAnimateLift
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(void)_api_addCompletion:(id)arg0 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;


@end


#endif