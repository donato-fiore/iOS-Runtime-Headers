// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXWIDGETCOMPOSITIONUIVIEWELEMENTTILE_H
#define PXWIDGETCOMPOSITIONUIVIEWELEMENTTILE_H

@class UIView, NSString;
@protocol PXWidgetContentViewTransitionCoordinator, PXUIViewBasicTile, PXWidget;

#import <Foundation/Foundation.h>

#import "_PXWidgetCompositionUIViewElementTileTransitionContext.h"
#import "PXBasicTileAnimationOptions.h"

@interface PXWidgetCompositionUIViewElementTile : NSObject <PXWidgetContentViewTransitionCoordinator, PXUIViewBasicTile>



@property (readonly, nonatomic) UIView *_containerView; // ivar: __containerView
@property (retain, nonatomic, setter=_setCurrentTransitionContext:) _PXWidgetCompositionUIViewElementTileTransitionContext *_currentTransitionContext; // ivar: __currentTransitionContext
@property (nonatomic, setter=_setDidEmbedContentView:) BOOL _didEmbedContentView; // ivar: __didEmbedContentView
@property (readonly, nonatomic) PXBasicTileAnimationOptions *animationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) NSObject<PXWidget> *widget; // ivar: _widget


-(id)_willAnimateTileToGeometry:(struct PXTileGeometry )arg0 withOptions:(id)arg1 ;
-(id)initWithWidget:(id)arg0 ;
-(void)_didAnimateTileWithContext:(id)arg0 ;
-(void)_didCompleteTileAnimationWithContext:(id)arg0 ;
-(void)_embedContentView;
// -(void)animateAlongsideTransition:(id)arg0 completion:(unk)arg1  ;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;


@end


#endif