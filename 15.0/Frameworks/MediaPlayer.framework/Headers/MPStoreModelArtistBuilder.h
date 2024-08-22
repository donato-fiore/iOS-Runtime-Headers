// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREMODELARTISTBUILDER_H
#define MPSTOREMODELARTISTBUILDER_H



#import "MPStoreModelObjectBuilder.h"

@interface MPStoreModelArtistBuilder : MPStoreModelObjectBuilder {
    ? _requestedArtistProperties;
}




+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 userIdentity:(id)arg2 ;


@end


#endif