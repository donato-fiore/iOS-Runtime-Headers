// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBLISTRIDEOPTIONSINTENT_H
#define _INPBLISTRIDEOPTIONSINTENT_H

@class PBCodable, NSString;
@protocol _INPBListRideOptionsIntent, NSSecureCoding, NSCopying;


#import "_INPBLocation.h"
#import "_INPBIntentMetadata.h"

@interface _INPBListRideOptionsIntent : PBCodable <_INPBListRideOptionsIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBLocation *dropOffLocation; // ivar: _dropOffLocation
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBLocation *pickupLocation; // ivar: _pickupLocation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif