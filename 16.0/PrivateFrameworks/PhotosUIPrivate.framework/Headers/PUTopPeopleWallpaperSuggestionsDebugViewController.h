// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGVIEWCONTROLLER_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGVIEWCONTROLLER_H

@class NSMutableSet, NSDictionary, NSString;
@protocol PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate;


#import "PUPhotosAlbumViewController.h"
#import "PUTopPeopleWallpaperSuggestionsDistancingContext.h"
#import "PUTopPeopleWallpaperSuggesterFilteringContext.h"
#import "PUTopPeopleWallpaperSuggestionsScoringContext.h"

@interface PUTopPeopleWallpaperSuggestionsDebugViewController : PUPhotosAlbumViewController <PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate>

 {
    NSMutableSet *_usedAssetLocalIdentifiers;
    NSDictionary *_scoreByAssetLocalIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PUTopPeopleWallpaperSuggestionsDistancingContext *distancingContext; // ivar: _distancingContext
@property (readonly) PUTopPeopleWallpaperSuggesterFilteringContext *filteringContext; // ivar: _filteringContext
@property (readonly) NSUInteger hash;
@property (readonly) PUTopPeopleWallpaperSuggestionsScoringContext *scoringContext; // ivar: _scoringContext
@property (readonly) Class superclass;


-(BOOL)_writeDiagnosticsToURL:(id)arg0 goodSuggestions:(id)arg1 badSuggestions:(id)arg2 ;
-(BOOL)shouldShowToolbar;
-(id)_cloneAsset:(id)arg0 toDirectory:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)newToolbarItems;
-(void)_editSettings:(id)arg0 ;
-(void)_fileRadarWithGoodSuggestions:(id)arg0 badSuggestions:(id)arg1 ;
-(void)_next:(id)arg0 ;
-(void)_presentTapToRadar;
-(void)_rewind:(id)arg0 ;
-(void)_update;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)settingsDidDismiss;
-(void)viewDidLoad;


@end


#endif