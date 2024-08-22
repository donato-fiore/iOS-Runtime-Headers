// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYOTHERITEMPLACEMENTCONTROLLER_H
#define PXSTORYOTHERITEMPLACEMENTCONTROLLER_H

@class NSString;
@protocol PXStoryItemPlacementController_Internal, PXStoryItemPlacementController;

#import <Foundation/Foundation.h>


@interface PXStoryOtherItemPlacementController : NSObject <PXStoryItemPlacementController_Internal, PXStoryItemPlacementController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isIndirectItemPlacementController;
@property (readonly, nonatomic) NSObject<PXStoryItemPlacementController> *originalItemPlacementController; // ivar: _originalItemPlacementController
@property (readonly, nonatomic) id *originalItemReference; // ivar: _originalItemReference
@property (readonly) Class superclass;


-(id)init;
-(id)initWithOriginalItemPlacementController:(id)arg0 originalItemReference:(id)arg1 ;
-(id)placementInContext:(id)arg0 forItemReference:(id)arg1 ;
-(void)setPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;


@end


#endif