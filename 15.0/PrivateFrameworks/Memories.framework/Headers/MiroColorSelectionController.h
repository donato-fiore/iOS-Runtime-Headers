// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROCOLORSELECTIONCONTROLLER_H
#define MIROCOLORSELECTIONCONTROLLER_H

@class NSArray, UIColor, NSDictionary, NSMutableArray;
@protocol MiroTitleColorConfiguration;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"

@interface MiroColorSelectionController : NSObject

@property (retain, nonatomic) NSArray *accentColors; // ivar: _accentColors
@property (nonatomic) NSUInteger analysisRegion; // ivar: _analysisRegion
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) NSArray *centerDominantColors; // ivar: _centerDominantColors
@property (retain, nonatomic) NSDictionary *colorAnalysis; // ivar: _colorAnalysis
@property (readonly, nonatomic) NSDictionary *colorTitlePresets; // ivar: _colorTitlePresets
@property (retain, nonatomic) NSMutableArray *debugFilteredImageDominantRanges; // ivar: _debugFilteredImageDominantRanges
@property (retain, nonatomic) NSMutableArray *debugSafeAccentRanges; // ivar: _debugSafeAccentRanges
@property (retain, nonatomic) NSObject<MiroTitleColorConfiguration> *debugTitleConfiguration; // ivar: _debugTitleConfiguration
@property (retain, nonatomic) UIColor *gapColor; // ivar: _gapColor
@property (nonatomic) BOOL hasWarnedOnceNilTitleID; // ivar: _hasWarnedOnceNilTitleID
@property (retain, nonatomic) NSArray *imageDominantColors; // ivar: _imageDominantColors
@property (retain, nonatomic) NSArray *lowerThirdDominantColors; // ivar: _lowerThirdDominantColors
@property (readonly, nonatomic) NSArray *presetBackgroundColors; // ivar: _presetBackgroundColors
@property (readonly, nonatomic) NSArray *presetTextOnBlackColors; // ivar: _presetTextOnBlackColors
@property (readonly, nonatomic) NSArray *presetTextOnWhiteColors; // ivar: _presetTextOnWhiteColors
@property (readonly, nonatomic) NSArray *presetTextOverImageColors; // ivar: _presetTextOverImageColors
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) NSArray *randomNumbers; // ivar: _randomNumbers
@property (retain, nonatomic) NSArray *safeAccentColors; // ivar: _safeAccentColors
@property (readonly, nonatomic) NSArray *safeColorRanges; // ivar: _safeColorRanges
@property (retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (nonatomic) int titleSnapshotAspect; // ivar: _titleSnapshotAspect


+(BOOL)colorIsDark:(id)arg0 ;
+(BOOL)colorIsLight:(id)arg0 ;
+(BOOL)colorIsSaturated:(id)arg0 ;
+(id)_colorAnalysisForStartTime:(int)arg0 asset:(id)arg1 ;
+(void)_fetchColorAnalysisDictionaryForAsset:(id)arg0 startTime:(int)arg1 completion:(id)arg2 ;
+(void)fetchColorAnalysisForAsset:(id)arg0 atTime:(int)arg1 completion:(id)arg2 ;
-(id)_analysisColorsForKey:(id)arg0 ;
-(id)_analysisHSVValuesForAnalysisRegion:(NSUInteger)arg0 ;
-(id)_colorsWithSimilarHue:(CGFloat)arg0 fromPresets:(id)arg1 usingHSVValues:(id)arg2 ;
-(id)_dominantColorsForAnalysisRegion:(NSUInteger)arg0 ;
-(id)_filterDominantColorsForAnalysisRegion:(NSUInteger)arg0 ;
-(id)_filterSafeBackgroundColorsForColors:(id)arg0 withDebugArray:(id)arg1 ;
-(id)_presetColorsForKey:(id)arg0 ;
-(id)_presetHSVValuesForKey:(id)arg0 ;
-(id)_presetTextOverImageColorWithSimilarHue:(CGFloat)arg0 ;
-(id)_randomPresetColorOverBlackColor;
-(id)_randomPresetColorOverWhiteColor;
-(id)_selectSafeAccentColor;
-(id)_selectSafeDominantColorForAnalysisRegion:(NSUInteger)arg0 ;
-(id)_selectSafeTextColorOverImageForAnalysisRegion:(NSUInteger)arg0 ;
-(id)debugAccentColors;
-(id)debugBackgroundColor;
-(id)debugCenterDominantColors;
-(id)debugFilteredImageDominantColors;
-(id)debugImageDominantColors;
-(id)debugLowerThirdDominantColors;
-(id)debugPrimaryColor;
-(id)debugSecondaryColor;
-(id)init;
-(id)initWithColorAnalysis:(id)arg0 ;
-(void)_generateRandomNumbersForRandomizerSeed:(*unsigned int)arg0 ;
-(void)_invalidateColors;
-(void)_setupColorsIfNecessary;


@end


#endif