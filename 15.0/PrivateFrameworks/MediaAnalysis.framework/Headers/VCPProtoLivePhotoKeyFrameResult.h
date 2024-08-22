// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROTOLIVEPHOTOKEYFRAMERESULT_H
#define VCPPROTOLIVEPHOTOKEYFRAMERESULT_H

@class PBCodable, NSMutableArray;
@protocol VCPProtoResultLegacyConversionProtocol, NSCopying;



@interface VCPProtoLivePhotoKeyFrameResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) float contentScore; // ivar: _contentScore
@property (nonatomic) float exposureScore; // ivar: _exposureScore
@property (nonatomic) float expressionChangeScore; // ivar: _expressionChangeScore
@property (retain, nonatomic) NSMutableArray *faceResults; // ivar: _faceResults
@property (nonatomic) float globalQualityScore; // ivar: _globalQualityScore
@property (nonatomic) BOOL hasContentScore;
@property (nonatomic) BOOL hasGlobalQualityScore;
@property (nonatomic) float overallFaceQualityScore; // ivar: _overallFaceQualityScore
@property (nonatomic) float penaltyScore; // ivar: _penaltyScore
@property (nonatomic) float qualityScoreForLivePhoto; // ivar: _qualityScoreForLivePhoto
@property (nonatomic) float sharpness; // ivar: _sharpness
@property (nonatomic) float textureScore; // ivar: _textureScore
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) float visualPleasingScore; // ivar: _visualPleasingScore


+(id)resultFromLegacyDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exportToLegacyDictionary;
-(id)faceResultsAtIndex:(NSUInteger)arg0 ;
-(void)addFaceResults:(id)arg0 ;
-(void)clearFaceResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif