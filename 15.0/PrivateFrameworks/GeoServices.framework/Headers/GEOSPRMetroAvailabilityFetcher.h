// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSPRMETROAVAILABILITYFETCHER_H
#define GEOSPRMETROAVAILABILITYFETCHER_H

@class geo_isolater;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEOTileLoader.h"
#import "GEOVectorTile.h"

@interface GEOSPRMetroAvailabilityFetcher : NSObject {
    GEOApplicationAuditToken *_auditToken;
    GEOTileLoader *_tileLoader;
    BOOL _forceDisableMetros;
    geo_isolater *_isolation;
    _GEOTileKey _lastLoadedKey;
    GEOVectorTile *_lastLoadedTile;
}




-(id)init;
-(id)initWithTileLoader:(id)arg0 auditToken:(id)arg1 ;
-(id)initWithTileLoader:(id)arg0 auditToken:(id)arg1 forceDisableMetros:(BOOL)arg2 ;
-(void)determineAvailabilityForCoordinate:(struct ? )arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif