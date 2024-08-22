// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBINTENTSLOTRESOLUTIONRESULT_H
#define _INPBINTENTSLOTRESOLUTIONRESULT_H

@class PBCodable, NSString;
@protocol _INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying;


#import "_INPBPayloadConfirmation.h"
#import "_INPBPayloadNeedsDisambiguation.h"
#import "_INPBPayloadNeedsExecuteIntent.h"
#import "_INPBPayloadNeedsValue.h"
#import "_INPBPayloadSuccess.h"
#import "_INPBPayloadUnsupported.h"

@interface _INPBIntentSlotResolutionResult : PBCodable <_INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPayloadConfirmation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsDisambiguation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsExecuteIntent;
@property (readonly, nonatomic) BOOL hasPayloadNeedsValue;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (readonly, nonatomic) BOOL hasPayloadUnsupported;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation; // ivar: _payloadConfirmation
@property (retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation; // ivar: _payloadNeedsDisambiguation
@property (retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent; // ivar: _payloadNeedsExecuteIntent
@property (retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue; // ivar: _payloadNeedsValue
@property (retain, nonatomic) _INPBPayloadSuccess *payloadSuccess; // ivar: _payloadSuccess
@property (retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported; // ivar: _payloadUnsupported
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


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