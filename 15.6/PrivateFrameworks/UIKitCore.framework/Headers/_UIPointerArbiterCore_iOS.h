// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPOINTERARBITERCORE_IOS_H
#define _UIPOINTERARBITERCORE_IOS_H

@class NSString, PSPointerHoverRegion, NSMutableArray, PSPointerClientController, PSPointerPortalSourceCollection, NSMapTable;
@protocol PSPointerClientControllerDelegate, _UILumaTrackingBackdropViewDelegate, _UIPointerArbitrating;

#import <Foundation/Foundation.h>

#import "UIPointerRegion.h"
#import "UIPointerStyle.h"
#import "_UIPortalView.h"
#import "_UILumaTrackingBackdropView.h"

@interface _UIPointerArbiterCore_iOS : NSObject <PSPointerClientControllerDelegate, _UILumaTrackingBackdropViewDelegate, _UIPointerArbitrating>



@property (retain, nonatomic) UIPointerRegion *activePointerRegion; // ivar: _activePointerRegion
@property (retain, nonatomic) UIPointerStyle *activePointerStyle; // ivar: _activePointerStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRunningTransaction; // ivar: _hasRunningTransaction
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastMaterialLuminance; // ivar: _lastMaterialLuminance
@property (retain, nonatomic) PSPointerHoverRegion *lastSentHoverRegion; // ivar: _lastSentHoverRegion
@property (retain, nonatomic) _UIPortalView *overlayEffectPortalView; // ivar: _overlayEffectPortalView
@property (retain, nonatomic) NSMutableArray *pendingTransactionBlocks; // ivar: _pendingTransactionBlocks
@property (retain, nonatomic) PSPointerClientController *pointerClientController; // ivar: _pointerClientController
@property (copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection; // ivar: _pointerPortalSourceCollection
@property (retain, nonatomic) _UIPortalView *pointerPortalView; // ivar: _pointerPortalView
@property (retain, nonatomic) NSMapTable *pointerRegionToMatchMoveSourceMap; // ivar: _pointerRegionToMatchMoveSourceMap
@property (readonly, nonatomic) NSInteger pointerState;
@property (retain, nonatomic) _UILumaTrackingBackdropView *samplingBackdropView; // ivar: _samplingBackdropView
@property (retain, nonatomic) UIPointerRegion *scrollingRegion; // ivar: _scrollingRegion
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transactionRevisionID; // ivar: _transactionRevisionID


-(id)_coordinateSpaceSourceViewForRegion:(id)arg0 withStyle:(id)arg1 ;
-(id)_hoverRegionWithStyle:(id)arg0 forRegion:(id)arg1 ;
-(id)_pointerShapeForStyle:(id)arg0 region:(id)arg1 ;
-(id)_psPointerShapeFromUIPointerShape:(id)arg0 atScale:(CGFloat)arg1 ;
-(id)init;
-(void)_clearMatchMoveSourceForRegion:(id)arg0 immediately:(BOOL)arg1 ;
-(void)_getPointerRegion:(*id)arg0 andStyle:(*id)arg1 atLocation:(struct CGPoint )arg2 inWindow:(id)arg3 ;
-(void)_performNextTransaction;
-(void)_performTransactionUsingBlock:(id)arg0 ;
-(void)_prepareContentMatchMoveSourceForPointerRegion:(id)arg0 completion:(id)arg1 ;
-(void)_preparePointerPortalSourceCollectionWithCompletion:(id)arg0 ;
-(void)_setActiveHoverRegion:(id)arg0 style:(id)arg1 forPointerRegion:(id)arg2 transactionID:(NSUInteger)arg3 completion:(id)arg4 ;
// -(void)applyStyle:(id)arg0 forRegion:(id)arg1 effectSourceHandler:(id)arg2 completion:(unk)arg3  ;
-(void)backgroundLumaView:(id)arg0 didTransitionToLevel:(NSUInteger)arg1 ;
-(void)beginScrollingWithRegion:(id)arg0 ;
-(void)endScrollingWithRegion:(id)arg0 ;
-(void)exitRegion:(id)arg0 removeStyle:(BOOL)arg1 completion:(id)arg2 ;
-(void)pointerClientControllerClientInteractionStateDidChange:(id)arg0 ;
-(void)pointerClientControllerDidInvalidateRemoteSources:(id)arg0 ;
-(void)pointerClientControllerWillDecelerate:(id)arg0 targetPointerPosition:(struct CGPoint *)arg1 velocity:(struct CGPoint )arg2 inContextID:(unsigned int)arg3 cursorRegionLookupRadius:(CGFloat)arg4 cursorRegionLookupResolution:(CGFloat)arg5 lookupConeAngle:(CGFloat)arg6 ;


@end


#endif