// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTRESPONSEPAYLOADFAILURE_H
#define _INPBINTENTRESPONSEPAYLOADFAILURE_H

@class PBCodable, NSString;
@protocol _INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying;



@interface _INPBIntentResponsePayloadFailure : PBCodable <_INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL appLaunchRequested; // ivar: _appLaunchRequested
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *enumTypeName; // ivar: _enumTypeName
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasAppLaunchRequested;
@property (readonly, nonatomic) BOOL hasEnumTypeName;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly) NSUInteger hash;
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