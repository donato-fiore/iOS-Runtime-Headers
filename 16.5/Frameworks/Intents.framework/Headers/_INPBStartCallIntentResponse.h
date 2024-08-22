// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSTARTCALLINTENTRESPONSE_H
#define _INPBSTARTCALLINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBStartCallIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBConnectedCall.h"

@interface _INPBStartCallIntentResponse : PBCodable <_INPBStartCallIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int confirmationReason; // ivar: _confirmationReason
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasConfirmationReason;
@property (nonatomic) BOOL hasShouldDoEmergencyCountdown;
@property (readonly, nonatomic) BOOL hasStartedCall;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *restrictedContacts; // ivar: _restrictedContacts
@property (readonly, nonatomic) NSUInteger restrictedContactsCount;
@property (nonatomic) BOOL shouldDoEmergencyCountdown; // ivar: _shouldDoEmergencyCountdown
@property (retain, nonatomic) _INPBConnectedCall *startedCall; // ivar: _startedCall
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)confirmationReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)restrictedContactsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsConfirmationReason:(id)arg0 ;
-(void)addRestrictedContacts:(id)arg0 ;
-(void)clearRestrictedContacts;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif