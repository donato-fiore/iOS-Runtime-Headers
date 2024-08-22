// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOGEOGRAPHICMETADATAREQUESTER_H
#define GEOGEOGRAPHICMETADATAREQUESTER_H

@class NSError;
@protocol OS_dispatch_queue, GEOGeographicMetadataFetcher;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"

@interface GEOGeographicMetadataRequester : NSObject {
    NSUInteger _type;
    GEOLocation *_location;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<GEOGeographicMetadataFetcher> *_fetcher;
    NSError *_lastError;
}


@property (copy, nonatomic) id *processBlock; // ivar: _processBlock


+(void)_fetchDataForLocation:(id)arg0 type:(NSUInteger)arg1 retryCount:(NSUInteger)arg2 responseQueue:(id)arg3 responseBlock:(id)arg4 ;
+(void)_fetchPossibleTerritoriesForLocation:(id)arg0 retryCount:(NSUInteger)arg1 responseQueue:(id)arg2 responseBlock:(id)arg3 ;
+(void)fetchDataForLocation:(id)arg0 type:(NSUInteger)arg1 responseQueue:(id)arg2 responseBlock:(id)arg3 ;
+(void)fetchPossibleTerritoriesForLocation:(id)arg0 responseQueue:(id)arg1 responseBlock:(id)arg2 ;
-(id)_doSimpleLookup:(id)arg0 rootQuadKey:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_doTerritoryRegulatoryLookup:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocation:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_fetch;
-(void)_start;
-(void)reportCorrupt:(id)arg0 ;


@end


#endif