// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCHAMOISOVERLAPPINGCONTROLLER_H
#define SBCHAMOISOVERLAPPINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SBChamoisOverlappingController : NSObject



-(CGFloat)_totalWidthOfColumns:(id)arg0 inModel:(id)arg1 layoutAttributes:(id)arg2 ;
-(id)_columnsOfItemsSortedByXInModel:(id)arg0 withItemsSortedByX:(id)arg1 previousResolvedModelIfAny:(id)arg2 layoutAttributes:(id)arg3 draggingItem:(id)arg4 ;
-(id)_fullyOccludedItemsInModel:(id)arg0 layoutAttributes:(id)arg1 ;
-(id)_itemsSortedByXInModel:(id)arg0 previousResolvedModelIfAny:(id)arg1 layoutAttributes:(id)arg2 draggingItem:(id)arg3 ;
-(id)modelForPreferredModel:(id)arg0 initialStageFrame:(struct CGRect )arg1 layoutAttributes:(id)arg2 draggingItem:(id)arg3 modelBeforeDragging:(id)arg4 ;
-(struct CGRect )_boundingBoxForModel:(id)arg0 ;
-(void)_compactSpacingHorizontallyForModel:(id)arg0 withColumns:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)_compactSpacingVerticallyForModel:(id)arg0 withColumns:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)_constrainModelHorizontallyToStageFrame:(id)arg0 ;
-(void)_constrainModelVerticallyToStageFrame:(id)arg0 ;
-(void)_dodgeFullyOccludedWindowsToNearestVisibleEdgeInModel:(id)arg0 layoutAttributes:(id)arg1 draggingItem:(id)arg2 ;
-(void)_expandSpacingHorizontallyForModel:(id)arg0 withColumns:(id)arg1 previousResolvedModelIfAny:(id)arg2 layoutAttributes:(id)arg3 draggingItem:(id)arg4 ;
-(void)_expandSpacingVerticallyForModel:(id)arg0 withColumns:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)_horizontallyCenterModel:(id)arg0 ;
-(void)_snapPositionToNearestEdgesIfNecessary:(id)arg0 draggingItem:(id)arg1 ;
-(void)_verticallyCenterModel:(id)arg0 withColumns:(id)arg1 ;


@end


#endif