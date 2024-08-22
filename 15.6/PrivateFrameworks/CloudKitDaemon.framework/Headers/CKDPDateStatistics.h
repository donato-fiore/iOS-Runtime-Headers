// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPDATESTATISTICS_H
#define CKDPDATESTATISTICS_H

@class PBCodable, CKDPDate;
@protocol NSCopying;



@interface CKDPDateStatistics : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPDate *creation; // ivar: _creation
@property (readonly, nonatomic) BOOL hasCreation;
@property (readonly, nonatomic) BOOL hasModification;
@property (retain, nonatomic) CKDPDate *modification; // ivar: _modification


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif