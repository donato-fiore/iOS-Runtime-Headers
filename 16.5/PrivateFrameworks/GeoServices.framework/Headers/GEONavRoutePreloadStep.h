// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVROUTEPRELOADSTEP_H
#define GEONAVROUTEPRELOADSTEP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "GEOTileKeyList.h"
#import "GEOApplicationAuditToken.h"
#import "GEOSPRMetroAvailabilityFetcher.h"
#import "GEOMapAssetMetadataFetcher.h"

@interface GEONavRoutePreloadStep : NSObject {
    ? coord;
    CGFloat routeIdx;
    NSMutableDictionary *wantedTiles;
    GEOTileKeyList *assetMetadataTiles;
    CGFloat startTime;
    CGFloat endTime;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    int cellularCoverage;
    BOOL nearManeuver;
    BOOL loading;
    BOOL loaded;
    GEOApplicationAuditToken *_auditToken;
    GEOSPRMetroAvailabilityFetcher *_sprMetrosAvailabilityFetcher;
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;
    unsigned int _errorCount;
    unsigned int _lifetimeErrorCount;
    unsigned char _metrosSupported;
    NSUInteger _parentSignpostID;
    NSUInteger _signpostID;
}


@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasLifetimeError;


-(BOOL)okToLoad;
-(CGFloat)networkDataRateKB;
-(id)description;
-(id)init;
-(id)initWithAuditToken:(id)arg0 highZoomMetrosAvailabilityFetcher:(id)arg1 assetMetadataFetcher:(id)arg2 preloaderSignpostID:(NSUInteger)arg3 ;
// -(void)_loadAssetMetadataRequireWiFi:(BOOL)arg0 unsuccessfulKeysAccumulator:(id)arg1 errorsAccumulator:(id)arg2 queue:(id)arg3 willLoadHandler:(id)arg4 progressHandler:(unk)arg5 completionHandler:(id)arg6  ;
// -(void)_loadTiles:(id)arg0 requireWiFi:(BOOL)arg1 unsuccessfulKeysAccumulator:(id)arg2 errorsAccumulator:(id)arg3 queue:(id)arg4 group:(id)arg5 willLoadHandler:(id)arg6 progressHandler:(unk)arg7  ;
-(void)cancel;
-(void)encounteredErrors:(id)arg0 ;
// -(void)loadWithCallbackQueue:(id)arg0 requireWiFi:(BOOL)arg1 willLoadHandler:(id)arg2 progressHandler:(unk)arg3 finishedHandler:(id)arg4 errorHandler:(unk)arg5  ;
-(void)resetErrors;


@end


#endif