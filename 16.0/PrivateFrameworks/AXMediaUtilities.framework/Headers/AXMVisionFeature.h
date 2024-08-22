// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMVISIONFEATURE_H
#define AXMVISIONFEATURE_H

@class NSArray, NSString, NSMutableDictionary, NSMutableSet, NSDictionary, NSSet, CMDeviceMotion;
@protocol AXMJSONSerializable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMVisionFeatureColorInfo.h"
#import "AXMVisionFeatureAssetMetadata.h"
#import "AXMVisionFeatureFaceDetectionResult.h"
#import "AXMTranslatedText.h"
#import "AXMVisionFeatureAestheticsResult.h"

@interface AXMVisionFeature : NSObject <AXMJSONSerializable, NSSecureCoding>

 {
    NSUInteger _featureType;
    NSArray *_subfeatures;
    NSString *_barcodeType;
    NSInteger _ocrFeatureType;
    NSArray *_effectiveTextDetectionLocales;
    CGFloat _creationDate;
    CGRect _frame;
    CGRect _normalizedFrame;
    NSString *_value;
    BOOL _isValueSpeakable;
    AXMVisionFeatureColorInfo *_colorInfo;
    AXMVisionFeatureAssetMetadata *_assetMetadata;
    CGFloat _blur;
    CGFloat _brightness;
    CGFloat _confidence;
    BOOL _isLowConfidence;
    CGAffineTransform _horizonTransform;
    float _horizonAngle;
    AXMVisionFeatureFaceDetectionResult *_faceDetectionResult;
    NSUInteger _faceId;
    ? _facePose;
    CGSize _canvasSize;
    NSString *_modelID;
    NSString *_classificationLabel;
    NSString *_classificationLocalizedValue;
    NSString *_caption;
    AXMTranslatedText *_translatedCaption;
    NSMutableDictionary *_featureGates;
    NSMutableSet *_detectorSceneClassIds;
    NSString *_sceneClassId;
}


@property (nonatomic) CGPoint activationPoint; // ivar: _activationPoint
@property (readonly, nonatomic) AXMVisionFeatureAestheticsResult *aestheticsResult; // ivar: _aestheticsResult
@property (readonly, nonatomic) AXMVisionFeatureAssetMetadata *assetMetadata;
@property (readonly, nonatomic) NSString *barcodeType;
@property (readonly, nonatomic) CGFloat blur;
@property (readonly, nonatomic) CGFloat brightness;
@property (readonly, nonatomic) NSInteger cameraType; // ivar: _cameraType
@property (readonly, nonatomic) CGSize canvasSize;
@property (readonly, nonatomic) NSString *caption;
@property (nonatomic) BOOL captionMayContainSensitiveContent; // ivar: _captionMayContainSensitiveContent
@property (readonly, nonatomic) NSString *classificationLabel;
@property (readonly, nonatomic) NSString *classificationLocalizedValue;
@property (readonly, nonatomic) AXMVisionFeatureColorInfo *colorInfo;
@property (readonly, nonatomic) CGFloat confidence;
@property (readonly, nonatomic) CGFloat creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *debugRectangles; // ivar: _debugRectangles
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *detectorSceneClassIds;
@property (readonly, nonatomic) CMDeviceMotion *deviceMotion; // ivar: _deviceMotion
@property (readonly, nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) AXMVisionFeatureFaceDetectionResult *faceDetectionResult;
@property (readonly, nonatomic) NSUInteger faceId;
@property (readonly, nonatomic) NSDictionary *featureGates;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float horizonAngle;
@property (readonly, nonatomic) CGAffineTransform horizonTransform;
@property (readonly, nonatomic) BOOL isAssetMetadata;
@property (readonly, nonatomic) BOOL isBarcode;
@property (readonly, nonatomic) BOOL isBlur;
@property (readonly, nonatomic) BOOL isBrightness;
@property (readonly, nonatomic) BOOL isCameraMetadata;
@property (readonly, nonatomic) BOOL isCaption;
@property (readonly, nonatomic) BOOL isColor;
@property (readonly, nonatomic) BOOL isEnvelope;
@property (readonly, nonatomic) BOOL isFace;
@property (readonly, nonatomic) BOOL isHorizon;
@property (readonly, nonatomic) BOOL isIconClass;
@property (readonly, nonatomic) BOOL isImageAesthetics;
@property (readonly, nonatomic) BOOL isLowConfidence;
@property (readonly, nonatomic) BOOL isMediaLegibility;
@property (readonly, nonatomic) BOOL isModelClassification;
@property (readonly, nonatomic) BOOL isMotion;
@property (readonly, nonatomic) BOOL isNSFWClassification;
@property (readonly, nonatomic) BOOL isNutritionLabel;
@property (readonly, nonatomic) BOOL isOCR;
@property (readonly, nonatomic) BOOL isObjectClassification;
@property (readonly, nonatomic) BOOL isPerson;
@property (readonly, nonatomic) BOOL isProminentObject;
@property (readonly, nonatomic) BOOL isRealtimeFace;
@property (readonly, nonatomic) BOOL isReceipt;
@property (readonly, nonatomic) BOOL isRectangle;
@property (readonly, nonatomic) BOOL isSceneClassification;
@property (readonly, nonatomic) BOOL isSignificantEventClassification;
@property (readonly, nonatomic) BOOL isTable;
@property (readonly, nonatomic) BOOL isTableCell;
@property (readonly, nonatomic) BOOL isTableColumn;
@property (readonly, nonatomic) BOOL isTableRow;
@property (readonly, nonatomic) BOOL isTextCharacter;
@property (readonly, nonatomic) BOOL isTextDiacritic;
@property (readonly, nonatomic) BOOL isTextDocument;
@property (readonly, nonatomic) BOOL isTextLine;
@property (readonly, nonatomic) BOOL isTextRegion;
@property (readonly, nonatomic) BOOL isTextSequence;
@property (readonly, nonatomic) BOOL isValueSpeakable;
@property (readonly, nonatomic) CGRect normalizedFrame;
@property (readonly, nonatomic) NSInteger ocrFeatureType;
@property (retain, nonatomic) NSString *overrideLabel; // ivar: _overrideLabel
@property (readonly, nonatomic) NSArray *recognizedTextFeatures; // ivar: _recognizedTextFeatures
@property (readonly, nonatomic) NSString *sceneClassId;
@property (readonly, nonatomic) NSArray *subfeatures;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AXMTranslatedText *translatedCaption;
@property (nonatomic) NSInteger uiClass; // ivar: _uiClass
@property (readonly, nonatomic) CGRect unpaddedDetectedFaceRect; // ivar: _unpaddedDetectedFaceRect
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext; // ivar: _userContext
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
+(NSInteger)locationForNormalizedFrame:(struct CGRect )arg0 previousLocation:(NSInteger)arg1 usingThirds:(BOOL)arg2 ;
+(NSInteger)uiClassForName:(id)arg0 ;
+(id)envelopeRegion:(id)arg0 boundingBox:(struct CGRect )arg1 confidence:(CGFloat)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)envelopeWithText:(id)arg0 isSpeakable:(BOOL)arg1 boundingBox:(struct CGRect )arg2 regions:(id)arg3 canvasSize:(struct CGSize )arg4 ;
+(id)featureWithAssetMetadata:(id)arg0 ;
+(id)featureWithCameraType:(NSInteger)arg0 ;
+(id)featureWithCaptionResult:(id)arg0 confidence:(CGFloat)arg1 translatedCaption:(id)arg2 modelIdentifier:(id)arg3 canvasSize:(struct CGSize )arg4 isLowConfidence:(BOOL)arg5 ;
+(id)featureWithColorInfo:(id)arg0 canvasSize:(struct CGSize )arg1 ;
+(id)featureWithDeviceMotion:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)featureWithFaceDetectionResult:(id)arg0 canvasSize:(struct CGSize )arg1 ;
+(id)featureWithIconClass:(id)arg0 confidence:(CGFloat)arg1 ;
+(id)featureWithImageAestheticsObservation:(id)arg0 ;
+(id)featureWithMediaLegibility:(id)arg0 ;
+(id)featureWithMetadata:(id)arg0 interfaceOrientation:(NSInteger)arg1 isMirrored:(BOOL)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)featureWithTaxonomyNode:(id)arg0 canvasSize:(struct CGSize )arg1 ;
+(id)featureWithVisionRequest:(id)arg0 axElementRect:(struct CGRect )arg1 confidence:(CGFloat)arg2 uiClass:(NSInteger)arg3 label:(id)arg4 canvasSize:(struct CGSize )arg5 ;
+(id)featureWithVisionRequest:(id)arg0 blurValue:(float)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)featureWithVisionRequest:(id)arg0 brightnessValue:(float)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)featureWithVisionRequest:(id)arg0 horizonResult:(id)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)featureWithVisionRequest:(id)arg0 modelClassificationResult:(id)arg1 modelIdentifier:(id)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)featureWithVisionRequest:(id)arg0 rectangleResult:(id)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)filterFeatureList:(id)arg0 basedOnSceneClassIdsForFeature:(id)arg1 ;
+(id)flattenedFeatureList:(id)arg0 ;
+(id)groupedFeatureWithElementRect:(struct CGRect )arg0 uiClass:(NSInteger)arg1 confidence:(CGFloat)arg2 label:(id)arg3 canvasSize:(struct CGSize )arg4 subElements:(id)arg5 ;
+(id)localizedStringForLocation:(NSInteger)arg0 isSubjectImplicit:(BOOL)arg1 ;
+(id)nameForFeatureType:(NSUInteger)arg0 ;
+(id)nameForLocation:(NSInteger)arg0 ;
+(id)nameForOCRType:(NSInteger)arg0 ;
+(id)nameForUIClass:(NSInteger)arg0 ;
+(id)nsfwClassificationWithCategory:(id)arg0 confidence:(float)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)nutritionLabelWithText:(id)arg0 isSpeakable:(BOOL)arg1 boundingBox:(struct CGRect )arg2 rows:(id)arg3 canvasSize:(struct CGSize )arg4 ;
+(id)objectClassificationWithLabel:(id)arg0 localizedValue:(id)arg1 boundingBox:(struct CGRect )arg2 confidence:(float)arg3 canvasSize:(struct CGSize )arg4 sceneClassId:(id)arg5 ;
+(id)personWithBoundingBox:(struct CGRect )arg0 confidence:(CGFloat)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)prominentObjectWithBoundingBox:(struct CGRect )arg0 canvasSize:(struct CGSize )arg1 confidence:(CGFloat)arg2 ;
+(id)receiptWithText:(id)arg0 isSpeakable:(BOOL)arg1 boundingBox:(struct CGRect )arg2 regions:(id)arg3 canvasSize:(struct CGSize )arg4 ;
+(id)sceneClassificationWithLabel:(id)arg0 localizedValue:(id)arg1 confidence:(float)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)significantEventClassificationWithCategory:(id)arg0 confidence:(float)arg1 canvasSize:(struct CGSize )arg2 ;
+(id)tableCellWithText:(id)arg0 boundingBox:(struct CGRect )arg1 confidence:(CGFloat)arg2 recognizedTextFeatures:(id)arg3 canvasSize:(struct CGSize )arg4 isHeader:(BOOL)arg5 ;
+(id)tableColumnWithText:(id)arg0 boundingBox:(struct CGRect )arg1 cells:(id)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)tableRowWithText:(id)arg0 boundingBox:(struct CGRect )arg1 cells:(id)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)tableWithText:(id)arg0 isSpeakable:(BOOL)arg1 boundingBox:(struct CGRect )arg2 rows:(id)arg3 columns:(id)arg4 canvasSize:(struct CGSize )arg5 isIncomplete:(BOOL)arg6 ;
+(id)textDocumentWithText:(id)arg0 isSpeakable:(BOOL)arg1 boundingBox:(struct CGRect )arg2 regions:(id)arg3 canvasSize:(struct CGSize )arg4 ;
+(id)textLineWithText:(id)arg0 boundingBox:(struct CGRect )arg1 recognizedTextFeatures:(id)arg2 canvasSize:(struct CGSize )arg3 ;
+(id)textRegionWithText:(id)arg0 isSpeakable:(BOOL)arg1 boundingBox:(struct CGRect )arg2 lines:(id)arg3 canvasSize:(struct CGSize )arg4 ;
+(id)textSequence:(id)arg0 boundingBox:(struct CGRect )arg1 recognizedTextFeatures:(id)arg2 confidence:(CGFloat)arg3 canvasSize:(struct CGSize )arg4 ;
+(id)unitTestingFaceFeature;
+(id)unitTestingFaceFeatureWithSize:(struct CGSize )arg0 faceFrame:(struct CGRect )arg1 ;
+(id)unitTestingFeature;
+(id)unitTestingFeatureWithType:(NSUInteger)arg0 canvasSize:(struct CGSize )arg1 frame:(struct CGRect )arg2 value:(id)arg3 barcodeType:(id)arg4 ocrFeatureType:(NSInteger)arg5 subFeatures:(id)arg6 ;
+(id)unitTestingFeatureWithType:(NSUInteger)arg0 canvasSize:(struct CGSize )arg1 frame:(struct CGRect )arg2 value:(id)arg3 valueIsSpeakable:(BOOL)arg4 barcodeType:(id)arg5 ocrFeatureType:(NSInteger)arg6 subFeatures:(id)arg7 ;
+(id)unitTestingHorizonFeature;
+(id)unitTestingProminentObjectFeature;
+(id)unitTestingTeatureWithType:(NSUInteger)arg0 axElementRect:(struct CGRect )arg1 confidence:(CGFloat)arg2 uiClass:(NSInteger)arg3 label:(id)arg4 canvasSize:(struct CGSize )arg5 ;
+(struct CGRect )_aspectFaceRectFromSquareFaceRect:(struct CGRect )arg0 sizeInPixels:(struct CGSize )arg1 ;
+(void)_append:(id)arg0 toList:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAXMVisionFeature:(id)arg0 ;
-(NSInteger)locationUsingThirds:(BOOL)arg0 withFlippedYAxis:(BOOL)arg1 ;
-(id)_init;
-(id)_nameForOCRFeatureType:(NSInteger)arg0 ;
-(id)effectiveTextDetectionLocales;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )facePose;
-(struct CGRect )boundingBoxForRange:(struct _NSRange )arg0 ;
-(void)_serializeWithCoder:(id)arg0 orDictionary:(id)arg1 ;
-(void)addFeatureGate:(id)arg0 userInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif