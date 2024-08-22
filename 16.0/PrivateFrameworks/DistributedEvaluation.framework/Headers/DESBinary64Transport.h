// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESBINARY64TRANSPORT_H
#define DESBINARY64TRANSPORT_H

@class PBCodable;
@protocol NSCopying;



@interface DESBinary64Transport : PBCodable <NSCopying>

 {
    ? _datas;
}


@property (readonly, nonatomic) *CGFloat datas;
@property (readonly, nonatomic) NSUInteger datasCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)dataAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addData:(CGFloat)arg0 ;
-(void)clearDatas;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif