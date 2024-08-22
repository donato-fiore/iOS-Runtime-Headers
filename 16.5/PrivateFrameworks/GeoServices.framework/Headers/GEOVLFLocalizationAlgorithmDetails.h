// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVLFLOCALIZATIONALGORITHMDETAILS_H
#define GEOVLFLOCALIZATIONALGORITHMDETAILS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;



@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _fusedConfidences;
    ? _solverConfidences;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _numberOfInliers;
    unsigned int _numberOfKeypoints;
    unsigned int _numberOfMatches;
    unsigned int _tKptsMs;
    unsigned int _tMatchMs;
    unsigned int _tPoseMs;
    ? _flags;
}


@property (readonly, nonatomic) *CGFloat fusedConfidences;
@property (readonly, nonatomic) NSUInteger fusedConfidencesCount;
@property (nonatomic) BOOL hasNumberOfInliers;
@property (nonatomic) BOOL hasNumberOfKeypoints;
@property (nonatomic) BOOL hasNumberOfMatches;
@property (nonatomic) BOOL hasTKptsMs;
@property (nonatomic) BOOL hasTMatchMs;
@property (nonatomic) BOOL hasTPoseMs;
@property (nonatomic) unsigned int numberOfInliers;
@property (nonatomic) unsigned int numberOfKeypoints;
@property (nonatomic) unsigned int numberOfMatches;
@property (readonly, nonatomic) *CGFloat solverConfidences;
@property (readonly, nonatomic) NSUInteger solverConfidencesCount;
@property (nonatomic) unsigned int tKptsMs;
@property (nonatomic) unsigned int tMatchMs;
@property (nonatomic) unsigned int tPoseMs;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)fusedConfidenceAtIndex:(NSUInteger)arg0 ;
-(CGFloat)solverConfidenceAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addFusedConfidence:(CGFloat)arg0 ;
-(void)addSolverConfidence:(CGFloat)arg0 ;
-(void)clearFusedConfidences;
-(void)clearSolverConfidences;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif