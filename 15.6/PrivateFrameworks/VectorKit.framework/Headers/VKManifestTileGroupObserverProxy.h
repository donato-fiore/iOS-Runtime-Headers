// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKMANIFESTTILEGROUPOBSERVERPROXY_H
#define VKMANIFESTTILEGROUPOBSERVERPROXY_H

@class NSString;
@protocol GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver;

#import <Foundation/Foundation.h>


@interface VKManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>

 {
    function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> _didChangeActiveTileGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? didChangeActiveTileGroup;
@property function<void (GEOExperimentConfiguration *)> experimentConfigurationDidChange; // ivar: _experimentConfigurationDidChange
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property function<void (GEOResourceManifestManager *)> willChangeActiveTileGroup; // ivar: _willChangeActiveTileGroup


-(id)initWithQueue:(id)arg0 ;
-(void)experimentConfigurationDidChange:(id)arg0 ;
-(void)resourceManifestManager:(id)arg0 didChangeActiveTileGroup:(id)arg1 fromOldTileGroup:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;


@end


#endif