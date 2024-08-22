// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGSETTINGSSCORINGSETTINGSVIEW_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGSETTINGSSCORINGSETTINGSVIEW_H

@class UIView, UITextField;


#import "PUTopPeopleWallpaperSuggestionsScoringContext.h"

@interface PUTopPeopleWallpaperSuggestionsDebugSettingsScoringSettingsView : UIView {
    PUTopPeopleWallpaperSuggestionsScoringContext *_scoringContext;
}


@property (readonly) UITextField *aestheticFactorTextField; // ivar: _aestheticFactorTextField
@property (readonly) UITextField *atHomeOrWorkFactorTextField; // ivar: _atHomeOrWorkFactorTextField
@property (readonly) UITextField *favoriteFactorTextField; // ivar: _favoriteFactorTextField
@property (readonly) UITextField *interactionFactorTextField; // ivar: _interactionFactorTextField
@property (readonly) UITextField *maximumFaceSizeTextField; // ivar: _maximumFaceSizeTextField
@property (readonly) UITextField *meaningFactorTextField; // ivar: _meaningFactorTextField
@property (readonly) UITextField *peopleFactorTextField; // ivar: _peopleFactorTextField


-(id)initWithScoringContext:(id)arg0 ;
-(void)setAestheticFactor:(id)arg0 ;
-(void)setAtHomeOrWorkFactor:(id)arg0 ;
-(void)setFavoriteFactor:(id)arg0 ;
-(void)setInteractionFactor:(id)arg0 ;
-(void)setMaximumFaceSize:(id)arg0 ;
-(void)setMeaningFactor:(id)arg0 ;
-(void)setPeopleFactor:(id)arg0 ;


@end


#endif