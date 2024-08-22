// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOGEOGRAPHICMETADATAMOBILEASSETFETCHER_H
#define GEOGEOGRAPHICMETADATAMOBILEASSETFETCHER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "GEOMobileAssetResource.h"

@interface GEOGeographicMetadataMobileAssetFetcher : NSObject {
    NSUInteger _type;
    NSDictionary *_parameters;
    id *_responseBlock;
    GEOMobileAssetResource *_result;
}




-(id)initForType:(NSUInteger)arg0 parameters:(id)arg1 ;
-(void)fetchMetadataWithResponseQueue:(id)arg0 block:(id)arg1 ;


@end


#endif