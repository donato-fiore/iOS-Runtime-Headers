// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMIMETRICSSALIENCYINFERENCE_H
#define SGMIMETRICSSALIENCYINFERENCE_H

@class PBCodable;
@protocol NSCopying;



@interface SGMIMetricsSaliencyInference : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsSalient;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasTimestampSinceReference;
@property (nonatomic) BOOL isSalient; // ivar: _isSalient
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) CGFloat timestampSinceReference; // ivar: _timestampSinceReference


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