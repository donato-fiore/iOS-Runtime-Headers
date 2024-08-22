// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBURSTIMAGESTAT_H
#define CIBURSTIMAGESTAT_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface CIBurstImageStat : NSObject {
    float normalizedFocusScore;
    float normalizedSigma;
    float colorHistogram;
    int numEntries;
    unsigned short aeMatrix;
    int dissimilarity;
    *void projectionMemoryBlock;
    FastRegistration_Signatures projectionSignature;
    *SharpnessGridElement_t sharpnessGrid;
    int gridWidth;
    int gridHeight;
    GridROI_t gridROI;
    GridROI_t smoothedROI;
}


@property int AEAverage; // ivar: AEAverage
@property int AEDelta; // ivar: _AEDelta
@property BOOL AEStable; // ivar: AEStable
@property int AETarget; // ivar: AETarget
@property BOOL AFStable; // ivar: AFStable
@property float actionClusteringScore; // ivar: actionClusteringScore
@property float actionScore; // ivar: actionScore
@property float avgHorzDiffY; // ivar: avgHorzDiffY
@property float blurExtent; // ivar: blurExtent
@property BOOL doLimitedSharpnessAndBlur; // ivar: doLimitedSharpnessAndBlur
@property BOOL emotionallyRejected; // ivar: emotionallyRejected
@property BOOL exclude; // ivar: exclude
@property NSMutableArray *faceStatArray; // ivar: faceStatArray
@property CGRect facesRoiRect; // ivar: facesRoiRect
@property *__IOSurface fullsizeJpegData; // ivar: _fullsizeJpegData
@property int fullsizeJpegSize; // ivar: _fullsizeJpegSize
@property BOOL hasRegistrationData; // ivar: hasRegistrationData
@property NSString *imageId; // ivar: imageId
@property float imageScore; // ivar: imageScore
@property BOOL isGarbage; // ivar: isGarbage
@property float maxSkewness; // ivar: maxSkewness
@property int numHWFaces; // ivar: numHWFaces
@property int orientation; // ivar: orientation
@property float registrationErrorIntegral; // ivar: registrationErrorIntegral
@property float registrationErrorX; // ivar: registrationErrorX
@property float registrationErrorY; // ivar: registrationErrorY
@property float roiSize; // ivar: roiSize
@property int temporalOrder; // ivar: temporalOrder
@property CGFloat timeReceived; // ivar: timeReceived
@property CGFloat timestamp; // ivar: timestamp
@property float tx; // ivar: tx
@property float ty; // ivar: ty
@property int version; // ivar: _version


-(*float)colorHistogram;
-(*unsigned short)aeMatrix;
-(NSInteger)compareImageOrder:(id)arg0 ;
-(NSInteger)compareImageStats:(id)arg0 ;
-(float)computeAEMatrixDifference:(id)arg0 ;
-(float)computeFacialFocusScoreSum;
-(float)computeImageDistance:(id)arg0 ;
-(float)computeRuleOfThreeDistance;
-(float)computeScore:(float)arg0 ;
-(float)computeSmilePercentage;
-(float)computeSmoothedGridROI:(id)arg0 nextStat:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(int)canRegister;
-(int)setAEMatrix:(id)arg0 ;
-(struct GridROI_t )getSharpnessAndBlurLimits;
-(void)allocateMeanStdPingPongBuffers:(**float)arg0 ;
-(void)assignMeanStdBuffers:(*float)arg0 ;
-(void)collapseSharpnessGrid;
-(void)computeAEMatrix:(id)arg0 ;
-(void)computeBlurStatsOnGrid:(id)arg0 ;
-(void)computeImageColorHistogram:(id)arg0 ;
-(void)computeImageData:(id)arg0 faceIDCounts:(id)arg1 ;
-(void)computeImageProjections:(id)arg0 ;
-(void)computeImageSharpnessOnGrid:(id)arg0 ;
-(void)dealloc;
-(void)flagAsGarbage;
-(void)performRegistration:(id)arg0 deltaCol:(*float)arg1 deltaRow:(*float)arg2 ;
-(void)updateROI:(struct GridROI_t )arg0 ;
-(void)writeGridROI:(id)arg0 ;


@end


#endif