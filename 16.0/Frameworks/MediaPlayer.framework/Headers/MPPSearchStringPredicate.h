// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPSEARCHSTRINGPREDICATE_H
#define MPPSEARCHSTRINGPREDICATE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface MPPSearchStringPredicate : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSMutableArray *properties; // ivar: _properties
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)propertiesAtIndex:(NSUInteger)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)clearProperties;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif