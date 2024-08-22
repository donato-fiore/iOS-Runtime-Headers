// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCOREMLMODEL_H
#define VNCOREMLMODEL_H

@class NSString, MLObjectBoundingBoxOutputDescription, MLModel;
@protocol VNSequencedRequestSupporting, NSObject><NSCopying, MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface VNCoreMLModel : NSObject <VNSequencedRequestSupporting>

 {
    NSString *_uuidStringForCacheIdentifier;
}


@property (readonly) MLObjectBoundingBoxOutputDescription *boundingBoxOutputDescription; // ivar: _boundingBoxOutputDescription
@property (readonly, copy, nonatomic) NSObject<NSObject><NSCopying> *cachingIdentifier;
@property (retain, nonatomic) NSObject<MLFeatureProvider> *featureProvider; // ivar: _featureProvider
@property (copy, nonatomic) NSString *inputImageFeatureName;
@property (readonly) unsigned int inputImageFormat; // ivar: _inputImageFormat
@property (readonly) NSUInteger inputImageHeight; // ivar: _inputImageHeight
@property (retain) NSString *inputImageKey; // ivar: _inputImageKey
@property (readonly) NSUInteger inputImageWidth; // ivar: _inputImageWidth
@property (retain) NSString *inputScenePrintKey; // ivar: _inputScenePrintKey
@property (readonly) NSInteger inputScenePrintMLMultiArrayDataType; // ivar: _inputScenePrintMLMultiArrayDataType
@property (retain) MLModel *model; // ivar: _model
@property int modelType; // ivar: _modelType
@property (retain) NSString *predictedFeatureKey; // ivar: _predictedFeatureKey
@property (readonly) NSString *predictedProbabilitiesKey; // ivar: _predictedProbabilitiesKey
@property (readonly) NSUInteger scenePrintRevision; // ivar: _scenePrintRevision


+(id)modelForMLModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupInputImageFromModelDescription:(id)arg0 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)initWithMLModel:(id)arg0 error:(*id)arg1 ;
-(id)predictWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictWithScenePrint:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)_updateModelWithFlexibleImageConstraintUsingWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;


@end


#endif