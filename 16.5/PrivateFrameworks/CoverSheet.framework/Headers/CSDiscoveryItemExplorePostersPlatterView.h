// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDISCOVERYITEMEXPLOREPOSTERSPLATTERVIEW_H
#define CSDISCOVERYITEMEXPLOREPOSTERSPLATTERVIEW_H

@class PLPlatterDiscoveryView, CAStateController, CALayer;
@protocol CSDiscoveryItemExplorePostersPlatterViewDelegate;



@interface CSDiscoveryItemExplorePostersPlatterView : PLPlatterDiscoveryView

@property (nonatomic, getter=isAnimationPaused) BOOL animationPaused; // ivar: _animationPaused
@property (weak, nonatomic) NSObject<CSDiscoveryItemExplorePostersPlatterViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CAStateController *graphicStateController; // ivar: _graphicStateController
@property (retain, nonatomic) CALayer *rootAnimationLayer; // ivar: _rootAnimationLayer


-(id)init;
-(void)_configureGraphicViewIfNecessary;
-(void)_pauseLayer:(id)arg0 ;
-(void)_reconfigureGraphicView;
-(void)_resumeLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif