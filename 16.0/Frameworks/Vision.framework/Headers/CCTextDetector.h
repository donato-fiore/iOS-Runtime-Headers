// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCTEXTDETECTOR_H
#define CCTEXTDETECTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MetalInterface.h"
#import "CCCharBoxContext.h"

@interface CCTextDetector : NSObject {
    int _getFilter_callCount;
    MetalInterface *_metalInterface;
}


@property (retain) CCCharBoxContext *charBoxContext; // ivar: _charBoxContext
@property BOOL computeZCVectorHighProbability; // ivar: _computeZCVectorHighProbability
@property (copy) NSString *debugFilename; // ivar: _debugFilename
@property BOOL debugMatlab; // ivar: _debugMatlab
@property BOOL debugOut; // ivar: _debugOut
@property unsigned char ii; // ivar: _ii
@property unsigned int maxBoxWidth; // ivar: _maxBoxWidth
@property unsigned int maxHeight; // ivar: _maxHeight
@property int midRow; // ivar: _midRow
@property unsigned int minBoxWidth; // ivar: _minBoxWidth
@property unsigned int minHeight; // ivar: _minHeight
@property float mmHeightCard; // ivar: _mmHeightCard
@property float mmWidthCard; // ivar: _mmWidthCard
@property unsigned int pixelHeightCard; // ivar: _pixelHeightCard
@property unsigned int pixelWidthCard; // ivar: _pixelWidthCard
@property unsigned char profileNormal; // ivar: _profileNormal
@property unsigned int startMaxFind; // ivar: _startMaxFind
@property unsigned int startNormal; // ivar: _startNormal
@property unsigned int startSensitized; // ivar: _startSensitized
@property unsigned int stopMaxFind; // ivar: _stopMaxFind
@property unsigned int stopNormal; // ivar: _stopNormal
@property unsigned int stopSensitized; // ivar: _stopSensitized


-(float)createLumaImage:(struct vImage_Buffer )arg0 lumaImage:(struct vImage_Buffer )arg1 numCropRows:(unsigned short)arg2 rowStartLocation:(unsigned short)arg3 ;
-(float)createLumaImageAlternative:(struct vImage_Buffer )arg0 lumaImageAlternative:(struct vImage_Buffer )arg1 numCropRows:(unsigned short)arg2 rowStartLocation:(unsigned short)arg3 ;
-(id)initWithOptions:(id)arg0 ;
-(id)textBoxesForBuffer:(struct vImage_Buffer )arg0 error:(*id)arg1 ;
-(id)textBoxesForImage:(id)arg0 originatingRequestSpecifier:(id)arg1 error:(*id)arg2 ;
-(int)_allocateCRCharBoxContext:(NSUInteger)arg0 ;
-(int)_allocateSumDerivVectors:(struct __CCSumDerivVectors *)arg0 size:(int)arg1 ;
-(int)_allocateVImageWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 rowBytes:(NSUInteger)arg2 imageOut:(struct vImage_Buffer *)arg3 ;
-(int)_generateAdaptiveBinarization:(struct vImage_Buffer )arg0 adaptImage:(struct vImage_Buffer )arg1 useLowLightEnhancement:(unsigned char)arg2 ;
-(int)_generateAndApplyColorProfileForImage:(struct vImage_Buffer )arg0 votingImage:(struct vImage_Buffer )arg1 textOut:(struct vImage_Buffer )arg2 minMaxRGB:(struct __rgbMinMaxU8 *)arg3 lowHighRGB:(struct __rgbMinMaxFloat *)arg4 numCropRows:(unsigned short)arg5 rowStartLocation:(unsigned short)arg6 rowStopLocation:(unsigned short)arg7 sumTextOutFirstPass:(*unsigned int)arg8 useLowLightEnhancement:(unsigned char)arg9 ;
-(int)_generateBoxes:(id)arg0 pulseVector:(NSUInteger)arg1 uImage:(struct vImage_Buffer )arg2 countBigBoxOut:(*NSUInteger)arg3 bigBoxes:(struct __CCBigBox *)arg4 bigBoxesA:(struct __CCBigBox *)arg5 useLowLightEnhancement:(unsigned char)arg6 ;
-(int)_generateCRCharBoxInformation:(id)arg0 inputImage:(struct vImage_Buffer )arg1 singleVotingImageAddressRef:(char *)arg2 bigBoxes:(struct __CCBigBox *)arg3 bigBoxesAdapt:(struct __CCBigBox *)arg4 textOut:(struct vImage_Buffer )arg5 adaptOut:(struct vImage_Buffer )arg6 lowHighRGB:(struct __rgbMinMaxFloat *)arg7 countBigBox:(unsigned char)arg8 useLowLightEnhancement:(unsigned char)arg9 ;
-(int)_generateCRCharBoxInformation_TrackBox:(struct __CCBox *)arg0 finalCharBoxCoordCount:(*NSUInteger)arg1 ;
-(int)_generateCRCharBoxInformation_extendTextBoxes:(struct __CCBigBox *)arg0 countBigBox:(unsigned char)arg1 rowStartLocation2:(unsigned short)arg2 finalCharBoxCoordCount:(NSUInteger)arg3 finalCoordinatesForStubRevised:(struct __CCBox *)arg4 width:(NSUInteger)arg5 height:(unsigned short)arg6 bigBoxIndicator:(char *)arg7 ;
-(int)_generateCRCharBoxInformation_spaceBoxRemovalMagicThresh:(struct vImage_Buffer )arg0 magicMinHeight:(float)arg1 magicMaxHeight:(float)arg2 rowStartLocation2:(unsigned short)arg3 magicThresh:(*float)arg4 magicThreshPrev:(*float)arg5 useLowLightEnhancement:(unsigned char)arg6 ;
-(int)_generateCRCharBoxInformation_zcFinalVectorHighProbability:(struct vImage_Buffer )arg0 zcFinalRange:(unsigned short)arg1 ;
-(int)_generateCRCharBoxInformation_zcFinalVectorOriginate:(struct vImage_Buffer )arg0 textOut:(struct vImage_Buffer )arg1 adaptOut:(struct vImage_Buffer )arg2 bigBoxes:(struct __CCBigBox *)arg3 bigBoxesAdapt:(struct __CCBigBox *)arg4 ccCharBoxesAggr:(struct __CCCharBox *)arg5 ccCharBoxesFiltered:(struct __CCCharBox *)arg6 height:(unsigned short)arg7 rowStartLocation2:(unsigned short)arg8 rowStopLocation2:(unsigned short)arg9 singleVotingImageAddressRef:(char *)arg10 countBigBox:(unsigned char)arg11 filterWalkUpDownCount:(*unsigned short)arg12 useLowLightEnhancement:(unsigned char)arg13 ;
-(int)_generatePulseVectorOutputs:(struct vImage_Buffer )arg0 votingImage:(struct vImage_Buffer )arg1 rowLocationsRef:(*unsigned short)arg2 ;
-(int)_generateSmoothedImage:(struct vImage_Buffer )arg0 uImage:(struct vImage_Buffer )arg1 ;
-(int)_generateVotingImage:(struct vImage_Buffer )arg0 votingImage:(struct vImage_Buffer )arg1 useLowLightEnhancement:(char *)arg2 ;
-(int)_getFilterResultOut:(*float)arg0 defaultRows:(unsigned short)arg1 bufferHeight:(unsigned short)arg2 minHeight:(unsigned char)arg3 maxHeight:(unsigned char)arg4 startRange:(unsigned short)arg5 stopRange:(unsigned short)arg6 startMaxFind:(unsigned int)arg7 stopMaxFind:(unsigned int)arg8 bytesPerRow:(unsigned short)arg9 thresholdSet:(struct ThresholdSet_t )arg10 sampleImageAddressRef:(char *)arg11 sampleImageFloatAddressRef:(*float)arg12 pulseVectorFlag:(NSUInteger)arg13 ;
-(int)_getFilterResultOutBothSumDeriv:(unsigned char)arg0 floatVectorResult:(*float)arg1 bufferHeight:(unsigned short)arg2 minHeight:(unsigned char)arg3 maxHeight:(unsigned char)arg4 config:(struct __CCFilterSumDerivConfig *)arg5 bytesPerRow:(unsigned short)arg6 thresholdSet:(struct ThresholdSet_t )arg7 sampleImageAddressRef:(char *)arg8 ;
-(int)allocateColorProfileContext:(struct __CCColorProfileContext *)arg0 width:(unsigned short)arg1 height:(unsigned short)arg2 rowBytes:(NSUInteger)arg3 ;
-(int)computeDependentTopAndBottomComponents:(struct __CCBox *)arg0 finalCharBoxCoordCount:(*NSUInteger)arg1 ;
-(int)computeMainStub:(struct vImage_Buffer )arg0 numCropRows:(unsigned short)arg1 numCropColsOut:(*unsigned short)arg2 maxY:(float)arg3 start:(*unsigned short)arg4 ;
-(int)computePulseVectorSum:(char *)arg0 start:(unsigned short)arg1 stop:(unsigned short)arg2 imageHeight:(NSUInteger)arg3 imageWidth:(NSUInteger)arg4 bottomHeight:(unsigned short)arg5 topHeight:(unsigned short)arg6 ;
-(int)extractBoxesForStub:(struct __CCBigBox *)arg0 bigBoxesAdapt:(struct __CCBigBox *)arg1 countBigBox:(unsigned char)arg2 rowStartLocation2:(unsigned short)arg3 rowStopLocation2:(unsigned short)arg4 heightConstraint:(unsigned char)arg5 imageWidth:(unsigned short)arg6 height:(unsigned short)arg7 ccCharBoxesAggr:(struct __CCCharBox *)arg8 ccCharBoxesFiltered:(struct __CCCharBox *)arg9 useLowLightEnhancement:(unsigned char)arg10 ;
-(int)generateHistogramBounds:(struct __rgbaColor *)arg0 rgbVector2Ref:(struct __rgbaColor *)arg1 numPixels1:(unsigned int)arg2 numPixels2:(unsigned int)arg3 minMaxRGB:(struct __rgbMinMaxU8 *)arg4 lowHighRGB:(struct __rgbMinMaxFloat *)arg5 ;
-(int)generatePulses:(unsigned short)arg0 minHeight:(unsigned char)arg1 maxHeight:(unsigned char)arg2 thresholdSet:(struct ThresholdSet_t )arg3 prodBoostNormalized:(*float)arg4 pulseVectorFlag:(NSUInteger)arg5 ;
-(struct __CCRange )tightenBox:(struct vImage_Buffer )arg0 startTop:(unsigned short)arg1 startBottom:(unsigned short)arg2 startPosition:(unsigned short)arg3 stopPosition:(unsigned short)arg4 imageHeight:(NSUInteger)arg5 halfWalk:(unsigned short)arg6 ;
-(unsigned int)_extractCharBoxCuts:(struct __CCBigBox *)arg0 heightConstraint:(unsigned char)arg1 medianHeightTopVector:(*unsigned short)arg2 medianHeightBottomVector:(*unsigned short)arg3 isAdaptive:(BOOL)arg4 ;
-(unsigned int)_generateBinarizationForImage:(struct vImage_Buffer )arg0 textOut:(struct vImage_Buffer )arg1 firstOrSecondPassIndicator:(unsigned char)arg2 minMaxRGB:(struct __rgbMinMaxFloat *)arg3 ;
-(unsigned short)charBoxesFromTextBoxes:(struct __CCCharBox *)arg0 bigBoxes:(struct __CCBigBox *)arg1 ccYTopLocationsForSort:(*unsigned short)arg2 ccYBottomLocationsForSort:(*unsigned short)arg3 ;
-(unsigned short)computeNumCropCols:(*float)arg0 width:(NSUInteger)arg1 start:(*unsigned short)arg2 ;
-(void)_computeColumnSumsOverRange:(struct __CCRange *)arg0 sampleImageAddress:(char *)arg1 rowSumOut:(*int)arg2 rowDerivOut:(*int)arg3 ;
-(void)_computeProdBoostNormalizedResult:(struct __CCSumDerivVectors *)arg0 size:(int)arg1 binOverride:(unsigned char)arg2 ;
-(void)_freeCRCharBoxContext;
-(void)_freeSumDerivVectors:(struct __CCSumDerivVectors *)arg0 ;
-(void)_freeVImage:(struct vImage_Buffer *)arg0 ;
-(void)_generateCC:(id)arg0 ccBigBoxes:(struct __CCBigBox *)arg1 textOut:(struct vImage_Buffer )arg2 countBigBox:(unsigned char)arg3 bufferHeight:(unsigned short)arg4 ;
-(void)_generateCRCharBoxInformation_spaceBoxRemovalHistogram:(struct vImage_Buffer )arg0 zcStartLeft:(unsigned short)arg1 zcStopRight:(unsigned short)arg2 rowStartLocation2:(unsigned short)arg3 lowHighRGB:(struct __rgbMinMaxFloat *)arg4 histCompliancePercent:(*float)arg5 varSpaceBox:(*float)arg6 ;
-(void)_generateCRCharBoxInformation_spaceBoxRemovalTightenBox:(struct vImage_Buffer )arg0 singleVotingImageAddressRef:(char *)arg1 adaptOut:(struct vImage_Buffer )arg2 textOut:(struct vImage_Buffer )arg3 zcStartLeft:(unsigned short)arg4 zcStopRight:(unsigned short)arg5 finalCoordinatesForStub:(struct __CCBox *)arg6 finalCoordinatesForStubRevised:(struct __CCBox *)arg7 finalCharBoxCoordCount:(*NSUInteger)arg8 useLowLightEnhancement:(unsigned char)arg9 ;
-(void)_generateCRCharBoxInformation_spaceBoxRemovalTruthFilter:(*float)arg0 magicThresh:(*float)arg1 zcStartLeft:(unsigned short)arg2 zcStopRight:(unsigned short)arg3 isSpaceBoxAccepted:(*BOOL)arg4 histCompliancePercent:(*float)arg5 useLowLightEnhancement:(unsigned char)arg6 ;
-(void)_generateCRCharBoxInformation_zcFinalVectorFillIn:(struct vImage_Buffer )arg0 ;
-(void)_generateFilteredPulseVector:(NSUInteger)arg0 target:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(void)_generatePulseAggregate:(NSUInteger)arg0 pulseVectorMain:(NSUInteger)arg1 pulseVectorResult:(NSUInteger)arg2 metricSelection:(unsigned char)arg3 bufferHeight:(unsigned short)arg4 bufferWidth:(unsigned short)arg5 ;
-(void)_generatePulseAggregateSmallStubs:(NSUInteger)arg0 pulseVectorResult:(NSUInteger)arg1 bufferHeight:(unsigned short)arg2 bufferWidth:(unsigned short)arg3 ;
-(void)_generateZeroCrossingVector:(NSUInteger)arg0 zcVectorFlag:(NSUInteger)arg1 width:(NSUInteger)arg2 ;
-(void)calculateSumProd:(struct vImage_Buffer )arg0 prodROIRef:(*float)arg1 prodROIRotateRef:(*float)arg2 rowStartLocation2:(unsigned short)arg3 height:(unsigned short)arg4 ;
-(void)calculateSumProdAlternative:(struct vImage_Buffer )arg0 prodROIRef:(*float)arg1 prodROIRotateRef:(*float)arg2 rowStartLocation2:(unsigned short)arg3 height:(unsigned short)arg4 ;
-(void)computeIndependentTopAndBottomComponents:(struct __CCBox *)arg0 finalCharBoxCoordCount:(*NSUInteger)arg1 ;
-(void)dealloc;
-(void)determineColorProfileType:(struct __CCColorProfileContext *)arg0 ;
-(void)examinePulseWindow:(unsigned short)arg0 prodBoostNormalized:(*float)arg1 pwContext:(struct __CCPulseWindowContext *)arg2 minHeight:(unsigned char)arg3 maxHeight:(unsigned char)arg4 thresholdSet:(struct ThresholdSet_t )arg5 ;
-(void)extractCharBoxHeightInfo:(struct __CCCharBox *)arg0 ccCharBoxesFiltered:(struct __CCCharBox *)arg1 ccYTopLocationsForSort:(*unsigned short)arg2 ccYBottomLocationsForSort:(*unsigned short)arg3 aggregateGreenBoxesForStubCount:(unsigned short)arg4 imageWidth:(unsigned short)arg5 ;
-(void)fillInOneVector:(struct vImage_Buffer )arg0 checkFlag:(NSUInteger)arg1 checkHeight:(BOOL)arg2 ;
-(void)freeColorProfileContext:(struct __CCColorProfileContext *)arg0 ;
-(void)generateDominantPulse:(NSUInteger)arg0 rowLocationsRef:(*unsigned short)arg1 debugOut:(unsigned char)arg2 bufferHeight:(unsigned short)arg3 bufferWidth:(unsigned short)arg4 ;
-(void)getLumaHistogram:(struct vImage_Buffer )arg0 startCC:(unsigned short)arg1 colorProfileContext:(struct __CCColorProfileContext *)arg2 ;
-(void)getVotingHistogram:(struct vImage_Buffer )arg0 colorProfileContext:(struct __CCColorProfileContext *)arg1 startCC:(unsigned short)arg2 rowStartLocation:(unsigned short)arg3 ;
-(void)groupEndpoints:(struct __CCBox *)arg0 finalCharBoxCoordCount:(*NSUInteger)arg1 ;
-(void)initializeForImage:(struct vImage_Buffer )arg0 ;


@end


#endif