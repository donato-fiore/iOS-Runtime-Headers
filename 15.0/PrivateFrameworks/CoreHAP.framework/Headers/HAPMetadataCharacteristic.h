// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPMETADATACHARACTERISTIC_H
#define HAPMETADATACHARACTERISTIC_H

@class HMFObject, NSString, NSNumber;


#import "HAPMetadataCharacteristicValue.h"

@interface HAPMetadataCharacteristic : HMFObject

@property (retain, nonatomic) NSString *chrDescription; // ivar: _chrDescription
@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *properties; // ivar: _properties
@property (retain, nonatomic) NSString *units; // ivar: _units
@property (retain, nonatomic) NSString *uuidStr; // ivar: _uuidStr
@property (retain, nonatomic) HAPMetadataCharacteristicValue *valueMetadata; // ivar: _valueMetadata


-(id)description;
-(id)generateDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 description:(id)arg2 format:(id)arg3 properties:(id)arg4 ;
-(void)dump;


@end


#endif