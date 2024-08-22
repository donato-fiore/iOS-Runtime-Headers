// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDLAYOUTMANAGER_H
#define HUDASHBOARDLAYOUTMANAGER_H



#import "HUCollectionLayoutManager.h"

@interface HUDashboardLayoutManager : HUCollectionLayoutManager {
    ? adaptiveTileDragInteractionLayouts;
    ? hoveringGridPosition;
}




-(BOOL)isAdaptiveTileStyleInSectionIdentifier:(id)arg0 context:(id)arg1 ;
-(id)buildCamerasMosaicSectionFor:(id)arg0 layoutEnvironment:(id)arg1 cameraLayoutOptions:(id)arg2 ;
-(id)buildNowPlayingSectionFor:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)buildResponsiveGridCamerasSectionFor:(id)arg0 layoutEnvironment:(id)arg1 cameraLayoutOptions:(id)arg2 ;
-(id)buildSectionWithIdentifier:(id)arg0 context:(id)arg1 layoutEnvironment:(id)arg2 ;
-(id)configurationWithContext:(id)arg0 traitCollection:(id)arg1 ;
-(id)generateCameraLayoutOptionsFor:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(struct HUGridSize )favoritesSectionGridSize;
-(void)registerSectionDecorationViewsWithLayout:(id)arg0 ;


@end


#endif