// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPCOMPOUNDPREDICATE_H
#define MPPCOMPOUNDPREDICATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface MPPCompoundPredicate : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *predicates; // ivar: _predicates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)predicatesAtIndex:(NSUInteger)arg0 ;
-(void)addPredicates:(id)arg0 ;
-(void)clearPredicates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif