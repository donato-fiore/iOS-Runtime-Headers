// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSTILESTATEMETADATAVEHICLEFUNCTION_H
#define PKPASSTILESTATEMETADATAVEHICLEFUNCTION_H

@class NSDictionary;


#import "PKPassTileStateMetadata.h"

@interface PKPassTileStateMetadataVehicleFunction : PKPassTileStateMetadata

@property (copy, nonatomic) NSDictionary *vehicleFunctionStates; // ivar: _vehicleFunctionStates


+(BOOL)supportsSecureCoding;
-(BOOL)_setupWithDictionary:(id)arg0 ;
-(BOOL)isEqualToUnresolvedMetadata:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif