// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSETRELATIONSHIPINTENTRESPONSE_H
#define _INPBSETRELATIONSHIPINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSetRelationshipIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBContactCard.h"

@interface _INPBSetRelationshipIntentResponse : PBCodable <_INPBSetRelationshipIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMeCard;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBContactCard *meCard; // ivar: _meCard
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