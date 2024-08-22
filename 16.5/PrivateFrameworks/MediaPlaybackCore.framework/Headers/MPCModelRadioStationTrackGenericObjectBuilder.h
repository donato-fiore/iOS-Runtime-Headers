// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOSTATIONTRACKGENERICOBJECTBUILDER_H
#define MPCMODELRADIOSTATIONTRACKGENERICOBJECTBUILDER_H

@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

#import <Foundation/Foundation.h>


@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {
    MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
    ? _requestedSongProperties;
}


@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties; // ivar: _requestedProperties


-(id)genericObjectForRadioStationTrack:(id)arg0 radioStationContainsVideo:(BOOL)arg1 containerUniqueID:(id)arg2 userIdentity:(id)arg3 ;
-(id)initWithRequestedProperties:(id)arg0 ;


@end


#endif