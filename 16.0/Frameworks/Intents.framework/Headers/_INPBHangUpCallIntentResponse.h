// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBHANGUPCALLINTENTRESPONSE_H
#define _INPBHANGUPCALLINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBHangUpCallIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBHangUpCallIntentResponse : PBCodable <_INPBHangUpCallIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasHungUpCallType;
@property (readonly) NSUInteger hash;
@property (nonatomic) int hungUpCallType; // ivar: _hungUpCallType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)hungUpCallTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsHungUpCallType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif