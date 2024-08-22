// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMEMORYFEEDITEMLAYOUTFACTORY_H
#define PXSTORYMEMORYFEEDITEMLAYOUTFACTORY_H

@class NSString;
@protocol PXStoryFeedItemLayoutFactory;

#import <Foundation/Foundation.h>


@interface PXStoryMemoryFeedItemLayoutFactory : NSObject <PXStoryFeedItemLayoutFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutKind; // ivar: layoutKind
@property (readonly) Class superclass;


-(BOOL)shouldReloadItemLayout:(id)arg0 forChangedItemFromIndexPath:(struct PXSimpleIndexPath )arg1 inDataSource:(id)arg2 toIndexPath:(struct PXSimpleIndexPath )arg3 inDataSource:(id)arg4 ;
-(id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 viewModel:(id)arg2 initialReferenceSize:(struct CGSize )arg3 thumbnailAsset:(*id)arg4 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 itemLayout:(id)arg1 ;
-(void)collectTapToRadarDiagnosticsForItemLayout:(id)arg0 indexPath:(struct PXSimpleIndexPath )arg1 intoContainer:(id)arg2 ;
-(void)setItemLayout:(id)arg0 isTouched:(BOOL)arg1 ;
-(void)setItemLayout:(id)arg0 shouldAutoplayContent:(BOOL)arg1 videoTimeRange:(struct ? )arg2 ;


@end


#endif