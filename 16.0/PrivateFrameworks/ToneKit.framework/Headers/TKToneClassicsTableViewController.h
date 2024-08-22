// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTONECLASSICSTABLEVIEWCONTROLLER_H
#define TKTONECLASSICSTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver, TKTonePickerTableViewControllerHelper;


#import "TKTonePickerItem.h"

@interface TKToneClassicsTableViewController : UITableViewController <PSStateRestoration, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver>

 {
    TKTonePickerItem *_classicTonesHeaderItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TKTonePickerTableViewControllerHelper> *tonePickerTableViewControllerHelper; // ivar: _tonePickerTableViewControllerHelper


-(BOOL)_canShowWhileLocked;
-(BOOL)canBeShownFromSuspendedState;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithClassicTonesHeaderItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)didReloadTones;
-(void)didUpdateCheckedStatus:(BOOL)arg0 ofToneClassicsPickerItem:(id)arg1 ;
-(void)didUpdateDetailText:(id)arg0 ofToneClassicsPickerItem:(id)arg1 ;
-(void)layoutMarginsDidChangeInTonePickerTableView:(id)arg0 ;
-(void)loadView;
-(void)separatorColorDidChangeInTonePickerTableView:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif