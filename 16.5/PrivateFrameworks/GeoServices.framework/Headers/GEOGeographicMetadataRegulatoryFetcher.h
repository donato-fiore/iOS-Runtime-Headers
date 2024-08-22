// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGEOGRAPHICMETADATAREGULATORYFETCHER_H
#define GEOGEOGRAPHICMETADATAREGULATORYFETCHER_H

@class NSString;
@protocol GEOGeographicMetadataFetcher;


#import "GEOGeographicMetadataMobileAssetFetcher.h"

@interface GEOGeographicMetadataRegulatoryFetcher : GEOGeographicMetadataMobileAssetFetcher <GEOGeographicMetadataFetcher>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif