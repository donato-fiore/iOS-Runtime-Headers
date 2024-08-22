// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UTILSFORTESTS_H
#define UTILSFORTESTS_H


#import <Foundation/Foundation.h>


@interface UtilsForTests : NSObject



+(NSUInteger)preferredEspressoEngine;
+(id)createJasperCameraCalibration;
+(id)createSuperWideCameraCalibration;
+(id)createSyntheticCameraCalibrationNilDistortion;
+(id)createSyntheticCameraCalibrationWithDistortion:(id)arg0 ;
+(id)createSyntheticCameraCalibrationXThetaDistortion;
+(id)createWideCameraCalibrationWithPolynomials;
+(id)getJasperPointCloudFromPath:(id)arg0 ;
+(id)getNewTempFilePathWithExtension:(id)arg0 ;
+(id)getTempDirPath;
+(id)pointsArrayFromFilePath:(id)arg0 ;
+(struct BaselineTestStats_s )compareBuffer:(struct __CVBuffer *)arg0 offset:(struct CGSize )arg1 toRefBuffer:(struct __CVBuffer *)arg2 ignoreRefZeros:(BOOL)arg3 ;
+(struct BaselineTestStats_s )compareBuffer:(struct __CVBuffer *)arg0 offset:(struct CGSize )arg1 toRefBuffer:(struct __CVBuffer *)arg2 ignoreResultZeros:(BOOL)arg3 ignoreRefZeros:(BOOL)arg4 outlierPercentile:(float)arg5 ;
+(struct BaselineTestStats_s )compareBuffer:(struct __CVBuffer *)arg0 toRefBuffer:(struct __CVBuffer *)arg1 ignoreRefZeros:(BOOL)arg2 ;
+(struct BaselineTestStats_s )compareBuffer:(struct __CVBuffer *)arg0 toRefBuffer:(struct __CVBuffer *)arg1 ignoreRefZeros:(BOOL)arg2 outlierPercentile:(float)arg3 ;
+(struct BaselineTestStats_s )compareBuffer:(struct __CVBuffer *)arg0 toRefBuffer:(struct __CVBuffer *)arg1 ignoreResultZeros:(BOOL)arg2 ignoreRefZeros:(BOOL)arg3 ;
+(struct BaselineTestStats_s )compareResults:(struct __CVBuffer *)arg0 toBaseLineInPath:(id)arg1 ignoreRefZeros:(BOOL)arg2 ;
+(struct BaselineTestStats_s )compareResults:(struct __CVBuffer *)arg0 toBaseLineInPath:(id)arg1 ignoreRefZeros:(BOOL)arg2 outlierPercentile:(float)arg3 ;
+(struct vector<float, std::allocator<float>> )pointsVectorFromFilePath:(id)arg0 ;


@end


#endif