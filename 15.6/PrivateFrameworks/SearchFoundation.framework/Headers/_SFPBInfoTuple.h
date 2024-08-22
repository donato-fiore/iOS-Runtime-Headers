// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBINFOTUPLE_H
#define _SFPBINFOTUPLE_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBInfoTuple, NSSecureCoding;



@interface _SFPBInfoTuple : PBCodable <_SFPBInfoTuple, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int initiallyVisibleValues; // ivar: _initiallyVisibleValues
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *showMoreString; // ivar: _showMoreString
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values; // ivar: _values


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addValues:(id)arg0 ;
-(void)clearValues;
-(void)writeTo:(id)arg0 ;


@end


#endif