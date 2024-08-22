// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLECATEGORYDOMAINDICTIONARY_H
#define HDCODABLECATEGORYDOMAINDICTIONARY_H

@class PBCodable, NSString, NSMutableArray;
@protocol HDSyncCodable, NSCopying;



@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *keyValuePairs; // ivar: _keyValuePairs
@property (readonly) Class superclass;


-(BOOL)_validateForInsertionWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)decodedCategory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCategory:(NSInteger)arg0 domain:(id)arg1 ;
-(id)keyValuePairsAtIndex:(NSUInteger)arg0 ;
-(void)addKeyValuePairs:(id)arg0 ;
-(void)clearKeyValuePairs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif