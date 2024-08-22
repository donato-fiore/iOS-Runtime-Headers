// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKPROTOCOALESCEDBATCHEDFETCHRESULT_H
#define NNMKPROTOCOALESCEDBATCHEDFETCHRESULT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoCoalescedBatchedFetchResult : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *fetchResults; // ivar: _fetchResults


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fetchResultsAtIndex:(NSUInteger)arg0 ;
-(void)addFetchResults:(id)arg0 ;
-(void)clearFetchResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif