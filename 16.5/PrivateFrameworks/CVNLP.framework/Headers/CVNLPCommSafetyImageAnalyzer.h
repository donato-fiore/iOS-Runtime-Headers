// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPCOMMSAFETYIMAGEANALYZER_H
#define CVNLPCOMMSAFETYIMAGEANALYZER_H

@class NSDictionary, NSURL, NSNumber;


#import "CVNLPModelBase.h"

@interface CVNLPCommSafetyImageAnalyzer : CVNLPModelBase {
    NSUInteger data_dim;
    *void encoderPlan;
    *void encoderCtx;
    ? encoderNet;
    ? leafProbabilities;
}


@property (readonly) int _espressoDeviceId; // ivar: __espressoDeviceId
@property (readonly) int _espressoEngine; // ivar: __espressoEngine
@property (readonly) int _espressoStorageType; // ivar: __espressoStorageType
@property (readonly) NSDictionary *acceptedOutputIndices; // ivar: _acceptedOutputIndices
@property (readonly) NSURL *modelUrl; // ivar: _modelUrl
@property (readonly) NSUInteger otgxMainIndex; // ivar: _otgxMainIndex
@property (readonly) NSNumber *otgxMainThreshold; // ivar: _otgxMainThreshold
@property (readonly) BOOL otgxRetrieveAllClasses; // ivar: _otgxRetrieveAllClasses


+(BOOL)_checkIfOnANEDevice;
+(id)_createNameDecodingDict;
+(id)_createNameEncodingDict;
+(id)_decodeName:(id)arg0 ;
+(id)_encodeName:(id)arg0 ;
+(id)_nameFromRevParts:(id)arg0 ;
+(id)_readOperatingThresholdsDataUsingModelURL:(id)arg0 error:(*id)arg1 ;
+(id)getOperatingPointDataForClassName:(id)arg0 modelURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)loadNetworkForURL:(id)arg0 espressoEngine:(int)arg1 storageType:(int)arg2 deviceId:(int)arg3 ;
-(id)_computeOutputForPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)_processNetworkOutput:(id)arg0 ;
-(id)classifyImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(id)classifyPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)computeOutputForImage:(struct vImage_Buffer *)arg0 error:(*id)arg1 ;
-(id)generateClassificationScoresForImage:(struct CGImage *)arg0 error:(*id)arg1 ;
-(id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithModelURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)_extractThresholdForOTGXMain:(id)arg0 ;
-(void)dealloc;


@end


#endif