// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMVISIONRESULT_H
#define AXMVISIONRESULT_H

@class NSNumber, NSArray, NSData, NSDictionary, NSString, NSSet, CIImage, AXMetricSession;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXMVisionFeature.h"
#import "AXMSemanticTextFactory.h"

@interface AXMVisionResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *appliedImageOrientation; // ivar: _appliedImageOrientation
@property (readonly, nonatomic) AXMVisionFeature *assetMetadataFeature;
@property (readonly, nonatomic) NSArray *blurFeatures;
@property (retain, nonatomic) NSData *brailleEdges; // ivar: _brailleEdges
@property (readonly, nonatomic) NSArray *brightnessFeatures;
@property (readonly, nonatomic) NSArray *captionFeatures;
@property (readonly, nonatomic) BOOL captionMayContainSensitiveContent;
@property (readonly, nonatomic) AXMVisionFeature *colorInfoFeature;
@property (readonly, nonatomic) NSDictionary *detectedFeatureDictionary;
@property (retain, nonatomic) NSString *detectedTextDescription; // ivar: _detectedTextDescription
@property (retain, nonatomic) NSString *detectedTextSummary; // ivar: _detectedTextSummary
@property (retain, nonatomic) NSString *detectedTextType; // ivar: _detectedTextType
@property (retain, nonatomic) NSArray *effectiveTextDetectionLocales; // ivar: _effectiveTextDetectionLocales
@property (retain, nonatomic) NSData *equivalenceToken; // ivar: _equivalenceToken
@property (retain, nonatomic) NSSet *evaluatedFeatureTypes; // ivar: _evaluatedFeatureTypes
@property (readonly, nonatomic) NSArray *faceFeatures;
@property (readonly, nonatomic) NSDictionary *featureGates;
@property (retain, nonatomic) NSArray *features; // ivar: _features
@property (readonly, nonatomic) NSArray *iconClassFeatures;
@property (retain, nonatomic) CIImage *image; // ivar: _image
@property (nonatomic) NSInteger imageRegistrationState; // ivar: _imageRegistrationState
@property (readonly, nonatomic) BOOL includesFeaturesForImageExploration;
@property (readonly, nonatomic) BOOL includesNSFWFeatures;
@property (readonly, nonatomic) NSString *localizedDetectedIconHint;
@property (readonly, nonatomic) NSString *localizedDetectedTextHint;
@property (readonly, nonatomic) NSString *localizedDetectedTextSummaryHint;
@property (readonly, nonatomic) NSString *localizedDetectedTextTypeHint;
@property (retain, nonatomic) AXMetricSession *metricSession; // ivar: _metricSession
@property (readonly, nonatomic) NSArray *modelClassificationFeatures;
@property (readonly, nonatomic) NSArray *objectClassificationFeatures;
@property (readonly, nonatomic) NSArray *ocrFeatures;
@property (readonly, nonatomic) NSArray *sceneClassificationFeatures;
@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory; // ivar: _semanticTextFactory
@property (readonly, nonatomic) NSArray *sensitiveContentForCaptionFeatures;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext; // ivar: _userContext


+(BOOL)supportsSecureCoding;
+(id)resultWithImage:(id)arg0 features:(id)arg1 orientation:(id)arg2 metricSession:(id)arg3 ;
+(id)resultWithImage:(id)arg0 features:(id)arg1 orientation:(id)arg2 metricSession:(id)arg3 userContext:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAXMVisionResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)_processFeatureChild:(id)arg0 ;
-(id)_processFeatureTree:(id)arg0 ;
-(id)captionTranslationLocale;
-(id)description;
-(id)detectedCaptionFeatureDescriptionWithOptions:(id)arg0 ;
-(id)detectedFeatureDescriptionWithOptions:(id)arg0 ;
-(id)detectedSceneClassificationFeatureDescriptionWithOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)parentOCRFeatureTypes;
-(id)sensitiveContentFeatures;
-(id)smallestChildOCRFeatureTypes;
-(id)sortedFeatures;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif