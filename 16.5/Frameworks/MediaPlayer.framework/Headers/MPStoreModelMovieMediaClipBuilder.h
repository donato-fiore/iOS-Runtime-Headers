// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREMODELMOVIEMEDIACLIPBUILDER_H
#define MPSTOREMODELMOVIEMEDIACLIPBUILDER_H



#import "MPStoreModelObjectBuilder.h"

@interface MPStoreModelMovieMediaClipBuilder : MPStoreModelObjectBuilder {
    ? _requestedClipProperties;
}




+(id)allSupportedProperties;
-(id)mediaClipWithStoreItemMetadata:(id)arg0 storeItemMovieClip:(id)arg1 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 userIdentity:(id)arg2 ;


@end


#endif