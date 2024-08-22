// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYASSETCOLLECTIONSKIMMINGINFO_H
#define PXCURATEDLIBRARYASSETCOLLECTIONSKIMMINGINFO_H

@protocol PXDisplayCollection;

#import <Foundation/Foundation.h>

#import "PXIndexPathSet.h"

@interface PXCuratedLibraryAssetCollectionSkimmingInfo : NSObject

@property (retain, nonatomic) PXIndexPathSet *childCollectionsIndexes; // ivar: _childCollectionsIndexes
@property (nonatomic) NSInteger childCollectionsZoomLevel; // ivar: _childCollectionsZoomLevel
@property (nonatomic) PXSimpleIndexPath currentChildCollectionIndexPath; // ivar: _currentChildCollectionIndexPath
@property (retain, nonatomic) NSObject<PXDisplayCollection> *parentAssetCollection; // ivar: _parentAssetCollection
@property (nonatomic) BOOL slideshowStarted; // ivar: _slideshowStarted
@property (nonatomic) BOOL touchInteractionStarted; // ivar: _touchInteractionStarted




@end


#endif