// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPATOMSYNCRESPONSE_H
#define CKDPATOMSYNCRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPAtomSyncResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *atomBatchs; // ivar: _atomBatchs


+(Class)atomBatchType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)atomBatchAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAtomBatch:(id)arg0 ;
-(void)clearAtomBatchs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif