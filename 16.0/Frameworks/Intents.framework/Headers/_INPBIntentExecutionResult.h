// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBINTENTEXECUTIONRESULT_H
#define _INPBINTENTEXECUTIONRESULT_H

@class PBCodable, NSString;
@protocol _INPBIntentExecutionResult, NSSecureCoding, NSCopying;



@interface _INPBIntentExecutionResult : PBCodable <_INPBIntentExecutionResult, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *encodedIntent; // ivar: _encodedIntent
@property (copy, nonatomic) NSString *encodedIntentResponse; // ivar: _encodedIntentResponse
@property (nonatomic) int encodingFormat; // ivar: _encodingFormat
@property (readonly, nonatomic) BOOL hasEncodedIntent;
@property (readonly, nonatomic) BOOL hasEncodedIntentResponse;
@property (nonatomic) BOOL hasEncodingFormat;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)encodingFormatAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsEncodingFormat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif