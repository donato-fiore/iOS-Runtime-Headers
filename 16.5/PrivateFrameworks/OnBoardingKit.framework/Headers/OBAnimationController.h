// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBANIMATIONCONTROLLER_H
#define OBANIMATIONCONTROLLER_H

@class NSArray, NSString, CAPackage, CAStateController;
@protocol OBAnimationAppearanceChangeDelegate;

#import <Foundation/Foundation.h>

#import "OBAnimationView.h"
#import "OBAnimationState.h"

@interface OBAnimationController : NSObject <OBAnimationAppearanceChangeDelegate>



@property (retain, nonatomic) NSArray *animatedStates; // ivar: _animatedStates
@property (retain, nonatomic) OBAnimationView *animationView; // ivar: _animationView
@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OBAnimationState *firstState; // ivar: _firstState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController
@property (nonatomic) NSUInteger stateIndex; // ivar: _stateIndex
@property (readonly) Class superclass;


+(id)packageForURL:(id)arg0 ;
-(id)_caStateForAnimationState:(id)arg0 ;
-(id)initWithUrlToPackage:(id)arg0 animationView:(id)arg1 animatedStates:(id)arg2 startAtFirstState:(id)arg3 ;
-(id)initWithUrlToPackage:(id)arg0 animationView:(id)arg1 sizingTransformScale:(CGFloat)arg2 animatedStates:(id)arg3 startAtFirstState:(id)arg4 ;
-(void)_initializeStartingStateForStopAnimation:(BOOL)arg0 ;
-(void)_startAnimationForLayer:(id)arg0 ;
-(void)_stepAnimationStatesForLayer:(id)arg0 ;
-(void)startAnimation;
-(void)stopAnimation;
-(void)updateAnimationForAppearanceChange;


@end


#endif