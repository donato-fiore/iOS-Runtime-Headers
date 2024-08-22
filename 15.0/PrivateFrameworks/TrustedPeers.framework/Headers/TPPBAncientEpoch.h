// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPPBANCIENTEPOCH_H
#define TPPBANCIENTEPOCH_H

@class PBCodable;
@protocol NSCopying;



@interface TPPBAncientEpoch : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger candidateEpoch; // ivar: _candidateEpoch
@property (nonatomic) BOOL hasCandidateEpoch;
@property (nonatomic) BOOL hasMyEpoch;
@property (nonatomic) NSUInteger myEpoch; // ivar: _myEpoch


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