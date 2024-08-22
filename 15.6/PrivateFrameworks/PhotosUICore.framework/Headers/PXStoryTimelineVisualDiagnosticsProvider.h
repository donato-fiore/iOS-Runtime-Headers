// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTIMELINEVISUALDIAGNOSTICSPROVIDER_H
#define PXSTORYTIMELINEVISUALDIAGNOSTICSPROVIDER_H

@protocol PXStoryVisualDiagnosticsProvider, PXStoryTimeline;

#import <Foundation/Foundation.h>

#import "PXStoryConfiguration.h"
#import "PXMediaProvider.h"
#import "PXStoryModel.h"
#import "PXStoryAutoEditMomentsProvider.h"
#import "PXStoryResourcesDataSource.h"

@interface PXStoryTimelineVisualDiagnosticsProvider : NSObject <PXStoryVisualDiagnosticsProvider>



@property (readonly, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *momentsProvider; // ivar: _momentsProvider
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline


-(NSUInteger)_approxLinesInString:(id)arg0 lineLength:(NSUInteger)arg1 ;
-(id)_autoEditDebugInfoBySegmentInTimeline:(id)arg0 ;
-(id)_descriptionForDurationInfo:(struct ? )arg0 ;
-(id)_descriptionForFaces:(id)arg0 context:(id)arg1 ;
-(id)_descriptionForMovementType:(NSInteger)arg0 ;
-(id)_moduleDescriptionsBySegmentInTimeline:(id)arg0 ;
-(id)_moduleStartSegmentIndexesInTimeline:(id)arg0 ;
-(id)_momentEndSegmentIndexesInTimeline:(id)arg0 ;
-(id)_movementDescriptionForSegmentAtIndex:(NSInteger)arg0 inTimeline:(id)arg1 ;
-(id)_segmentIndexesWithInvalidOrderOutTransitionInTimeline:(id)arg0 ;
-(id)_tvPreviewRankByAssetUUIDForMemory:(id)arg0 ;
-(id)init;
-(id)initWithModel:(id)arg0 screenScale:(CGFloat)arg1 ;
-(void)_addAssetsDetailsTable:(id)arg0 ;
-(void)_addCinematicDiagnostics:(id)arg0 ;
-(void)_addCoverPage:(id)arg0 ;
-(void)_addCropDiagnostics:(id)arg0 ;
-(void)_addMiscellaneousDiagnostics:(id)arg0 ;
-(void)_addSegmentDiagnostics:(id)arg0 ;
-(void)_addSegmentsAutoEditDebugInfoTables:(id)arg0 debugInfoKeys:(id)arg1 ;
-(void)_addSegmentsDetailsTable:(id)arg0 ;
-(void)_drawAsset:(id)arg0 inRect:(struct CGRect )arg1 context:(id)arg2 ;
-(void)_drawSegmentAtIndex:(NSInteger)arg0 timeline:(id)arg1 inRect:(struct CGRect )arg2 options:(NSUInteger)arg3 context:(id)arg4 ;
-(void)_drawVerticalInRect:(struct CGRect )arg0 backgroundColor:(id)arg1 context:(id)arg2 configuration:(id)arg3 ;
-(void)addVisualDiagnosticsToContext:(id)arg0 ;


@end


#endif