// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBJSONDICTIONARY_H
#define _INPBJSONDICTIONARY_H

@class PBCodable, NSString;
@protocol _INPBJSONDictionary, NSSecureCoding, NSCopying;



@interface _INPBJSONDictionary : PBCodable <_INPBJSONDictionary, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasJsonString;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonString; // ivar: _jsonString
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