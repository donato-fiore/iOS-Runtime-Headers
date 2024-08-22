// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMPHOTOSATTRIBUTION_H
#define GEOMAPITEMPHOTOSATTRIBUTION_H

@class NSArray;


#import "GEOMapItemAttribution.h"

@interface GEOMapItemPhotosAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *addPhotoURLs;
@property (readonly, nonatomic) BOOL canAddPhotosLocally;
@property (readonly, nonatomic) BOOL canShowPhotosLocally;
@property (readonly, nonatomic) BOOL shouldSuppressPhotoAttribution;
@property (readonly, nonatomic) BOOL supportsReportingIssue;


-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 poiID:(id)arg2 ;
-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 yelpID:(id)arg2 ;
-(id)urlsForPhotoWithIdentifier:(id)arg0 ;


@end


#endif