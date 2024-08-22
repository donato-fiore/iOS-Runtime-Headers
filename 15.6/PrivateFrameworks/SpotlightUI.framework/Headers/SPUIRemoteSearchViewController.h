// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUIREMOTESEARCHVIEWCONTROLLER_H
#define SPUIREMOTESEARCHVIEWCONTROLLER_H

@class UIView;
@protocol SPUIRemoteSearchViewDelegate;


#import "SPUISpotlightRemoteViewController.h"

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController

@property (weak, nonatomic) NSObject<SPUIRemoteSearchViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *didFinishDismissingSpotlightHandler; // ivar: _didFinishDismissingSpotlightHandler
@property (nonatomic) CGFloat distanceToTopOfIcons; // ivar: _distanceToTopOfIcons
@property (retain, nonatomic) UIView *dummyTransitionView; // ivar: _dummyTransitionView
@property (copy, nonatomic) id *finishedPresentingSpotlightHandler; // ivar: _finishedPresentingSpotlightHandler
@property (nonatomic) CGFloat revealProgress; // ivar: _revealProgress
@property (nonatomic) unsigned int searchHeaderContextID; // ivar: _searchHeaderContextID
@property (nonatomic) NSUInteger searchHeaderLayerRenderID; // ivar: _searchHeaderLayerRenderID
@property (nonatomic) NSUInteger source; // ivar: _source
@property (copy, nonatomic) id *willBeginDismissingSpotlightHandler; // ivar: _willBeginDismissingSpotlightHandler
@property (copy, nonatomic) id *willStartPresetingSpotlightHandler; // ivar: _willStartPresetingSpotlightHandler


-(BOOL)prewarmSceneInTheBackground;
-(id)init;
-(id)sceneSpecification;
-(void)didInvalidateSceneWhenForeground;
-(void)finishCompletionHandlerIfNeeded;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)updateIntent:(NSUInteger)arg0 ;
-(void)updateSceneSettingsWithBlock:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif