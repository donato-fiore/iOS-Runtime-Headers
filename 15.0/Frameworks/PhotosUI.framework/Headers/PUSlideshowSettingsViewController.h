// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWSETTINGSVIEWCONTROLLER_H
#define PUSLIDESHOWSETTINGSVIEWCONTROLLER_H

@class UIViewController, UITableView, OKProducerPreset, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, PUSlideshowThemeDelegate, PUSlideshowSettingsViewModelChangeObserver, PUViewControllerSpecChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowMusicDelegate, PUSlideshowSettingsViewControllerDelegate;


#import "PUSlideshowSession.h"
#import "PUSlideshowSettingsViewModel.h"
#import "PUSlideshowSettingsViewControllerSpec.h"
#import "PUSlideshowMediaItem.h"

@interface PUSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, PUSlideshowThemeDelegate, PUSlideshowSettingsViewModelChangeObserver, PUViewControllerSpecChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowMusicDelegate>

 {
    PUSlideshowSession *_session;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}


@property (nonatomic, setter=_setNeedsUpdateMediaItem:) BOOL _needsUpdateMediaItem; // ivar: __needsUpdateMediaItem
@property (nonatomic, setter=_setNeedsUpdateMusicOn:) BOOL _needsUpdateMusicOn; // ivar: __needsUpdateMusicOn
@property (nonatomic, setter=_setNeedsUpdateNavigationBar:) BOOL _needsUpdateNavigationBar; // ivar: __needsUpdateNavigationBar
@property (nonatomic, setter=_setNeedsUpdatePreset:) BOOL _needsUpdatePreset; // ivar: __needsUpdatePreset
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // ivar: __needsUpdateSpec
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView; // ivar: __needsUpdateTableView
@property (retain, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem; // ivar: __pendingMediaItem
@property (retain, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset; // ivar: __pendingPreset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUSlideshowSettingsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)PUSlideshowSpeedCell:(id)arg0 stepDurationDidChange:(CGFloat)arg1 ;
-(void)_didTapDoneButton:(id)arg0 ;
-(void)_invalidateMediaItem;
-(void)_invalidateMusicOn;
-(void)_invalidateNavigationBar;
-(void)_invalidatePreset;
-(void)_invalidateSpec;
-(void)_invalidateTableView;
-(void)_setNeedsUpdate;
-(void)_synchronizedChangedSettings;
-(void)_toggleMusic:(id)arg0 ;
-(void)_toggleRepeat:(id)arg0 ;
-(void)_updateIfNeeded;
-(void)_updateMediaItemIfNeeded;
-(void)_updateMusicOnIfNeeded;
-(void)_updateNavigationBarIfNeeded;
-(void)_updatePresetIfNeeded;
-(void)_updateSpecIfNeeded;
-(void)_updateTableViewIfNeeded;
-(void)dealloc;
-(void)musicPicker:(id)arg0 didPickMediaItem:(id)arg1 ;
-(void)musicPickerDidFinish:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)themePicker:(id)arg0 didPickPreset:(id)arg1 ;
-(void)themePickerDidFinish:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif