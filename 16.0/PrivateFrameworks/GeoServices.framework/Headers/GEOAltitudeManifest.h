// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOALTITUDEMANIFEST_H
#define GEOALTITUDEMANIFEST_H

@class NSString;
@protocol NSXMLParserDelegate, GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>

#import "GEOAltitudeManifestReserved.h"

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver>

 {
    GEOAltitudeManifestReserved *_reserved;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)hasDataVersionForRegion:(unsigned int)arg0 ;
-(BOOL)isValidTourId:(NSUInteger)arg0 ;
-(BOOL)parseXml:(id)arg0 ;
-(id)availableRegions;
-(id)init;
-(id)initWithoutObserver;
-(id)nameForRegion:(unsigned int)arg0 ;
-(id)tourIdsForRegion:(unsigned int)arg0 ;
-(id)tripIdsForRegion:(unsigned int)arg0 ;
-(unsigned int)dataVersionForRegion:(unsigned int)arg0 ;
-(unsigned int)versionForRegion:(unsigned int)arg0 ;
-(void)_reloadManifest;
-(void)commonInit;
-(void)dealloc;
-(void)getvalidFlyOverAnimationIDPool:(*void)arg0 ;
-(void)parseManifest:(id)arg0 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;


@end


#endif