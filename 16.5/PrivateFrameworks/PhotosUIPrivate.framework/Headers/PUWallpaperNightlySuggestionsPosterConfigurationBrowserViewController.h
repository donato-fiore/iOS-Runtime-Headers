// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERNIGHTLYSUGGESTIONSPOSTERCONFIGURATIONBROWSERVIEWCONTROLLER_H
#define PUWALLPAPERNIGHTLYSUGGESTIONSPOSTERCONFIGURATIONBROWSERVIEWCONTROLLER_H

@class UITableViewController, NSArray;


#import "PUWallpaperNightlySuggestionsViewController.h"
#import "PUWallpaperNightlySuggestionsPosterConfiguration.h"

@interface PUWallpaperNightlySuggestionsPosterConfigurationBrowserViewController : UITableViewController {
    NSArray *_posterConfigurations;
    PUWallpaperNightlySuggestionsViewController *_suggestionViewController;
    BOOL _isPresentingCustomPosterConfigurationSettings;
    PUWallpaperNightlySuggestionsPosterConfiguration *_customConfiguration;
    NSArray *_persons;
}




-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_doneEditingSettings:(id)arg0 ;
-(void)_setIncludeCityscapes:(id)arg0 ;
-(void)_setIncludeLandscapes:(id)arg0 ;
-(void)_setIncludePets:(id)arg0 ;
-(void)doCustomPosterConfiguration;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif