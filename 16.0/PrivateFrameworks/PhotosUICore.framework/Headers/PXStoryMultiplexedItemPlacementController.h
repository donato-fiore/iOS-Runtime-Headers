// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMULTIPLEXEDITEMPLACEMENTCONTROLLER_H
#define PXSTORYMULTIPLEXEDITEMPLACEMENTCONTROLLER_H

@class NSString, NSArray;
@protocol PXStoryItemPlacementController_Internal, PXStoryItemPlacementController;

#import <Foundation/Foundation.h>


@interface PXStoryMultiplexedItemPlacementController : NSObject <PXStoryItemPlacementController_Internal, PXStoryItemPlacementController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIndirectItemPlacementController; // ivar: _isIndirectItemPlacementController
@property (readonly, nonatomic) NSArray *itemPlacementControllers; // ivar: _itemPlacementControllers
@property (readonly, nonatomic) NSObject<PXStoryItemPlacementController> *mainItemPlacementController; // ivar: _mainItemPlacementController
@property (readonly) Class superclass;


+(id)itemPlacementControllerForItemPlacementControllers:(id)arg0 ;
-(id)init;
-(id)initWithItemPlacementControllers:(id)arg0 ;
-(id)placementInContext:(id)arg0 forItemReference:(id)arg1 ;
-(void)setPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;


@end


#endif