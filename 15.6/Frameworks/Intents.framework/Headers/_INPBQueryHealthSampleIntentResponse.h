// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBQUERYHEALTHSAMPLEINTENTRESPONSE_H
#define _INPBQUERYHEALTHSAMPLEINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBQueryHealthSampleIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBQueryHealthSampleIntentResponse : PBCodable <_INPBQueryHealthSampleIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *resultValues; // ivar: _resultValues
@property (readonly, nonatomic) NSUInteger resultValuesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)resultValuesAtIndex:(NSUInteger)arg0 ;
-(void)addResultValues:(id)arg0 ;
-(void)clearResultValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif