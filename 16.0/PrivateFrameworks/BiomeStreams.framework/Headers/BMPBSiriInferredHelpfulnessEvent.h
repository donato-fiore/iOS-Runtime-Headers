// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBSIRIINFERREDHELPFULNESSEVENT_H
#define BMPBSIRIINFERREDHELPFULNESSEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBSiriInferredHelpfulnessEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) BOOL hasInferredHelpfulnessScore;
@property (readonly, nonatomic) BOOL hasModelID;
@property (nonatomic) BOOL hasRestatementScore;
@property (readonly, nonatomic) BOOL hasTurnID;
@property (nonatomic) CGFloat inferredHelpfulnessScore; // ivar: _inferredHelpfulnessScore
@property (retain, nonatomic) NSString *modelID; // ivar: _modelID
@property (nonatomic) CGFloat restatementScore; // ivar: _restatementScore
@property (retain, nonatomic) NSString *turnID; // ivar: _turnID


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