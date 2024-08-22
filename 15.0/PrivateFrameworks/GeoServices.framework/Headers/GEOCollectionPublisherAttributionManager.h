// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOLLECTIONPUBLISHERATTRIBUTIONMANAGER_H
#define GEOCOLLECTIONPUBLISHERATTRIBUTIONMANAGER_H

@class NSCache, geo_isolater;

#import <Foundation/Foundation.h>

#import "GEOPublisherAttributionManifestIndex.h"

@interface GEOCollectionPublisherAttributionManager : NSObject {
    NSCache *_manifestsCache;
    geo_isolater *_isolator;
    GEOPublisherAttributionManifestIndex *_index;
}




+(id)sharedInstance;
-(id)bestAttributionForPublisher:(id)arg0 ;
-(id)bestAttributionForPublisher:(id)arg0 preferredLanguages:(id)arg1 ;
-(id)init;


@end


#endif