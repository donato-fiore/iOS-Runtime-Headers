// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTOREPLATFORMMETADATAGENERICOBJECTBUILDER_H
#define MPMODELSTOREPLATFORMMETADATAGENERICOBJECTBUILDER_H


#import <Foundation/Foundation.h>

#import "MPStoreModelPlaybackPositionBuilder.h"
#import "MPPropertySet.h"
#import "MPStoreModelStoreAssetBuilder.h"

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPPropertySet *_storeAssetProperties;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    ? _requestedSongProperties;
}


@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties; // ivar: _requestedProperties


-(id)genericObjectForStorePlatformMetadata:(id)arg0 userIdentity:(id)arg1 ;
-(id)initWithRequestedProperties:(id)arg0 ;


@end


#endif