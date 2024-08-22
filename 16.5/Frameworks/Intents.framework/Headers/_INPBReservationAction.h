// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBRESERVATIONACTION_H
#define _INPBRESERVATIONACTION_H

@class PBCodable, NSString;
@protocol _INPBReservationAction, NSSecureCoding, NSCopying;


#import "_INPBUserActivity.h"
#import "_INPBDateTimeRange.h"

@interface _INPBReservationAction : PBCodable <_INPBReservationAction, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUserActivity;
@property (readonly, nonatomic) BOOL hasValidDuration;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _INPBUserActivity *userActivity; // ivar: _userActivity
@property (retain, nonatomic) _INPBDateTimeRange *validDuration; // ivar: _validDuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif