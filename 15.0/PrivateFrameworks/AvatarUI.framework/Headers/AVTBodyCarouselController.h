// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTBODYCAROUSELCONTROLLER_H
#define AVTBODYCAROUSELCONTROLLER_H

@class UICollectionView, NSArray, NSString, AVTStickerConfiguration, UIView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, AVTNotifyingContainerViewDelegate, AVTAvatarBodyPoseDisplayingController, AVTViewCarouselLayout, AVTAvatarRecord, AVTUILogger, AVTPresenterDelegate;

#import <Foundation/Foundation.h>

#import "AVTViewSession.h"
#import "AVTCenteringCollectionViewDelegate.h"
#import "AVTZIndexEngagementListCollectionViewLayout.h"
#import "AVTUIEnvironment.h"
#import "AVTUIStickerGeneratorPool.h"
#import "AVTAvatarListCell.h"
#import "AVTUIStickerRenderer.h"
#import "AVTRenderingScope.h"
#import "AVTSerialTaskScheduler.h"
#import "AVTTransitionCoordinator.h"

@interface AVTBodyCarouselController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTNotifyingContainerViewDelegate, AVTAvatarBodyPoseDisplayingController>



@property (retain, nonatomic) NSObject<AVTViewCarouselLayout> *avtViewLayout; // ivar: _avtViewLayout
@property (retain, nonatomic) AVTViewSession *avtViewSession; // ivar: _avtViewSession
@property (nonatomic) CGSize centerCellSize; // ivar: _centerCellSize
@property (retain, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // ivar: _centeringDelegate
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (retain, nonatomic) NSArray *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat decelerationRate; // ivar: _decelerationRate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTStickerConfiguration *displayedConfiguration; // ivar: _displayedConfiguration
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *displayedRecord; // ivar: _displayedRecord
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // ivar: _generatorPool
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideImageForDisplayedPose; // ivar: _hideImageForDisplayedPose
@property (nonatomic) BOOL isAnimatingExpansion; // ivar: _isAnimatingExpansion
@property (retain, nonatomic) AVTAvatarListCell *liveCell; // ivar: _liveCell
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: presenterDelegate
@property (retain, nonatomic) AVTUIStickerRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) AVTRenderingScope *renderingScope; // ivar: _renderingScope
@property (retain, nonatomic) AVTSerialTaskScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // ivar: _transitionCoordinator
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize )arg0 boundsSize:(struct CGSize )arg1 environment:(id)arg2 ;
-(BOOL)isViewLoaded;
-(BOOL)shouldCurrentlyDisplayedConfigurationTransitionToLive;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)cellForConfiguration:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)configureLayoutIfNeededWithHeight:(CGFloat)arg0 ;
-(id)indexPathForItemClosestToCenter;
-(id)initWithEnvironment:(id)arg0 avatarRecord:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 initialAVTViewLayout:(id)arg1 avatarRecord:(id)arg2 ;
-(void)buildCollectionViewAndConfigureLayoutIfNeeded;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)layoutDidChangeWhileMoving:(BOOL)arg0 offset:(struct CGPoint )arg1 ;
-(void)loadView;
-(void)notifyingContainerViewDidChangeSize:(struct CGSize )arg0 ;
-(void)notifyingContainerViewWillChangeSize:(struct CGSize )arg0 ;
-(void)prepareToTransitionToVisible:(BOOL)arg0 completionHandler:(*id)arg1 ;
-(void)prepareViewWithLayout:(id)arg0 ;
-(void)reloadDisplayedSticker;
-(void)scrollToDisplayedConfiguration;
-(void)scrollToViewAtIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollToViewForConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setStaticImageOnCell:(id)arg0 forIndexPath:(id)arg1 ;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)transitionCell:(id)arg0 indexPath:(id)arg1 toStartFocusingAnimated:(BOOL)arg2 session:(id)arg3 completionHandler:(id)arg4 ;
-(void)transitionCell:(id)arg0 toStopFocusingAnimated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)transitionCenterCellIfPresentToStartFocusing;
-(void)transitionCenterCellIfPresentToStopFocusingAnimated:(BOOL)arg0 ;
-(void)transitionCenterCellToStartFocusing:(id)arg0 indexPath:(id)arg1 ;
-(void)transitionCurrentDisplayedConfigurationAnimated:(BOOL)arg0 ;
-(void)updateDisplayedConfigurationIfNeeded;
-(void)updateImageForStaticCellForIndexPath:(id)arg0 ;
-(void)updateStickersforVisibleCells;
-(void)useAVTViewFromSession:(id)arg0 ;


@end


#endif