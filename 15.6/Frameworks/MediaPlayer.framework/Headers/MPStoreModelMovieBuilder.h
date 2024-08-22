// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREMODELMOVIEBUILDER_H
#define MPSTOREMODELMOVIEBUILDER_H



#import "MPStoreModelObjectBuilder.h"
#import "MPStoreModelPlaybackPositionBuilder.h"
#import "MPStoreModelMovieMediaClipBuilder.h"
#import "MPStoreModelStoreAssetBuilder.h"
#import "MPPropertySet.h"

@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder {
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelMovieMediaClipBuilder *_mediaClipBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    ? _requestedMovieProperties;
}




+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 userIdentity:(id)arg2 ;


@end


#endif