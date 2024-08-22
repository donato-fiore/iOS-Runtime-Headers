// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPQUERYRETRIEVERESPONSE_H
#define CKDPQUERYRETRIEVERESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *continuationMarker; // ivar: _continuationMarker
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSMutableArray *queryResults; // ivar: _queryResults


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)queryResultsAtIndex:(NSUInteger)arg0 ;
-(void)addQueryResults:(id)arg0 ;
-(void)clearQueryResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif