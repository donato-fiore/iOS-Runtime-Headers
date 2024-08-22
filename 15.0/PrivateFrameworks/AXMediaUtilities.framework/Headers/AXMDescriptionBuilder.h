// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMDESCRIPTIONBUILDER_H
#define AXMDESCRIPTIONBUILDER_H

@class NSMutableString, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AXMVisionFeature.h"

@interface AXMDescriptionBuilder : NSObject {
    NSInteger _builderOptions;
    NSMutableString *_speakableDescription;
    NSMutableString *_visualDescription;
    NSMutableArray *_faceFeatures;
    NSMutableDictionary *_classificationLabelsToLocValuesMap;
    NSMutableArray *_iconClassFeatures;
    AXMVisionFeature *_captionFeature;
}


@property (retain, nonatomic) AXMVisionFeature *blurFeature; // ivar: _blurFeature
@property (retain, nonatomic) AXMVisionFeature *brightnessFeature; // ivar: _brightnessFeature
@property (nonatomic) BOOL isNSFW; // ivar: _isNSFW
@property (retain, nonatomic) AXMVisionFeature *primarySensitiveContentFeature; // ivar: _primarySensitiveContentFeature
@property (nonatomic) BOOL shouldModifyCaptionForSensitiveContent; // ivar: _shouldModifyCaptionForSensitiveContent


+(id)builderWithOptions:(NSInteger)arg0 ;
-(BOOL)_shouldReplaceCaptionWithGenericTemplate;
-(BOOL)_shouldSummarizeDetectedPeople;
-(BOOL)_usesTemplateForLowConfidenceAndExplicitFeatures;
-(id)_ignoredTagsForTags:(id)arg0 ;
-(id)_initWithOptions:(NSInteger)arg0 ;
-(id)_stringForPauseType:(NSInteger)arg0 ;
-(id)_subsumedTagsForTags:(id)arg0 ;
-(id)_templateRulesForTag:(id)arg0 ;
-(id)buildSpeakableDescription;
-(id)buildVisualDescription;
-(void)_addBlurInformationToDescription:(id)arg0 ;
-(void)_addBrightnessInformationToDescription:(id)arg0 ;
-(void)_addCaptionInformationToDescription:(id)arg0 ;
-(void)_addClassificationInformationToDescription:(id)arg0 ;
-(void)_addDetailedFaceInformationToDescription:(id)arg0 ;
-(void)_addFaceInformationToDescription:(id)arg0 ;
-(void)_addGenericTemplateForCaptionInformationToDescription:(id)arg0 ;
-(void)_addIconClassInformationToDescription:(id)arg0 ;
-(void)_addPersonSummaryToDescription:(id)arg0 ;
-(void)_appendPauseType:(NSInteger)arg0 toDescriptionIfNeeded:(id)arg1 ;
-(void)_appendToDescription:(id)arg0 afterPauseType:(NSInteger)arg1 withContents:(id)arg2 ;
-(void)addDetectedClassificationFeatures:(id)arg0 ;
-(void)addDetectedClassificationLocalizedValue:(id)arg0 forLabel:(id)arg1 ;
-(void)addDetectedFaces:(id)arg0 ;
-(void)addDetectedIconClasses:(id)arg0 ;
-(void)setDetectedCaption:(id)arg0 ;


@end


#endif