// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPASSETMETADATAFETCHER_H
#define GEOMAPASSETMETADATAFETCHER_H

@class geo_isolater;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEOTileLoader.h"
#import "GEOTileKeyList.h"
#import "GEOMapAssetMetadata.h"

@interface GEOMapAssetMetadataFetcher : NSObject {
    GEOApplicationAuditToken *_auditToken;
    GEOTileLoader *_tileLoader;
    BOOL _enableASTCTextures;
    geo_isolater *_isolation;
    GEOTileKeyList *_lastLoadedKeys;
    GEOMapAssetMetadata *_lastLoadedMetadata;
}




-(id)init;
-(id)initWithTileLoader:(id)arg0 auditToken:(id)arg1 enableASTCTextures:(BOOL)arg2 ;
-(void)fetchAssetMetadataForMetadataKeys:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif