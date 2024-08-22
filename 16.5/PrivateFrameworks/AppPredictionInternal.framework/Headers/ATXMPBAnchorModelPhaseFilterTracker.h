// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMPBANCHORMODELPHASEFILTERTRACKER_H
#define ATXMPBANCHORMODELPHASEFILTERTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBAnchorModelPhaseFilterTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *abGroup; // ivar: _abGroup
@property (retain, nonatomic) NSString *anchorType; // ivar: _anchorType
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (readonly, nonatomic) BOOL hasAnchorType;
@property (nonatomic) BOOL hasNumEndingCandidates;
@property (nonatomic) BOOL hasNumStartingCandidates;
@property (nonatomic) BOOL hasPhaseDescription;
@property (readonly, nonatomic) BOOL hasPhaseType;
@property (nonatomic) unsigned int numEndingCandidates; // ivar: _numEndingCandidates
@property (nonatomic) unsigned int numStartingCandidates; // ivar: _numStartingCandidates
@property (nonatomic) int phaseDescription; // ivar: _phaseDescription
@property (retain, nonatomic) NSString *phaseType; // ivar: _phaseType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)phaseDescriptionAsString:(int)arg0 ;
-(int)StringAsPhaseDescription:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif