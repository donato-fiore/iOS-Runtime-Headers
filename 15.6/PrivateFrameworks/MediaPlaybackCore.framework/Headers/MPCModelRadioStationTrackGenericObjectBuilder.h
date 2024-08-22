// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELRADIOSTATIONTRACKGENERICOBJECTBUILDER_H
#define MPCMODELRADIOSTATIONTRACKGENERICOBJECTBUILDER_H

@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

#import <Foundation/Foundation.h>


@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {
    MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
    ? _requestedSongProperties;
}


@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties; // ivar: _requestedProperties


-(id)genericObjectForRadioStationTrack:(id)arg0 containerUniqueID:(id)arg1 userIdentity:(id)arg2 ;
-(id)initWithRequestedProperties:(id)arg0 ;


@end


#endif