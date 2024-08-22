// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGEOGRAPHICMETADATATILEFETCHER_H
#define GEOGEOGRAPHICMETADATATILEFETCHER_H

@class NSArray, NSDictionary, NSString;
@protocol GEOGeographicMetadataFetcher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    unsigned short _mcc;
    unsigned short _mnc;
    GEOLocation *_location;
    NSUInteger _options;
    NSArray *_tileDatas;
    NSDictionary *_resultURLs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initForTileStyle:(int)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initForTileStyle:(int)arg0 mcc:(unsigned short)arg1 mnc:(unsigned short)arg2 location:(id)arg3 options:(NSUInteger)arg4 ;
-(void)fetchMetadataWithResponseQueue:(id)arg0 block:(id)arg1 ;
-(void)reportCorrupt:(id)arg0 ;


@end


#endif