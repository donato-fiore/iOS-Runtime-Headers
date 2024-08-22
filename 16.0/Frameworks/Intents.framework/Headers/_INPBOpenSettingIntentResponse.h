// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBOPENSETTINGINTENTRESPONSE_H
#define _INPBOPENSETTINGINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBOpenSettingIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBOpenSettingIntentResponse : PBCodable <_INPBOpenSettingIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *errorDetail; // ivar: _errorDetail
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (readonly, nonatomic) BOOL hasPunchoutUrl;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *punchoutUrl; // ivar: _punchoutUrl
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