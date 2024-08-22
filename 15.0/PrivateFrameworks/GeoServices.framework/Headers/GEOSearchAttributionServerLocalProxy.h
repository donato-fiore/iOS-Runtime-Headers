// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSEARCHATTRIBUTIONSERVERLOCALPROXY_H
#define GEOSEARCHATTRIBUTIONSERVERLOCALPROXY_H

@class NSMapTable, NSMutableArray, geo_isolater, NSString;
@protocol GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy;

#import <Foundation/Foundation.h>

#import "GEOSearchAttributionManifest.h"

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy>

 {
    NSMapTable *_listeners;
    os_unfair_lock_s _listenersLock;
    BOOL _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    GEOSearchAttributionManifest *_attributionManifest;
    os_unfair_lock_s _attributionManifestLock;
    geo_isolater *_isolater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_attributionManifest;
-(id)init;
-(void)_loadAttributionInfoForListener:(id)arg0 ;
-(void)_sendError:(id)arg0 toListener:(id)arg1 ;
-(void)_sendInfo:(id)arg0 toListener:(id)arg1 ;
-(void)loadAttributionInfoForIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;


@end


#endif