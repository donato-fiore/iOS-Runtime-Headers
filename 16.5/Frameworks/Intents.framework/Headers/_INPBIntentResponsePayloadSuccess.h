// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTRESPONSEPAYLOADSUCCESS_H
#define _INPBINTENTRESPONSEPAYLOADSUCCESS_H

@class PBCodable, NSString, NSData;
@protocol _INPBIntentResponsePayloadSuccess, NSSecureCoding, NSCopying;



@interface _INPBIntentResponsePayloadSuccess : PBCodable <_INPBIntentResponsePayloadSuccess, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasResponseMessageData;
@property (readonly, nonatomic) BOOL hasResponseTypeName;
@property (nonatomic) BOOL hasShouldOpenContainingApplication;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *responseMessageData; // ivar: _responseMessageData
@property (copy, nonatomic) NSString *responseTypeName; // ivar: _responseTypeName
@property (nonatomic) BOOL shouldOpenContainingApplication; // ivar: _shouldOpenContainingApplication
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