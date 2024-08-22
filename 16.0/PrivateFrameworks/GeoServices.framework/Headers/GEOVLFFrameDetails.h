// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVLFFRAMEDETAILS_H
#define GEOVLFFRAMEDETAILS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;



@interface GEOVLFFrameDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _calibrationMatrixs;
    ? _vioPoses;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _radialDistortion1;
    float _radialDistortion2;
    unsigned int _vioStatus;
    ? _flags;
}


@property (readonly, nonatomic) *float calibrationMatrixs;
@property (readonly, nonatomic) NSUInteger calibrationMatrixsCount;
@property (nonatomic) BOOL hasRadialDistortion1;
@property (nonatomic) BOOL hasRadialDistortion2;
@property (nonatomic) BOOL hasVioStatus;
@property (nonatomic) float radialDistortion1;
@property (nonatomic) float radialDistortion2;
@property (readonly, nonatomic) *float vioPoses;
@property (readonly, nonatomic) NSUInteger vioPosesCount;
@property (nonatomic) unsigned int vioStatus;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)calibrationMatrixAtIndex:(NSUInteger)arg0 ;
-(float)vioPoseAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addCalibrationMatrix:(float)arg0 ;
-(void)addVioPose:(float)arg0 ;
-(void)clearCalibrationMatrixs;
-(void)clearVioPoses;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif