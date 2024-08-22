// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEVALUESCALCULATOR_H
#define PEVALUESCALCULATOR_H

@class PICompositionController, PLEditSource;
@protocol OS_dispatch_queue, OS_dispatch_group, PEValuesCalculatorDelegate, PEValuesCalculatorSettings;

#import <Foundation/Foundation.h>

#import "PUPhotoEditImageValues.h"

@interface PEValuesCalculator : NSObject {
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_currentGeometricValues;
    PUPhotoEditImageValues *_initialImageValues;
    PUPhotoEditImageValues *_initialGeometricValues;
    PICompositionController *_compositionControllerForCurrentValues;
    NSObject<OS_dispatch_queue> *_imageValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingImageValuesGroup;
    NSObject<OS_dispatch_queue> *_geometricValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingGeometricValuesGroup;
    ? _settings;
    NSInteger _currentSourceSelection;
}


@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (weak, nonatomic) NSObject<PEValuesCalculatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PLEditSource *editSource; // ivar: _editSource
@property (readonly, nonatomic) BOOL hasImageValues;
@property (retain, nonatomic) PLEditSource *overcaptureEditSource; // ivar: _overcaptureEditSource
@property (weak, nonatomic) NSObject<PEValuesCalculatorSettings> *settingsDelegate; // ivar: _settingsDelegate
@property (nonatomic) BOOL skipGeometricCalculations; // ivar: _skipGeometricCalculations
@property (nonatomic) ? videoFrameTime; // ivar: _videoFrameTime


+(BOOL)shouldRunGeometricAutoCalculatorForSource:(id)arg0 ;
-(BOOL)_geometricCurrentValuesCacheIsValid;
-(BOOL)_imageCurrentValuesCacheIsValid;
-(CGFloat)smartColorAutoSuggestion;
-(CGFloat)smartToneAutoSuggestion;
-(id)apertureValuesWithAccuracy:(NSInteger)arg0 ;
-(id)autoCropValuesWithAccuracy:(NSInteger)arg0 ;
-(id)autoPerspectiveValuesWithAccuracy:(NSInteger)arg0 ;
-(id)currentEditSource;
-(id)init;
-(id)overcaptureSmartToneStatisticsWithAccuracy:(NSInteger)arg0 ;
-(id)portraitValuesWithAccuracy:(NSInteger)arg0 ;
-(id)primarySmartToneStatisticsWithAccuracy:(NSInteger)arg0 ;
-(id)smartColorStatisticsWithAccuracy:(NSInteger)arg0 ;
-(id)smartToneStatisticsWithAccuracy:(NSInteger)arg0 ;
-(void)_ensureCurrentGeometricValuesAreComputed;
-(void)_ensureCurrentImageValuesAreComputed;
-(void)_ensureInitialGeometricValuesAreComputed;
-(void)_ensureInitialImageValuesAreComputed;
-(void)_updateSettings;
-(void)computeAutoEnhanceWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)precomputeGeometricValues;
-(void)precomputeImageValues;
-(void)precomputeImageValuesWithCompletion:(id)arg0 ;
-(void)precomputeImageValuesWithOptionalCompletion:(id)arg0 ;
-(void)updateAdjustmentSmartToneStatistics:(id)arg0 withAccuracy:(NSInteger)arg1 ;


@end


#endif