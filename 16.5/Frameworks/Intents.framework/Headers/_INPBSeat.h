// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSEAT_H
#define _INPBSEAT_H

@class PBCodable, NSString;
@protocol _INPBSeat, NSSecureCoding, NSCopying;



@interface _INPBSeat : PBCodable <_INPBSeat, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSeatNumber;
@property (readonly, nonatomic) BOOL hasSeatRow;
@property (readonly, nonatomic) BOOL hasSeatSection;
@property (readonly, nonatomic) BOOL hasSeatingType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *seatNumber; // ivar: _seatNumber
@property (copy, nonatomic) NSString *seatRow; // ivar: _seatRow
@property (copy, nonatomic) NSString *seatSection; // ivar: _seatSection
@property (copy, nonatomic) NSString *seatingType; // ivar: _seatingType
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