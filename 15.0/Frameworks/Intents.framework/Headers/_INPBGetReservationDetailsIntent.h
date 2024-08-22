// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBGETRESERVATIONDETAILSINTENT_H
#define _INPBGETRESERVATIONDETAILSINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBGetReservationDetailsIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBDataString.h"

@interface _INPBGetReservationDetailsIntent : PBCodable <_INPBGetReservationDetailsIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasReservationContainerReference;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBDataString *reservationContainerReference; // ivar: _reservationContainerReference
@property (copy, nonatomic) NSArray *reservationItemReferences; // ivar: _reservationItemReferences
@property (readonly, nonatomic) NSUInteger reservationItemReferencesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)reservationItemReferencesAtIndex:(NSUInteger)arg0 ;
-(void)addReservationItemReferences:(id)arg0 ;
-(void)clearReservationItemReferences;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif