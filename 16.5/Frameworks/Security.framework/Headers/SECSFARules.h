// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECSFARULES_H
#define SECSFARULES_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SECSFARules : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *rules; // ivar: _rules


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rulesAtIndex:(NSUInteger)arg0 ;
-(void)addRules:(id)arg0 ;
-(void)clearRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif