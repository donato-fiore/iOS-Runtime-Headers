// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKICSPREVIEWLISTCONTROLLER_H
#define EKICSPREVIEWLISTCONTROLLER_H

@class UITableViewController, NSMutableArray;
@protocol EKICSPreviewListDelegate;


#import "EKICSPreviewModel.h"

@interface EKICSPreviewListController : UITableViewController {
    EKICSPreviewModel *_model;
    NSMutableArray *_sections;
}


@property (nonatomic) BOOL allowsImport; // ivar: _allowsImport
@property (nonatomic) BOOL allowsSubitems; // ivar: _allowsSubitems
@property (weak, nonatomic) NSObject<EKICSPreviewListDelegate> *listDelegate; // ivar: _listDelegate
@property (nonatomic) *CGColor overrideCalendarColor; // ivar: _overrideCalendarColor
@property (nonatomic) BOOL showWeekNumbers; // ivar: _showWeekNumbers


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_timeZone;
-(id)initWithModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_showWeekNumbersPreferenceChanged:(id)arg0 ;
-(void)buildSections;
-(void)dealloc;
-(void)importAllPressed:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateImportButton;
-(void)viewDidLoad;


@end


#endif