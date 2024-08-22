// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBEVENTPARTICIPANT_H
#define _INPBEVENTPARTICIPANT_H

@class PBCodable, NSString;
@protocol _INPBEventParticipant, NSSecureCoding, NSCopying;


#import "_INPBContact.h"

@interface _INPBEventParticipant : PBCodable <_INPBEventParticipant, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIsEventOrganizer;
@property (nonatomic) BOOL hasIsUser;
@property (readonly, nonatomic) BOOL hasPerson;
@property (nonatomic) BOOL hasStatus;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEventOrganizer; // ivar: _isEventOrganizer
@property (nonatomic) BOOL isUser; // ivar: _isUser
@property (retain, nonatomic) _INPBContact *person; // ivar: _person
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif