// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBANSWERCALLINTENTRESPONSE_H
#define _INPBANSWERCALLINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBAnswerCallIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBConnectedCall.h"

@interface _INPBAnswerCallIntentResponse : PBCodable <_INPBAnswerCallIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBConnectedCall *answeredCall; // ivar: _answeredCall
@property (copy, nonatomic) NSArray *callRecords; // ivar: _callRecords
@property (readonly, nonatomic) NSUInteger callRecordsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAnsweredCall;
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