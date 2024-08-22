// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBSTRINGDICTIONARY_H
#define _SFPBSTRINGDICTIONARY_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBStringDictionary, NSSecureCoding;



@interface _SFPBStringDictionary : PBCodable <_SFPBStringDictionary, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *keyValues; // ivar: _keyValues
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithNSDictionary:(id)arg0 ;
-(id)keyValuesAtIndex:(NSUInteger)arg0 ;
-(void)addKeyValues:(id)arg0 ;
-(void)clearKeyValues;
-(void)writeTo:(id)arg0 ;


@end


#endif