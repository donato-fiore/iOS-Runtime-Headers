// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSEARCHATTRIBUTIONSERVERREMOTEPROXY_H
#define GEOSEARCHATTRIBUTIONSERVERREMOTEPROXY_H

@class NSString;
@protocol GEOSearchAttributionServerProxy, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOSearchAttributionManifest.h"

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy>

 {
    NSObject<OS_dispatch_queue> *_attributionQueue;
    GEOSearchAttributionManifest *_attributionManifest;
    os_unfair_lock_s _attributionManifestLock;
    int _attributionManifestUpdatedToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_attributionManifest;
-(id)init;
-(void)_loadAttributionInfoForIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadAttributionInfoForIdentifiers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif