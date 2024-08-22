// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESBINARY32TRANSPORT_H
#define DESBINARY32TRANSPORT_H

@class PBCodable;
@protocol NSCopying;



@interface DESBinary32Transport : PBCodable <NSCopying>

 {
    ? _datas;
}


@property (readonly, nonatomic) *float datas;
@property (readonly, nonatomic) NSUInteger datasCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)dataAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addData:(float)arg0 ;
-(void)clearDatas;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif