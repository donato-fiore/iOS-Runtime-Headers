// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUISEARCHBARCONTROLLER_H
#define SPUISEARCHBARCONTROLLER_H

@class NSLayoutConstraint, _UINavigationBarTitleView;
@protocol SPUISearchBarDelegate;


#import "SPUISpotlightRemoteViewController.h"

@interface SPUISearchBarController : SPUISpotlightRemoteViewController

@property (weak, nonatomic) NSObject<SPUISearchBarDelegate> *delegate; // ivar: _delegate
@property (retain) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (nonatomic) BOOL roundedCornerVisible; // ivar: _roundedCornerVisible
@property (retain) _UINavigationBarTitleView *view;


+(id)notificationCenterSearchBar;
+(id)todayViewSearchBar;
-(BOOL)setSceneFrameOnRotation;
-(id)backgroundBlurView;
-(id)sceneSpecification;
-(struct CGSize )initialFittingSize;
-(void)didInvalidateSceneWhenForeground;
-(void)loadView;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)setBlurProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)updateSceneSettingsWithBlock:(id)arg0 ;


@end


#endif