// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBPARSECSEARCHENTITY_H
#define BMPBPARSECSEARCHENTITY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBParsecSearchEntity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int category; // ivar: _category
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasProbabilityScore;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) float probabilityScore; // ivar: _probabilityScore
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearTopics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif