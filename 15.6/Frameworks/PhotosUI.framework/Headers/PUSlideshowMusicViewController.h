// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSLIDESHOWMUSICVIEWCONTROLLER_H
#define PUSLIDESHOWMUSICVIEWCONTROLLER_H

@class UIViewController, NSArray, UITableView, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate, PUSlideshowMusicDelegate;


#import "PUSlideshowSettingsViewControllerSpec.h"
#import "PUSlideshowMediaItem.h"

@interface PUSlideshowMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate>

 {
    NSArray *_mediaItems;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}


@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) BOOL _needsUpdateBackgroundView; // ivar: __needsUpdateBackgroundView
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // ivar: __needsUpdateSpec
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView; // ivar: __needsUpdateTableView
@property (retain, nonatomic) PUSlideshowMediaItem *currentMediaItem; // ivar: _currentMediaItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUSlideshowMusicDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(BOOL)pu_wantsNavigationBarVisible;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_didFinish;
-(void)_didPickMediaItem:(id)arg0 ;
-(void)_invalidateBackgroundView;
-(void)_invalidateSpec;
-(void)_invalidateTableView;
-(void)_setNeedsUpdate;
-(void)_updateBackgroundViewIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateSpecIfNeeded;
-(void)_updateTableViewIfNeeded;
-(void)dealloc;
-(void)mediaPicker:(id)arg0 didPickMediaItems:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif