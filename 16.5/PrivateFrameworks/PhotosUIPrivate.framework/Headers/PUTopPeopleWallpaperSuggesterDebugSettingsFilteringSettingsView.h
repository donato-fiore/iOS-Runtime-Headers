// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTERDEBUGSETTINGSFILTERINGSETTINGSVIEW_H
#define PUTOPPEOPLEWALLPAPERSUGGESTERDEBUGSETTINGSFILTERINGSETTINGSVIEW_H

@class UIScrollView, NSArray, UISwitch, UITextField;


#import "PUTopPeopleWallpaperSuggesterFilteringContext.h"

@interface PUTopPeopleWallpaperSuggesterDebugSettingsFilteringSettingsView : UIScrollView {
    PUTopPeopleWallpaperSuggesterFilteringContext *_filteringContext;
    NSArray *_persons;
    NSArray *_highlights;
}


@property (readonly) UISwitch *favoritePersonsAreVIPsCheckBox; // ivar: _favoritePersonsAreVIPsCheckBox
@property (readonly) UITextField *maximumFaceRollTextField; // ivar: _maximumFaceRollTextField
@property (readonly) UITextField *maximumFaceSizeTextField; // ivar: _maximumFaceSizeTextField
@property (readonly) UITextField *minimumCropScoreTextField; // ivar: _minimumCropScoreTextField
@property (readonly) UITextField *minimumFaceQualityTextField; // ivar: _minimumFaceQualityTextField
@property (readonly) UITextField *minimumFaceSizeTextField; // ivar: _minimumFaceSizeTextField
@property (readonly) UITextField *minimumNumberOfCandidatesForEligiblePersonTextField; // ivar: _minimumNumberOfCandidatesForEligiblePersonTextField
@property (readonly) UITextField *minimumWallpaperScoreTextField; // ivar: _minimumWallpaperScoreTextField
@property (readonly) UITextField *normalizedDeviationForImportantPersonsTextField; // ivar: _normalizedDeviationForImportantPersonsTextField
@property (readonly) UITextField *normalizedDeviationForVeryImportantPersonsTextField; // ivar: _normalizedDeviationForVeryImportantPersonsTextField
@property (readonly) UISwitch *requiresNoBlinkCheckBox; // ivar: _requiresNoBlinkCheckBox
@property (readonly) UISwitch *requiresSmileCheckBox; // ivar: _requiresSmileCheckBox
@property (readonly) UITextField *timeIntervalForCandidateDedupingTextField; // ivar: _timeIntervalForCandidateDedupingTextField


-(NSInteger)indexOfRowWithPersonLocalIdentifiers:(id)arg0 ;
-(id)aspectRatios;
-(id)highlights;
-(id)initWithFilteringContext:(id)arg0 ;
-(void)favoritePersonsAreVIPsChanged:(id)arg0 ;
-(void)maximumFaceRollChanged:(id)arg0 ;
-(void)maximumFaceSizeChanged:(id)arg0 ;
-(void)minimumCropScoreChanged:(id)arg0 ;
-(void)minimumFaceQualityChanged:(id)arg0 ;
-(void)minimumFaceSizeChanged:(id)arg0 ;
-(void)minimumNumberOfCandidatesForEligiblePersonChanged:(id)arg0 ;
-(void)minimumWallpaperScoreChanged:(id)arg0 ;
-(void)normalizedDeviationForImportantPersonsChanged:(id)arg0 ;
-(void)normalizedDeviationForVeryImportantPersonsChanged:(id)arg0 ;
-(void)requiresNoBlinkChanged:(id)arg0 ;
-(void)requiresSmileChanged:(id)arg0 ;
-(void)timeIntervalForCandidateDedupingChanged:(id)arg0 ;


@end


#endif