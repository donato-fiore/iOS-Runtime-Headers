// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDWATCHSTOREDDATAVIEWCONTROLLER_H
#define WDWATCHSTOREDDATAVIEWCONTROLLER_H

@class UILabel;


#import "WDSourceStoredDataViewController.h"

@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {
    UILabel *_messageLabel;
}


@property BOOL watchPaired; // ivar: _watchPaired


-(BOOL)_shouldDisplayPrivacySection;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_updateFont;
-(void)addUnpairedWatchHeaderView;
-(void)handlePairedDevicesSnapshot:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTableHeaderViewForUnpairedWatch;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif