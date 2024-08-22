// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPMERGEABLEDELTAMETADATARETRIEVERESPONSE_H
#define CKDPMERGEABLEDELTAMETADATARETRIEVERESPONSE_H

@class PBCodable, NSData, NSMutableArray;
@protocol NSCopying;



@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *continuation; // ivar: _continuation
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSMutableArray *metadatas; // ivar: _metadatas


+(Class)metadataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)metadataAtIndex:(NSUInteger)arg0 ;
-(void)addMetadata:(id)arg0 ;
-(void)clearMetadatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif