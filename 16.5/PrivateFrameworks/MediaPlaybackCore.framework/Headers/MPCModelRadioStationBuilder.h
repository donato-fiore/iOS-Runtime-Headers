// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOSTATIONBUILDER_H
#define MPCMODELRADIOSTATIONBUILDER_H

@class MPPropertySet;

#import <Foundation/Foundation.h>


@interface MPCModelRadioStationBuilder : NSObject {
    ? _requestedRadioStationProperties;
}


@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties; // ivar: _requestedProperties


-(id)initWithRequestedProperties:(id)arg0 ;
-(id)modelRadioStationForMetadata:(id)arg0 userIdentity:(id)arg1 ;


@end


#endif