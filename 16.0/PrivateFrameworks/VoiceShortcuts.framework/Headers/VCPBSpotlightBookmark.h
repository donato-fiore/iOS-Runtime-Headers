// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPBSPOTLIGHTBOOKMARK_H
#define VCPBSPOTLIGHTBOOKMARK_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface VCPBSpotlightBookmark : PBCodable <NSCopying>



@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *pairs; // ivar: _pairs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pairsAtIndex:(NSUInteger)arg0 ;
-(void)addPairs:(id)arg0 ;
-(void)clearPairs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif