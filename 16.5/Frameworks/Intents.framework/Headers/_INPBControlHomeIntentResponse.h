// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBCONTROLHOMEINTENTRESPONSE_H
#define _INPBCONTROLHOMEINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBControlHomeIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBControlHomeIntentResponse : PBCodable <_INPBControlHomeIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entityResponses; // ivar: _entityResponses
@property (readonly, nonatomic) NSUInteger entityResponsesCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityResponsesAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEntityResponses:(id)arg0 ;
-(void)clearEntityResponses;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif