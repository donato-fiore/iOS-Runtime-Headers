// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBIDENTIFYINCOMINGCALLERINTENTRESPONSE_H
#define _INPBIDENTIFYINCOMINGCALLERINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBIdentifyIncomingCallerIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBIdentifyIncomingCallerIntentResponse : PBCodable <_INPBIdentifyIncomingCallerIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *callRecords; // ivar: _callRecords
@property (readonly, nonatomic) NSUInteger callRecordsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) NSUInteger hash;
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)callRecordsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addCallRecords:(id)arg0 ;
-(void)clearCallRecords;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif