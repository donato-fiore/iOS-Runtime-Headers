// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2PERFXPCLATENCY_H
#define SGM2PERFXPCLATENCY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2PerfXPCLatency : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasMethod;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int method; // ivar: _method


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)methodAsString:(int)arg0 ;
-(int)StringAsMethod:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif