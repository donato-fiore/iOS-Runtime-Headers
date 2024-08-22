// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOKEYFRAME_H
#define VCPVIDEOKEYFRAME_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCPVideoKeyFrame : NSObject {
    float _subjectAction;
    float _cameraMotion;
    float _interestingness;
    float _obstruction;
    float _colorfulness;
    BOOL _isLivePhoto;
    BOOL _subMb;
}


@property (nonatomic) float contentScore; // ivar: _contentScore
@property (retain, nonatomic) NSMutableArray *detectedFaces; // ivar: _detectedFaces
@property (nonatomic) float exposureScore; // ivar: _exposureScore
@property (nonatomic) float expressionChangeScore; // ivar: _expressionChangeScore
@property (retain, nonatomic) NSMutableArray *faceQualityScores; // ivar: _faceQualityScores
@property (nonatomic) float faceSharpness; // ivar: _faceSharpness
@property (retain, nonatomic) NSMutableDictionary *frameResults; // ivar: _frameResults
@property (nonatomic) float globalQualityScore; // ivar: _globalQualityScore
@property (nonatomic) float humanActionScore; // ivar: _humanActionScore
@property (nonatomic) float humanPoseScore; // ivar: _humanPoseScore
@property (nonatomic) BOOL isHeadingFrame; // ivar: _isHeadingFrame
@property (nonatomic) float overallFaceQualityScore; // ivar: _overallFaceQualityScore
@property (nonatomic) float penaltyScore; // ivar: _penaltyScore
@property (nonatomic) float qualityScoreForLivePhoto; // ivar: _qualityScoreForLivePhoto
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) float semanticScore; // ivar: _semanticScore
@property (nonatomic) float sharpness; // ivar: _sharpness
@property (nonatomic) NSUInteger statsFlags; // ivar: _statsFlags
@property (nonatomic) float textureScore; // ivar: _textureScore
@property (nonatomic) ? timestamp; // ivar: _timestamp
@property (nonatomic) float visualPleasingScore; // ivar: _visualPleasingScore


+(BOOL)isLivePhotoKeyFrameEnabled;
-(BOOL)hasGoodSubjectAction;
-(float)computeContentScore;
-(float)computeExpressionScore;
-(float)computeGlobalQuality;
-(float)computePenaltyScore;
-(float)computeScoreFromAction;
-(float)computeScoreFromColorfulness;
-(float)computeScoreFromExposure;
-(float)computeVisualPleasingScore;
-(id)initWithLivePhoto:(BOOL)arg0 ;
-(int)loadKeyFrameResult:(id)arg0 timestamp:(struct ? )arg1 ;
-(void)computeCurationScore;
-(void)computeCurationScoreComponents;
-(void)computeGlobalQualityForLivePhoto;
-(void)copyFrom:(id)arg0 ;
-(void)printStats;
-(void)resetStatsFlag;
-(void)setFaceStatsFlag:(BOOL)arg0 detectedFaces:(id)arg1 ;
-(void)setMotionStatsFlag:(BOOL)arg0 cameraMotion:(float)arg1 subjectAction:(float)arg2 interestingness:(float)arg3 obstruction:(float)arg4 colorfulness:(float)arg5 exposureScore:(float)arg6 humanActionStatsFlag:(BOOL)arg7 humanPoseScore:(float)arg8 humanActionScore:(float)arg9 subMb:(BOOL)arg10 ;
-(void)storeFrameResults;


@end


#endif