// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSTILEMETADATAVEHICLEFUNCTION_H
#define PKPASSTILEMETADATAVEHICLEFUNCTION_H

@class NSArray;


#import "PKPassTileMetadata.h"

@interface PKPassTileMetadataVehicleFunction : PKPassTileMetadata

@property (copy, nonatomic) NSArray *vehicleFunctions; // ivar: _vehicleFunctions


+(BOOL)supportsSecureCoding;
-(BOOL)_setupWithDictionary:(id)arg0 privateDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif