// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCAMERAMETADATA_H
#define PFCAMERAMETADATA_H

@class NSData, NSString, NSArray, VNImageAestheticsObservation, VNSaliencyImageObservation, VNSceneObservation, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PFCameraMetadata : NSObject <NSSecureCoding>



@property (readonly) NSData *JSONDebugDescription;
@property (readonly, nonatomic) NSString *captureFolderPath; // ivar: _captureFolderPath
@property (readonly, nonatomic) NSArray *contactIDsInProximity; // ivar: _contactIDsInProximity
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
@property (readonly, nonatomic) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode
@property (readonly, nonatomic) NSDictionary *smartCamInfo; // ivar: _smartCamInfo
@property (readonly, nonatomic) NSUInteger stitchConfidence; // ivar: _stitchConfidence
@property (readonly, nonatomic) NSArray *torsoprints; // ivar: _torsoprints


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJunkImageClassificationObservations:(id)arg0 imageAestheticsObservation:(id)arg1 saliencyObservation:(id)arg2 scenePrintObservation:(id)arg3 detectedObjectsInfoHumanFaces:(id)arg4 detectedObjectsInfoHumanBodies:(id)arg5 detectedObjectsInfoCatBodies:(id)arg6 detectedObjectsInfoDogBodies:(id)arg7 detectedObjectsSalientObjects:(id)arg8 smartCamInfo:(id)arg9 stitchConfidence:(NSUInteger)arg10 horizonLinePresent:(BOOL)arg11 horizonLineAngleInDegrees:(float)arg12 captureFolderPath:(id)arg13 semanticDevelopmentGatingObservations:(id)arg14 faceObservations:(id)arg15 torsoprints:(id)arg16 foodAndDrinkObservations:(id)arg17 semanticEnhanceScene:(NSInteger)arg18 contactIDsInProximity:(id)arg19 sharedLibraryMode:(NSInteger)arg20 ;
-(id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif