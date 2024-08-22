// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSTACKPUSHANIMATIONCONTROLLER_H
#define PSSTACKPUSHANIMATIONCONTROLLER_H

@class NSArray, NSMutableArray, NSString, UINavigationController;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    BOOL _hasStartedAnimation;
}


@property (nonatomic) NSInteger animationPreset; // ivar: _animationPreset
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGFloat completionStagger; // ivar: _completionStagger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (nonatomic) CGFloat pushDuration; // ivar: _pushDuration
@property (nonatomic) CGFloat springDamping; // ivar: _springDamping
@property (nonatomic) CGFloat startStagger; // ivar: _startStagger
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewControllers; // ivar: _viewControllers


+(id)_animationParametersForPreset:(NSInteger)arg0 ;
+(id)_snapshotOfViewController:(id)arg0 withNavigationBar:(id)arg1 prevViewController:(id)arg2 ;
+(id)controllerWithViewControllerStack:(id)arg0 navigationController:(id)arg1 ;
+(void)resetDefaultAnimationParameters;
+(void)setDefaultAnimationPreset:(NSInteger)arg0 ;
-(BOOL)_shouldSkipFirstPush;
-(CGFloat)_actualDuration;
-(CGFloat)_desiredDuration;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_valueForAnimationParameter:(id)arg0 ;
-(id)init;
// -(void)_addAnimation:(id)arg0 forViewAtIndex:(unk)arg1 count:(NSUInteger)arg2  ;
-(void)_loadDefaultValues;
-(void)animateAlongsideToViewController:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif