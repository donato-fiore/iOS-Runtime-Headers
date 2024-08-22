// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOGEOGRAPHICMETADATATILEFETCHER_H
#define GEOGEOGRAPHICMETADATATILEFETCHER_H

@class NSArray, NSString;
@protocol GEOGeographicMetadataFetcher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOLocation.h"

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    GEOLocation *_location;
    NSUInteger _options;
    NSArray *_tileDatas;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initForTileStyle:(int)arg0 location:(id)arg1 options:(NSUInteger)arg2 ;
-(void)fetchMetadataWithResponseQueue:(id)arg0 block:(id)arg1 ;


@end


#endif