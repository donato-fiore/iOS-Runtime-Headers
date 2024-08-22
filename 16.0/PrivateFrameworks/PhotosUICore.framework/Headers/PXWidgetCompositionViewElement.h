// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXWIDGETCOMPOSITIONVIEWELEMENT_H
#define PXWIDGETCOMPOSITIONVIEWELEMENT_H

@class NSMutableSet, NSString;
@protocol PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate;


#import "PXWidgetCompositionElement.h"
#import "PXWidgetCompositionViewElementLayout.h"
#import "PXBasicTileAnimator.h"
#import "PXTilingController.h"

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement <PXTileSource, PXTilingControllerTransitionDelegate, PXTilingControllerScrollDelegate>



@property (nonatomic, setter=_setAnchorOffset:) CGPoint _anchorOffset; // ivar: __anchorOffset
@property (readonly, nonatomic) PXWidgetCompositionViewElementLayout *_layout; // ivar: __layout
@property (readonly, nonatomic) PXBasicTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // ivar: __tilesInUse
@property (readonly, nonatomic) PXTilingController *_tilingController; // ivar: __tilingController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCheckingInTile; // ivar: _isCheckingInTile
@property (readonly) Class superclass;


-(*void)checkOutTileForIdentifier:(struct PXTileIdentifier )arg0 layout:(id)arg1 ;
-(id)checkOutViewTile;
-(id)contentTilingController;
-(id)createTileAnimator;
-(id)tilingController:(id)arg0 tileIdentifierConverterForChange:(id)arg1 ;
-(struct CGPoint )_anchorPoint;
-(struct CGPoint )tilingController:(id)arg0 initialVisibleOriginForLayout:(id)arg1 ;
-(void)_loadTilingController;
-(void)checkInTile:(*void)arg0 withIdentifier:(struct PXTileIdentifier )arg1 ;
-(void)checkInViewTile:(id)arg0 ;
-(void)saveAnchoring;
-(void)tilingController:(id)arg0 prepareForChange:(id)arg1 ;


@end


#endif