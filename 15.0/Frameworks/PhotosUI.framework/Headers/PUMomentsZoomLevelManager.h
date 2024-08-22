// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUMOMENTSZOOMLEVELMANAGER_H
#define PUMOMENTSZOOMLEVELMANAGER_H

@class NSMutableArray, PXPhotosDataSource, NSString;
@protocol PXPhotosDataSourceChangeObserver;

#import <Foundation/Foundation.h>

#import "PUSessionInfo.h"
#import "PUCollectionViewIntermediateDataSource.h"
#import "PUZoomableGridViewControllerSpec.h"

@interface PUMomentsZoomLevelManager : NSObject <PXPhotosDataSourceChangeObserver>

 {
    NSMutableArray *_allLevelInfos;
    PXPhotosDataSource *_momentsDataSource;
    BOOL _isInvalidatingLayoutOfZoomLevels;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger highestZoomLevel;
@property (readonly, nonatomic) NSUInteger lowestZoomLevel;
@property (readonly, nonatomic) NSUInteger preferredDefaultZoomLevel;
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly, nonatomic) PUCollectionViewIntermediateDataSource *sharedIntermediateDataSource; // ivar: _sharedIntermediateDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridSpec; // ivar: _zoomableGridSpec


-(BOOL)zoomLevel:(NSUInteger)arg0 isHigherThanZoomLevel:(NSUInteger)arg1 ;
-(NSUInteger)zoomLevelAboveZoomLevel:(NSUInteger)arg0 ;
-(NSUInteger)zoomLevelBelowZoomLevel:(NSUInteger)arg0 ;
-(id)existingViewControllerForZoomLevel:(NSUInteger)arg0 inNavigationController:(id)arg1 ;
-(id)initWithSpec:(id)arg0 ;
-(id)jumpToZoomLevel:(NSUInteger)arg0 inNavigationController:(id)arg1 usingTopControllerConfigurationBlock:(id)arg2 ;
-(id)momentsDataSource;
-(id)newViewControllerForZoomLevel:(NSUInteger)arg0 ;
-(id)zoomLevelInfoForZoomLevel:(NSUInteger)arg0 ;
-(void)_defaultsDidChange:(id)arg0 ;
-(void)_updateSummarizeSectionsOnZoomLevelInfos;
-(void)dealloc;
-(void)markZoomInfosInvalidWithWidth:(CGFloat)arg0 ;
-(void)photosDataSource:(id)arg0 didReceivePhotoLibraryChange:(id)arg1 ;
-(void)updateZoomableGridSpecForTraitCollection:(id)arg0 referenceSize:(struct CGSize )arg1 ;
-(void)zoomLevelInfo:(id)arg0 didInvalidateLayoutWithContext:(id)arg1 ;


@end


#endif