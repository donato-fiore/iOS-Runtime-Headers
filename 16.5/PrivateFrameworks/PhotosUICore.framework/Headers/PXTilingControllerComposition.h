// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTILINGCONTROLLERCOMPOSITION_H
#define PXTILINGCONTROLLERCOMPOSITION_H

@class NSSet;
@protocol PXTilingScrollController, PXTilingControllerCompositionInput, PXTilingControllerCompositionObserver, PXTilingControllerCompositionOutput;

#import <Foundation/Foundation.h>


@interface PXTilingControllerComposition : NSObject

@property (weak, nonatomic, setter=_setScrollController:) NSObject<PXTilingScrollController> *_scrollController; // ivar: __scrollController
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<PXTilingControllerCompositionInput> *input; // ivar: _input
@property (weak, nonatomic) NSObject<PXTilingControllerCompositionObserver> *observer; // ivar: _observer
@property (weak, nonatomic) NSObject<PXTilingControllerCompositionOutput> *output; // ivar: _output
@property (readonly, copy, nonatomic) NSSet *tilingControllers; // ivar: _tilingControllers


-(void)invalidateComposition;
-(void)invalidateCompositionWithContext:(id)arg0 ;
-(void)updateComposition;


@end


#endif