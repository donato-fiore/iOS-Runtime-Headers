// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMVISIONFEATUREFACEATTRIBUTES_H
#define AXMVISIONFEATUREFACEATTRIBUTES_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionFeatureFaceAttributes : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger axAgeCategory; // ivar: _axAgeCategory
@property (nonatomic) CGFloat axAgeCategoryConfidence; // ivar: _axAgeCategoryConfidence
@property (readonly, nonatomic) NSInteger axBaldCategory; // ivar: _axBaldCategory
@property (readonly, nonatomic) NSInteger axEthnicityCategory; // ivar: _axEthnicityCategory
@property (nonatomic) CGFloat axEthnicityCategoryConfidence; // ivar: _axEthnicityCategoryConfidence
@property (readonly, nonatomic) NSInteger axExpressionCategory; // ivar: _axExpressionCategory
@property (nonatomic) CGFloat axExpressionCategoryConfidence; // ivar: _axExpressionCategoryConfidence
@property (readonly, nonatomic) NSInteger axEyesCategory; // ivar: _axEyesCategory
@property (nonatomic) CGFloat axEyesCategoryConfidence; // ivar: _axEyesCategoryConfidence
@property (readonly, nonatomic) NSInteger axFaceHairCategory; // ivar: _axFaceHairCategory
@property (readonly, nonatomic) NSInteger axFaceHairV2Category; // ivar: _axFaceHairV2Category
@property (nonatomic) CGFloat axFaceHairV2CategoryConfidence; // ivar: _axFaceHairV2CategoryConfidence
@property (readonly, nonatomic) NSInteger axFacemaskCategory; // ivar: _axFacemaskCategory
@property (nonatomic) CGFloat axFacemaskCategoryConfidence; // ivar: _axFacemaskCategoryConfidence
@property (readonly, nonatomic) NSInteger axGenderCategory; // ivar: _axGenderCategory
@property (nonatomic) CGFloat axGenderCategoryConfidence; // ivar: _axGenderCategoryConfidence
@property (readonly, nonatomic) NSInteger axGlassesCategory; // ivar: _axGlassesCategory
@property (nonatomic) CGFloat axGlassesCategoryConfidence; // ivar: _axGlassesCategoryConfidence
@property (readonly, nonatomic) NSInteger axHairColorCategory; // ivar: _axHairColorCategory
@property (nonatomic) CGFloat axHairColorCategoryConfidence; // ivar: _axHairColorCategoryConfidence
@property (readonly, nonatomic) NSInteger axHairTypeCategory; // ivar: _axHairTypeCategory
@property (nonatomic) CGFloat axHairTypeCategoryConfidence; // ivar: _axHairTypeCategoryConfidence
@property (readonly, nonatomic) NSInteger axHeadgearCategory; // ivar: _axHeadgearCategory
@property (nonatomic) CGFloat axHeadgearCategoryConfidence; // ivar: _axHeadgearCategoryConfidence
@property (readonly, nonatomic) NSInteger axMakeupEyesCategory; // ivar: _axMakeupEyesCategory
@property (nonatomic) CGFloat axMakeupEyesCategoryConfidence; // ivar: _axMakeupEyesCategoryConfidence
@property (readonly, nonatomic) NSInteger axMakeupLipsCategory; // ivar: _axMakeupLipsCategory
@property (nonatomic) CGFloat axMakeupLipsCategoryConfidence; // ivar: _axMakeupLipsCategoryConfidence
@property (readonly, nonatomic) NSInteger axPoseCategory; // ivar: _axPoseCategory
@property (nonatomic) CGFloat axPoseCategoryConfidence; // ivar: _axPoseCategoryConfidence
@property (readonly, nonatomic) NSInteger axSkintoneCategory; // ivar: _axSkintoneCategory
@property (nonatomic) CGFloat axSkintoneCategoryConfidence; // ivar: _axSkintoneCategoryConfidence
@property (readonly, nonatomic) NSInteger axSmilingCategory; // ivar: _axSmilingCategory
@property (nonatomic) NSInteger excludeOptions; // ivar: _excludeOptions
@property (retain, nonatomic) NSDictionary *results; // ivar: _results


+(BOOL)supportsSecureCoding;
+(NSInteger)defaultExcludeOptions;
+(id)unitTestingFaceAttributes;
+(id)unitTestingFaceAttributesForAge:(NSInteger)arg0 gender:(NSInteger)arg1 eyes:(NSInteger)arg2 smiling:(NSInteger)arg3 facialHair:(NSInteger)arg4 hairColor:(NSInteger)arg5 baldness:(NSInteger)arg6 glasses:(NSInteger)arg7 eyeMakeup:(NSInteger)arg8 lipMakeup:(NSInteger)arg9 faceMask:(NSInteger)arg10 ethnicity:(NSInteger)arg11 expression:(NSInteger)arg12 facialHairV2:(NSInteger)arg13 hairType:(NSInteger)arg14 headGear:(NSInteger)arg15 pose:(NSInteger)arg16 skinTone:(NSInteger)arg17 excludeOptions:(NSInteger)arg18 ;
-(NSInteger)_AXMAgeCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMEthnicityCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMExpressionCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMEyesCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMFaceHairV2CategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMFacemaskCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMGenderCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMGlassesCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMHairColorCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMHairtypeCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMHeadgearCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMMakeupEyesCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMMakeupLipsCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMPoseCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(NSInteger)_AXMSkintoneCategoryForVisionCategoryIdentifier:(id)arg0 ;
-(id)_accessibilityIdentifierForAgeCategory;
-(id)_accessibilityIdentifierForEthnicityCategory;
-(id)_accessibilityIdentifierForExpressionCategory;
-(id)_accessibilityIdentifierForEyesCategory;
-(id)_accessibilityIdentifierForFaceHairV2Category;
-(id)_accessibilityIdentifierForFacemaskCategory;
-(id)_accessibilityIdentifierForGenderCategory;
-(id)_accessibilityIdentifierForGlassesCategory;
-(id)_accessibilityIdentifierForHairColorCategory;
-(id)_accessibilityIdentifierForHairTypeCategory;
-(id)_accessibilityIdentifierForHeadgearCategory;
-(id)_accessibilityIdentifierForMakeupEyesCategory;
-(id)_accessibilityIdentifierForMakeupLipsCategory;
-(id)_accessibilityIdentifierForPoseCategory;
-(id)_accessibilityIdentifierForSkintoneCategory;
-(id)_accessibilityLabelForAccessoryDetails;
-(id)_accessibilityLabelForDemographics;
-(id)_accessibilityLabelForExpressionDetails;
-(id)_accessibilityLabelForFacialHairDetails;
-(id)_accessibilityLabelForHairDetails;
-(id)_accessibilityLabelFormatterBeginning;
-(id)_accessibilityLabelFormatterForAgeCategory;
-(id)_accessibilityLabelFormatterForExpressionCategory;
-(id)_accessibilityLabelFormatterForFaceHairV2Category;
-(id)_accessibilityLabelFormatterForFaceMaskCategory;
-(id)_accessibilityLabelFormatterForGlassesCategory;
-(id)_accessibilityLabelFormatterForHairColorCategory;
-(id)_accessibilityLabelFormatterForHairTypeCategory;
-(id)_accessibilityLabelFormatterForPoseCategory;
-(id)accessibilityLabelAndConfidenceMappingForAttributes;
-(id)accessibilityLabelForAttributes;
-(id)initWithAVMetadataFaceObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVisionFaceAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif