// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBGENERICINTENTRESPONSE_H
#define _INPBGENERICINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBGenericIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBGenericIntentResponse : PBCodable <_INPBGenericIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly, nonatomic) NSUInteger propertiesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesAtIndex:(NSUInteger)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)clearProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif