// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSLIDESHOWTHEMEVIEWCONTROLLER_H
#define PUSLIDESHOWTHEMEVIEWCONTROLLER_H

@class UIViewController, NSArray, UITableView, OKProducerPreset, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, PUSlideshowThemeDelegate;


#import "PUSlideshowSettingsViewControllerSpec.h"

@interface PUSlideshowThemeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver>

 {
    NSArray *_presets;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
}


@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) BOOL _needsUpdateBackgroundView; // ivar: __needsUpdateBackgroundView
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // ivar: __needsUpdateSpec
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView; // ivar: __needsUpdateTableView
@property (retain, nonatomic) OKProducerPreset *currentPreset; // ivar: _currentPreset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUSlideshowThemeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(BOOL)pu_wantsNavigationBarVisible;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_didFinish;
-(void)_didPickPreset:(id)arg0 ;
-(void)_invalidateBackgroundView;
-(void)_invalidateSpec;
-(void)_invalidateTableView;
-(void)_setNeedsUpdate;
-(void)_updateBackgroundViewIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateSpecIfNeeded;
-(void)_updateTableViewIfNeeded;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif