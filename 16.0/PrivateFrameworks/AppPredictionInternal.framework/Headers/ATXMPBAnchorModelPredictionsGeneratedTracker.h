// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMPBANCHORMODELPREDICTIONSGENERATEDTRACKER_H
#define ATXMPBANCHORMODELPREDICTIONSGENERATEDTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBAnchorModelPredictionsGeneratedTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *anchorType; // ivar: _anchorType
@property (retain, nonatomic) NSString *candidateType; // ivar: _candidateType
@property (retain, nonatomic) NSString *executableObject; // ivar: _executableObject
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasAnchorType;
@property (readonly, nonatomic) BOOL hasCandidateType;
@property (readonly, nonatomic) BOOL hasExecutableObject;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasSecondsAfterAnchorEnd;
@property (nonatomic) BOOL hasSecondsAfterAnchorStart;
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) int secondsAfterAnchorEnd; // ivar: _secondsAfterAnchorEnd
@property (nonatomic) int secondsAfterAnchorStart; // ivar: _secondsAfterAnchorStart


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