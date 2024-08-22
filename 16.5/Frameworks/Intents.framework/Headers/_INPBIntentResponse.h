// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTRESPONSE_H
#define _INPBINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBIntentResponsePayloadFailure.h"
#import "_INPBIntentResponsePayloadSuccess.h"
#import "_INPBUserActivity.h"

@interface _INPBIntentResponse : PBCodable <_INPBIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPayloadFailure;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (nonatomic) BOOL hasRequiresAuthentication;
@property (nonatomic) BOOL hasRequiresProtectedData;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUserActivity;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure; // ivar: _payloadFailure
@property (retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess; // ivar: _payloadSuccess
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (nonatomic) BOOL requiresProtectedData; // ivar: _requiresProtectedData
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _INPBUserActivity *userActivity; // ivar: _userActivity


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