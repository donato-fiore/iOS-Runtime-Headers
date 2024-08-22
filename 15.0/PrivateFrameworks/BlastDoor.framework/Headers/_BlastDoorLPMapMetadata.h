// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPMAPMETADATA_H
#define _BLASTDOORLPMAPMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString, CNPostalAddress, NSNumber;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPMapMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *address; // ivar: _address
@property (copy, nonatomic) CNPostalAddress *addressComponents; // ivar: _addressComponents
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) _BlastDoorLPImage *categoryIcon; // ivar: _categoryIcon
@property (retain, nonatomic) _BlastDoorLPImage *darkImage; // ivar: _darkImage
@property (copy, nonatomic) NSString *directionsDestinationAddress; // ivar: _directionsDestinationAddress
@property (copy, nonatomic) CNPostalAddress *directionsDestinationAddressComponents; // ivar: _directionsDestinationAddressComponents
@property (copy, nonatomic) NSString *directionsDestinationLocationName; // ivar: _directionsDestinationLocationName
@property (copy, nonatomic) NSString *directionsSourceAddress; // ivar: _directionsSourceAddress
@property (copy, nonatomic) CNPostalAddress *directionsSourceAddressComponents; // ivar: _directionsSourceAddressComponents
@property (copy, nonatomic) NSString *directionsSourceLocationName; // ivar: _directionsSourceLocationName
@property (copy, nonatomic) NSString *directionsType; // ivar: _directionsType
@property (retain, nonatomic) NSNumber *distance; // ivar: _distance
@property (retain, nonatomic) _BlastDoorLPImage *image; // ivar: _image
@property (nonatomic) CLLocationCoordinate2D location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *searchQuery; // ivar: _searchQuery
@property (retain, nonatomic) NSNumber *transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif