// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPOITYPEMAPPING_H
#define GEOPOITYPEMAPPING_H

@class NSSet, NSDictionary, geo_isolater, NSString;
@protocol GEOResourceManifestTileGroupObserver;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestManager.h"
#import "GEOResourceManager.h"

@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver>

 {
    NSSet *_alwaysVisibleTypes;
    NSDictionary *_categoryToTypeMapping;
    NSDictionary *_typeToCategoryMapping;
    geo_isolater *_accessLock;
    GEOResourceManifestManager *_manifestManager;
    GEOResourceManager *_resourceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedMapping;
-(BOOL)isAlwaysVisiblePOIType:(int)arg0 ;
-(BOOL)parseCategoryMappingJSON:(id)arg0 categoryToPOIType:(*id)arg1 POITypeToCategory:(*id)arg2 ;
-(id)alwaysVisibleTypes;
-(id)categoryForPOIType:(int)arg0 ;
-(id)categoryToTypeMapping;
-(id)init;
-(id)initWithResourceManifestManager:(id)arg0 resourceManager:(id)arg1 ;
-(id)parseVisiblePOITypesJSON:(id)arg0 ;
-(id)typeToCategoryMapping;
-(id)typesForPOICategories:(id)arg0 ;
-(void)_tearDown;
-(void)clearCachedValues;
-(void)dealloc;
-(void)loadPOICategoriesJSON;
-(void)parsePOICategoriesJSON:(id)arg0 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;


@end


#endif