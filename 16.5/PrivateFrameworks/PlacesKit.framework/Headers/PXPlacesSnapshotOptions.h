// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACESSNAPSHOTOPTIONS_H
#define PXPLACESSNAPSHOTOPTIONS_H

@class NSString;
@protocol PXPlacesMapGeotaggableInfoDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKExtendedTraitCollection.h"

@interface PXPlacesSnapshotOptions : NSObject

@property (nonatomic) UIEdgeInsets additionalInsets; // ivar: _additionalInsets
@property (retain, nonatomic) NSString *cacheDirectoryPath; // ivar: _cacheDirectoryPath
@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (retain, nonatomic) NSObject<PXPlacesMapGeotaggableInfoDelegate> *geotaggableInformationDelegate; // ivar: _geotaggableInformationDelegate
@property (nonatomic) NSUInteger popoverImageType; // ivar: _popoverImageType
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldRenderThumbnailForNoLocation; // ivar: _shouldRenderThumbnailForNoLocation
@property (nonatomic) BOOL shouldSkipPlaceholder; // ivar: _shouldSkipPlaceholder
@property (nonatomic) BOOL showsPointLabels; // ivar: _showsPointLabels
@property (nonatomic) NSUInteger snapshotMapType; // ivar: _snapshotMapType
@property (nonatomic) CGSize viewSize; // ivar: _viewSize
@property (nonatomic) CGFloat visibleDistance; // ivar: _visibleDistance


-(id)description;
-(id)init;


@end


#endif