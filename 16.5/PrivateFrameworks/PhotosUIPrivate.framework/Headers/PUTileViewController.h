// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTILEVIEWCONTROLLER_H
#define PUTILEVIEWCONTROLLER_H

@class UIView, NSTimer, NSArray;


#import "PUTileController.h"

@interface PUTileViewController : PUTileController

@property (nonatomic, setter=_setEdgeAntialiasingEnabled:) BOOL _edgeAntialiasingEnabled; // ivar: __edgeAntialiasingEnabled
@property (nonatomic, getter=_isLoadingView, setter=_setLoadingView:) BOOL _loadingView; // ivar: __loadingView
@property (retain, nonatomic, setter=_setMaskView:) UIView *_maskView; // ivar: __maskView
@property (copy, nonatomic, setter=_setOnReadyToDisplayBlock:) id *_onReadyToDisplayBlock; // ivar: __onReadyToDisplayBlock
@property (retain, nonatomic, setter=_setReadinessTimer:) NSTimer *_readinessTimer; // ivar: __readinessTimer
@property (retain, nonatomic, setter=_setTintView:) UIView *_tintView; // ivar: __tintView
@property (retain, nonatomic, setter=_setVisibleRectView:) UIView *_visibleRectView; // ivar: __visibleRectView
@property (retain, nonatomic, setter=_setContentView:) UIView *contentView; // ivar: _contentView
@property (nonatomic, getter=isContentViewEnabled) BOOL contentViewEnabled; // ivar: _contentViewEnabled
@property (retain, nonatomic, setter=_setGestureRecognizers:) NSArray *gestureRecognizers; // ivar: _gestureRecognizers
@property (nonatomic, setter=_setReadyForDisplay:) BOOL isReadyForDisplay; // ivar: _isReadyForDisplay
@property (readonly, nonatomic) BOOL isViewLoaded;
@property (retain, nonatomic, setter=_setLoadedView:) UIView *loadedView; // ivar: _loadedView
@property (readonly, nonatomic) UIView *originalView;
@property (retain, nonatomic, setter=_setView:) UIView *view; // ivar: _view
@property (readonly, nonatomic) UIView *viewIfLoaded;


-(BOOL)isPresentationActive;
-(BOOL)wantsVisibleRectChanges;
-(id)loadView;
-(id)presentationLayoutInfo;
-(struct CGRect )visibleRect;
-(void)_handleReadinessForced:(BOOL)arg0 ;
-(void)_invalidateTintView;
-(void)_updateDynamicStateDebugging;
-(void)_updateTintView;
-(void)_updateVisibleRectView;
-(void)addToTilingView:(id)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)didChangeVisibleRect;
-(void)notifyWhenReadyForDisplayWithTimeOut:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)prepareForReuse;
-(void)removeAllAnimations;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg0 ;


@end


#endif