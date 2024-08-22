// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGSETTINGSVIEWCONTROLLER_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGSETTINGSVIEWCONTROLLER_H

@class UIViewController, UIButton, UISegmentedControl, UIView;
@protocol PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate;



@interface PUTopPeopleWallpaperSuggestionsDebugSettingsViewController : UIViewController {
    UIButton *_closeButton;
    UISegmentedControl *_segmentedControl;
    UIView *_contentView;
    UIView *_filteringSettingsView;
    UIView *_scoringSettingsView;
    UIView *_distancingSettingsView;
}


@property (weak) NSObject<PUTopPeopleWallpaperSuggestionsDebugSettingsViewControllerDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)_close:(id)arg0 ;
-(void)_switchSettings:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif