// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKVIEWMODELUPDATER_H
#define PUPARALLAXLAYERSTACKVIEWMODELUPDATER_H

@class PIParallaxLayerStackRequest, PIParallaxClockMaterialRequest, PIParallaxClockLayoutRequest, NUCoalescer;
@protocol NSCopying, PISegmentationItem, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PUParallaxLayerStackViewModelUpdater : NSObject <NSCopying>



@property (retain, nonatomic) PIParallaxLayerStackRequest *backfillRenderRequest; // ivar: _backfillRenderRequest
@property (retain, nonatomic) PIParallaxClockMaterialRequest *clockMaterialRequest; // ivar: _clockMaterialRequest
@property (retain, nonatomic) PIParallaxClockLayoutRequest *clockOverlapRequest; // ivar: _clockOverlapRequest
@property (readonly, nonatomic) NSObject<PISegmentationItem> *item; // ivar: _item
@property (retain, nonatomic) PIParallaxLayerStackRequest *mainRenderRequest; // ivar: _mainRenderRequest
@property (retain, nonatomic) NUCoalescer *styleChangeCoalescer; // ivar: _styleChangeCoalescer
@property (retain, nonatomic) NSObject<OS_dispatch_group> *transactionGroup; // ivar: _transactionGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionResponseQueue; // ivar: _transactionResponseQueue


-(BOOL)waitForInFlightRenders:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSegmentationItem:(id)arg0 ;
-(void)_updatePriorityForRequest:(id)arg0 viewModel:(id)arg1 highPriority:(BOOL)arg2 importanceOrder:(CGFloat)arg3 ;
-(void)beginRenderTransaction;
-(void)cancelPendingRenders;
-(void)endRenderTransaction;
-(void)notifyWhenInFlightRendersComplete:(id)arg0 ;
-(void)recalculateClockAreaLuminance:(id)arg0 highPriority:(BOOL)arg1 importanceOrder:(CGFloat)arg2 ;
-(void)recalculateClockIntersection:(id)arg0 allViewModels:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)recalculateClockOverlap:(id)arg0 allViewModels:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)recalculateClockOverlap:(id)arg0 highPriority:(BOOL)arg1 importanceOrder:(CGFloat)arg2 allViewModels:(id)arg3 intersectionOnly:(BOOL)arg4 completion:(id)arg5 ;
-(void)renderBackfillLayers:(id)arg0 highPriority:(BOOL)arg1 importanceOrder:(CGFloat)arg2 ;
-(void)renderMainLayers:(id)arg0 highPriority:(BOOL)arg1 importanceOrder:(CGFloat)arg2 completion:(id)arg3 ;
-(void)renderOffscreenModelAfterStyleInitialization:(id)arg0 ;
-(void)renderOffscreenModelAfterVisibleFrameChange:(id)arg0 highPriority:(BOOL)arg1 ;
-(void)renderOnscreenModelAfterStyleChange:(id)arg0 ;
-(void)renderOnscreenModelAfterVisibleFrameChange:(id)arg0 allViewModels:(id)arg1 ;


@end


#endif