// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTILINGCONTROLLERCOMPOSITIONENGINE_H
#define PXTILINGCONTROLLERCOMPOSITIONENGINE_H

@class NSHashTable, NSMutableArray, NSString, NSArray;
@protocol PXTilingScrollControllerUpdateDelegate, PXTilingControllerObserver, PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput, PXTilingScrollController;

#import <Foundation/Foundation.h>

#import "PXTilingControllerComposition.h"
#import "PXTilingControllerDefaultComposition.h"

@interface PXTilingControllerCompositionEngine : NSObject <PXTilingScrollControllerUpdateDelegate, PXTilingControllerObserver, PXTilingControllerCompositionObserver, PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput>

 {
    BOOL _isPerformingChanges;
    BOOL _isUpdatingComposition;
    ? _needsUpdateFlags;
}


@property (retain, nonatomic, setter=_setComposition:) PXTilingControllerComposition *_composition; // ivar: __composition
@property (readonly, nonatomic) NSHashTable *_compositions; // ivar: __compositions
@property (nonatomic, setter=_setContentInset:) UIEdgeInsets _contentInset; // ivar: __contentInset
@property (readonly, nonatomic) PXTilingControllerDefaultComposition *_defaultComposition; // ivar: __defaultComposition
@property (readonly, nonatomic) NSMutableArray *_invalidationContexts; // ivar: __invalidationContexts
@property (nonatomic, setter=_setReferenceSize:) CGSize _referenceSize; // ivar: __referenceSize
@property (readonly, weak, nonatomic) NSObject<PXTilingScrollController> *_scrollController; // ivar: __scrollController
@property (readonly, nonatomic) NSHashTable *_tilingControllers; // ivar: __tilingControllers
@property (readonly, nonatomic) NSMutableArray *_tilingControllersRequestingFocus; // ivar: __tilingControllersRequestingFocus
@property (readonly, nonatomic) UIEdgeInsets contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *invalidationContexts;
@property (readonly, nonatomic) CGSize referenceSize;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tilingControllersRequestingFocus;


+(id)compositionEngineForScrollController:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(BOOL)_needsUpdate;
-(BOOL)_updateCompositionIfNeeded;
-(id)_initWithScrollController:(id)arg0 ;
-(id)convertScrollInfo:(id)arg0 fromTilingController:(id)arg1 ;
-(id)init;
-(id)scrollInfoForTilingController:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromTilingController:(id)arg1 ;
-(struct CGPoint )originForTilingController:(id)arg0 ;
-(struct CGPoint )preferredOriginForTilingController:(id)arg0 ;
-(struct CGRect )contentBoundsForTilingController:(id)arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromTilingController:(id)arg1 ;
-(struct CGRect )scrollBoundsForTilingController:(id)arg0 ;
-(void)_beginUpdate;
-(void)_endUpdate;
-(void)_invalidateComposition;
-(void)_invalidateScrollControllerMetrics;
-(void)_performChanges:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateScrollControllerMetricsIfNeeded;
-(void)registerComposition:(id)arg0 ;
-(void)registerTilingController:(id)arg0 ;
-(void)setContentBounds:(struct CGRect )arg0 scrollBounds:(struct CGRect )arg1 scrollInfo:(id)arg2 ;
-(void)setOrigin:(struct CGPoint )arg0 forTilingController:(id)arg1 ;
-(void)setTilingControllerCompositionNeedsUpdate:(id)arg0 withContext:(id)arg1 ;
-(void)setTilingControllerNeedsUpdate:(id)arg0 ;
-(void)tilingController:(id)arg0 invalidatedWithContext:(NSInteger)arg1 ;
-(void)tilingScrollControllerDidUpdate:(id)arg0 ;
-(void)unregisterComposition:(id)arg0 ;
-(void)unregisterTilingController:(id)arg0 ;


@end


#endif