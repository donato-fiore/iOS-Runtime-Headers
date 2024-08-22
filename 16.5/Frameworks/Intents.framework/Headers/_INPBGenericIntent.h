// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBGENERICINTENT_H
#define _INPBGENERICINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBGenericIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBGenericIntent : PBCodable <_INPBGenericIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasVerb;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSUInteger parametersCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *verb; // ivar: _verb


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)parametersAtIndex:(NSUInteger)arg0 ;
-(void)addParameters:(id)arg0 ;
-(void)clearParameters;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif