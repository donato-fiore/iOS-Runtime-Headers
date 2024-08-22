// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYTRANSITIONENDPOINTINFO_H
#define _PXSTORYTRANSITIONENDPOINTINFO_H

@protocol PXStoryItemPlacementController;

#import <Foundation/Foundation.h>

#import "PXStoryItemPlacement.h"
#import "PXStoryItemPlacementContext.h"
#import "PXStoryTransitionableTungstenViewManager.h"

@interface _PXStoryTransitionEndPointInfo : NSObject

@property (retain, nonatomic) NSObject<PXStoryItemPlacementController> *itemPlacementController; // ivar: _itemPlacementController
@property (retain, nonatomic) id *itemReference; // ivar: _itemReference
@property (retain, nonatomic) PXStoryItemPlacement *originalItemPlacement; // ivar: _originalItemPlacement
@property (retain, nonatomic) PXStoryItemPlacementContext *placementContext; // ivar: _placementContext
@property (retain, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager; // ivar: _tungstenViewManager




@end


#endif