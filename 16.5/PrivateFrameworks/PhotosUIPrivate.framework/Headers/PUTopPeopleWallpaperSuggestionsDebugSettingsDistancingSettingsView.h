// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGSETTINGSDISTANCINGSETTINGSVIEW_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGSETTINGSDISTANCINGSETTINGSVIEW_H

@class UIView, UITextField;


#import "PUTopPeopleWallpaperSuggestionsDistancingContext.h"

@interface PUTopPeopleWallpaperSuggestionsDebugSettingsDistancingSettingsView : UIView {
    PUTopPeopleWallpaperSuggestionsDistancingContext *_distancingContext;
}


@property (readonly) UITextField *locationFactorTextField; // ivar: _locationFactorTextField
@property (readonly) UITextField *locationPivotTextField; // ivar: _locationPivotTextField
@property (readonly) UITextField *maximumNumberOfSuggestionsWithPeopleTextField; // ivar: _maximumNumberOfSuggestionsWithPeopleTextField
@property (readonly) UITextField *maximumNumberOfSuggestionsWithoutPeopleTextField; // ivar: _maximumNumberOfSuggestionsWithoutPeopleTextField
@property (readonly) UITextField *peopleFactorTextField; // ivar: _peopleFactorTextField
@property (readonly) UITextField *peoplePivotTextField; // ivar: _peoplePivotTextField
@property (readonly) UITextField *sceneprintFactorTextField; // ivar: _sceneprintFactorTextField
@property (readonly) UITextField *sceneprintPivotTextField; // ivar: _sceneprintPivotTextField
@property (readonly) UITextField *timeFactorTextField; // ivar: _timeFactorTextField
@property (readonly) UITextField *timePivotTextField; // ivar: _timePivotTextField


-(id)initWithDistancingContext:(id)arg0 ;
-(void)setLocationFactor:(id)arg0 ;
-(void)setLocationPivot:(id)arg0 ;
-(void)setMaximumNumberOfSuggestionsWithPeople:(id)arg0 ;
-(void)setMaximumNumberOfSuggestionsWithoutPeople:(id)arg0 ;
-(void)setPeopleFactor:(id)arg0 ;
-(void)setPeoplePivot:(id)arg0 ;
-(void)setSceneprintFactor:(id)arg0 ;
-(void)setSceneprintPivot:(id)arg0 ;
-(void)setTimeFactor:(id)arg0 ;
-(void)setTimePivot:(id)arg0 ;


@end


#endif