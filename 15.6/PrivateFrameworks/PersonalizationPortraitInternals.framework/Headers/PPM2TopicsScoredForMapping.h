// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPM2TOPICSSCOREDFORMAPPING_H
#define PPM2TOPICSSCOREDFORMAPPING_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2TopicsScoredForMapping : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activeTreatments; // ivar: _activeTreatments
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL error; // ivar: _error
@property (nonatomic) BOOL exclusionSpec; // ivar: _exclusionSpec
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasExclusionSpec;
@property (nonatomic) BOOL hasLimitHit;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (nonatomic) BOOL hasResultSizeLog10;
@property (nonatomic) BOOL hasTimeLimited;
@property (nonatomic) BOOL hasTimeSpec;
@property (nonatomic) BOOL limitHit; // ivar: _limitHit
@property (retain, nonatomic) NSString *mappingId; // ivar: _mappingId
@property (nonatomic) unsigned int resultSizeLog10; // ivar: _resultSizeLog10
@property (nonatomic) BOOL timeLimited; // ivar: _timeLimited
@property (nonatomic) BOOL timeSpec; // ivar: _timeSpec


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