// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMPLACEATTRIBUTION_H
#define GEOMAPITEMPLACEATTRIBUTION_H

@class NSArray, NSURL;


#import "GEOMapItemAttribution.h"

@interface GEOMapItemPlaceAttribution : GEOMapItemAttribution

@property (readonly, nonatomic) NSArray *checkInURLs;
@property (readonly, nonatomic) NSURL *webURL;


-(id)initWithSearchAttributionInfo:(id)arg0 attributionURLs:(id)arg1 poiID:(id)arg2 ;


@end


#endif