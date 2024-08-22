// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHPEOPLEWIDGETPERSONDETAILZOOMANIMATOR_H
#define SBHPEOPLEWIDGETPERSONDETAILZOOMANIMATOR_H

@class SBFTouchPassThroughView;
@protocol SBHViewControllerTransitionAnimating;

#import <Foundation/Foundation.h>

#import "SBHPeopleWidgetPersonDetailInteractionSettings.h"

@interface SBHPeopleWidgetPersonDetailZoomAnimator : NSObject <SBHViewControllerTransitionAnimating>



@property (nonatomic) NSInteger currentEndpoint; // ivar: _currentEndpoint
@property (retain, nonatomic) SBFTouchPassThroughView *matchMoveView; // ivar: _matchMoveView
@property (readonly, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *settings; // ivar: _settings
@property (retain, nonatomic) SBFTouchPassThroughView *sourceContainerView; // ivar: _sourceContainerView
@property (nonatomic) CGRect sourceContentFrameInMatchMoveViewSpace; // ivar: _sourceContentFrameInMatchMoveViewSpace
@property (nonatomic) CGRect targetContentFrameInMatchMoveViewSpace; // ivar: _targetContentFrameInMatchMoveViewSpace


-(id)init;
-(void)_configureForEndpoint:(NSInteger)arg0 context:(id)arg1 inMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)animateToEndpoint:(NSInteger)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)finalizeAnimationAtEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)prepareToAnimateFromEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif