// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOADDISO18013BLOBSREQUEST_H
#define NPKPROTOADDISO18013BLOBSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoAddISO18013BlobsRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cardType; // ivar: _cardType
@property (nonatomic) BOOL hasCardType;
@property (retain, nonatomic) NSMutableArray *isoblobs; // ivar: _isoblobs
@property (retain, nonatomic) NSMutableArray *subcredentialDatas; // ivar: _subcredentialDatas


+(Class)subcredentialDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cardTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)isoblobsAtIndex:(NSUInteger)arg0 ;
-(id)subcredentialDataAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCardType:(id)arg0 ;
-(void)addIsoblobs:(id)arg0 ;
-(void)addSubcredentialData:(id)arg0 ;
-(void)clearIsoblobs;
-(void)clearSubcredentialDatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif