// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESOURCEFILTERSMANAGER_H
#define GEORESOURCEFILTERSMANAGER_H

@class NSSet;
@protocol GEOResourceFiltersManagerDelegate;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"
#import "GEOActiveResourceFilters.h"

@interface GEOResourceFiltersManager : NSObject {
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSSet *activeScales;
@property (readonly, nonatomic) NSSet *activeScenarios;
@property (weak, nonatomic) NSObject<GEOResourceFiltersManagerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
// -(void)_activateFilters:(id)arg0 setValueBlock:(unk)arg1  ;
-(void)_deactivateFilters:(id)arg0 ;
-(void)_writeToDisk;
-(void)activateScale:(int)arg0 ;
-(void)activateScenario:(int)arg0 ;
-(void)deactivateScale:(int)arg0 ;
-(void)deactivateScenario:(int)arg0 ;


@end


#endif