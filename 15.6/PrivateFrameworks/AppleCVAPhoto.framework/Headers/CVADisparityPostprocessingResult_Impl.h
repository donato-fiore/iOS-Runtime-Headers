// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVADISPARITYPOSTPROCESSINGRESULT_IMPL_H
#define CVADISPARITYPOSTPROCESSINGRESULT_IMPL_H

@class NSString, NSArray;
@protocol CVADisparityPostprocessingResult;

#import <Foundation/Foundation.h>


@interface CVADisparityPostprocessingResult_Impl : NSObject <CVADisparityPostprocessingResult>



@property (readonly) float backgroundDisparityRatio; // ivar: _backgroundDisparityRatio
@property (readonly) float backgroundDisparitySum; // ivar: _backgroundDisparitySum
@property (readonly) float backgroundDisparitySumVariance; // ivar: _backgroundDisparitySumVariance
@property (readonly) float backgroundSeparationLikelihood; // ivar: _backgroundSeparationLikelihood
@property (readonly) *__CVBuffer canonicalDisparityPixelBuffer; // ivar: _canonicalDisparityPixelBuffer
@property (readonly) float closeCanonicalDisparityAverage; // ivar: _closeCanonicalDisparityAverage
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float deltaCanonicalDisparity; // ivar: _deltaCanonicalDisparity
@property (readonly, copy) NSString *description;
@property (readonly) float erodedForegroundRatio; // ivar: _erodedForegroundRatio
@property (readonly) NSArray *faceCanonicalDisparityAverage; // ivar: _faceCanonicalDisparityAverage
@property (readonly) NSArray *faceInvalidDisparityRatio; // ivar: _faceInvalidDisparityRatio
@property (readonly) float focusDisparity; // ivar: _focusDisparity
@property (readonly) float foregroundRatio; // ivar: _foregroundRatio
@property (readonly) NSUInteger hash;
@property (readonly) float invalidDisparityRatio; // ivar: _invalidDisparityRatio
@property (readonly) float invalidDisparityRatioVariance; // ivar: _invalidDisparityRatioVariance
@property (readonly) *__CVBuffer postprocessedDisparityPixelBuffer; // ivar: _postprocessedDisparityPixelBuffer
@property (readonly) Class superclass;


-(id)initWithPostprocessedDisparityBuffer:(struct __CVBuffer *)arg0 canonicalDisparityPixelBuffer:(struct __CVBuffer *)arg1 focusCanonicalDisparity:(float)arg2 backgroundDisparitySum:(float)arg3 backgroundDisparitySumVariance:(float)arg4 backgroundDisparityRatio:(float)arg5 invalidDisparityRatio:(float)arg6 invalidDisparityRatioVariance:(float)arg7 deltaCanonicalDisparity:(float)arg8 backgroundSeparationLikelihood:(float)arg9 closeCanonicalDisparityAverage:(float)arg10 faceCanonicalDisparityAverage:(id)arg11 faceInvalidDisparityRatio:(id)arg12 foregroundRatio:(float)arg13 erodedForegroundRatio:(float)arg14 ;
-(void)dealloc;


@end


#endif