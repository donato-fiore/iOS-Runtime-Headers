// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCAMERAMETADATA_H
#define PFCAMERAMETADATA_H

@class NSData, NSString, VNSceneObservation, NSArray, VNImageAestheticsObservation, VNSaliencyImageObservation, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFCameraMetadata : NSObject <NSSecureCoding>



@property (readonly) NSData *JSONDebugDescription;
@property (readonly, nonatomic) NSString *captureFolderPath; // ivar: _captureFolderPath
@property (readonly, nonatomic) VNSceneObservation *compressedScenePrintObservation; // ivar: _compressedScenePrintObservation
@property (readonly, nonatomic) NSArray *detectedCatBodies; // ivar: _detectedCatBodies
@property (readonly, nonatomic) NSArray *detectedDogBodies; // ivar: _detectedDogBodies
@property (readonly, nonatomic) NSArray *detectedHumanBodies; // ivar: _detectedHumanBodies
@property (readonly, nonatomic) NSArray *detectedHumanFaces; // ivar: _detectedHumanFaces
@property (readonly, nonatomic) NSArray *detectedSalientObjects; // ivar: _detectedSalientObjects
@property (readonly, nonatomic) NSArray *faceObservations; // ivar: _faceObservations
@property (readonly, nonatomic) NSArray *foodAndDrinkObservations; // ivar: _foodAndDrinkObservations
@property (readonly, nonatomic) float horizonLineAngleInDegrees; // ivar: _horizonLineAngleInDegrees
@property (readonly, nonatomic) BOOL horizonLinePresent; // ivar: _horizonLinePresent
@property (readonly, nonatomic) VNImageAestheticsObservation *imageAestheticsObservation; // ivar: _imageAestheticsObservation
@property (readonly, nonatomic) NSArray *junkImageClassificationObservations; // ivar: _junkImageClassificationObservations
@property (readonly, nonatomic) VNSaliencyImageObservation *saliencyObservation; // ivar: _saliencyObservation
@property (readonly, nonatomic) VNSceneObservation *scenePrintObservation; // ivar: _scenePrintObservation
@property (readonly, nonatomic) NSArray *semanticDevelopmentGatingObservations; // ivar: _semanticDevelopmentGatingObservations
@property (nonatomic) NSInteger semanticEnhanceScene; // ivar: _semanticEnhanceScene
@property (nonatomic) CGFloat semanticEnhanceSceneConfidence; // ivar: _semanticEnhanceSceneConfidence
@property (readonly, nonatomic) NSDictionary *smartCamInfo; // ivar: _smartCamInfo
@property (readonly, nonatomic) NSUInteger stitchConfidence; // ivar: _stitchConfidence


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJunkImageClassificationObservations:(id)arg0 imageAestheticsObservation:(id)arg1 saliencyObservation:(id)arg2 scenePrintObservation:(id)arg3 compressedScenePrintObservation:(id)arg4 detectedObjectsInfoHumanFaces:(id)arg5 detectedObjectsInfoHumanBodies:(id)arg6 detectedObjectsInfoCatBodies:(id)arg7 detectedObjectsInfoDogBodies:(id)arg8 detectedObjectsSalientObjects:(id)arg9 smartCamInfo:(id)arg10 stitchConfidence:(NSUInteger)arg11 horizonLinePresent:(BOOL)arg12 horizonLineAngleInDegrees:(float)arg13 captureFolderPath:(id)arg14 semanticDevelopmentGatingObservations:(id)arg15 faceObservations:(id)arg16 foodAndDrinkObservations:(id)arg17 semanticEnhanceScene:(NSInteger)arg18 ;
-(id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif