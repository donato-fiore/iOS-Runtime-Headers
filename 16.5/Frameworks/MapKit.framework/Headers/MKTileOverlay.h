// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTILEOVERLAY_H
#define MKTILEOVERLAY_H

@class GEOTileCache, geo_isolater, NSString;
@protocol _MKOverlayTileDataSource, MKOverlay, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MKTileOverlay : NSObject <_MKOverlayTileDataSource, MKOverlay>

 {
    GEOTileCache *_tileCache;
    GEOTileCache *_minimumLifetimeTileCache;
    geo_isolater *_minimumLifetimeTileCacheEvictionTimerIsolation;
    NSObject<OS_dispatch_source> *_minimumLifetimeTileCacheEvictionTimer;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    BOOL _needsAdditionalMinimumLifetimeCleanup;
}


@property (readonly) NSString *URLTemplate; // ivar: _URLTemplate
@property (readonly, nonatomic) ? boundingMapRect;
@property (nonatomic) BOOL canReplaceMapContent; // ivar: _canReplaceMapContent
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeometryFlipped) BOOL geometryFlipped; // ivar: _geometryFlipped
@property (readonly) NSUInteger hash;
@property NSInteger maximumZ; // ivar: _maximumZ
@property NSInteger minimumZ; // ivar: _minimumZ
@property (readonly, nonatomic, getter=_providerID) unsigned int providerID; // ivar: _providerID
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property CGSize tileSize; // ivar: _tileSize
@property (readonly, copy, nonatomic) NSString *title;


-(id)URLForTilePath:(struct ? )arg0 ;
-(id)_tilesInMapRect:(struct ? )arg0 zoomScale:(CGFloat)arg1 contentScale:(CGFloat)arg2 ;
-(id)init;
-(id)initWithURLTemplate:(id)arg0 ;
-(int)_zoomLevelForScale:(CGFloat)arg0 ;
-(struct _GEOTileKey )_keyForPath:(struct ? )arg0 ;
-(void)_assignProviderID;
-(void)_cancelLoadingTileAtPath:(struct ? )arg0 ;
-(void)_flushCaches;
-(void)_loadTile:(struct _GEOTileKey *)arg0 result:(id)arg1 ;
-(void)_minLifetimeCacheCleanupFired;
-(void)_receivedMemoryNotification;
-(void)_scheduleMinLifetimeCacheCleanupIfNecessary;
-(void)dealloc;
-(void)loadTileAtPath:(struct ? )arg0 result:(id)arg1 ;


@end


#endif