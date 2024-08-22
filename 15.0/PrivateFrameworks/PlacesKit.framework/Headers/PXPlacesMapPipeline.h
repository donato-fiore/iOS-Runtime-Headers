// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPPIPELINE_H
#define PXPLACESMAPPIPELINE_H

@class NSString;
@protocol PXPlacesMapPipelineComponentProvider, PXPlacesGeotaggedItemDataSource, PXPlacesMapLayout, PXPlacesMapRenderer, PXPlacesMapSelectionHandler, PXPlacesMapUpdatePlan;

#import <Foundation/Foundation.h>

#import "PXPlacesImageCache.h"

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider>



@property (readonly, nonatomic) NSObject<PXPlacesGeotaggedItemDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PXPlacesImageCache *imageCache; // ivar: _imageCache
@property (readonly) NSObject<PXPlacesMapLayout> *layout; // ivar: _layout
@property (readonly) NSObject<PXPlacesMapRenderer> *renderer; // ivar: _renderer
@property (readonly) NSObject<PXPlacesMapSelectionHandler> *selectionHandler; // ivar: _selectionHandler
@property (readonly) Class superclass;
@property (readonly) NSObject<PXPlacesMapUpdatePlan> *updatePlan; // ivar: _updatePlan


-(id)executeRemoval;
-(id)executeWithUpdatedViewPort:(id)arg0 andDataSourceChange:(id)arg1 ;
-(id)initWithLayout:(id)arg0 updatePlan:(id)arg1 renderer:(id)arg2 selectionHandler:(id)arg3 ;
-(void)cancel;


@end


#endif