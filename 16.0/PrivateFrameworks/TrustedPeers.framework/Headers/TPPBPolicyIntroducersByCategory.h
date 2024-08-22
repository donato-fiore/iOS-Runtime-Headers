// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPBPOLICYINTRODUCERSBYCATEGORY_H
#define TPPBPOLICYINTRODUCERSBYCATEGORY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSMutableArray *introducers; // ivar: _introducers


+(id)TPPBPolicyIntroducersByCategoryWithCategory:(id)arg0 introducers:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)introducersAtIndex:(NSUInteger)arg0 ;
-(void)addIntroducers:(id)arg0 ;
-(void)clearIntroducers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif