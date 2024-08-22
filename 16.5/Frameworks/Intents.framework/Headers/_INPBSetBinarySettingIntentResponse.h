// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSETBINARYSETTINGINTENTRESPONSE_H
#define _INPBSETBINARYSETTINGINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSetBinarySettingIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSetBinarySettingIntentResponse : PBCodable <_INPBSetBinarySettingIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *errorDetail; // ivar: _errorDetail
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (nonatomic) BOOL hasOldValue;
@property (nonatomic) BOOL hasUpdatedValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) int oldValue; // ivar: _oldValue
@property (readonly) Class superclass;
@property (nonatomic) int updatedValue; // ivar: _updatedValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)oldValueAsString:(int)arg0 ;
-(id)updatedValueAsString:(int)arg0 ;
-(int)StringAsOldValue:(id)arg0 ;
-(int)StringAsUpdatedValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif