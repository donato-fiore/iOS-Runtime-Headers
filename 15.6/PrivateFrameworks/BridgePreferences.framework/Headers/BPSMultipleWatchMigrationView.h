// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSMULTIPLEWATCHMIGRATIONVIEW_H
#define BPSMULTIPLEWATCHMIGRATIONVIEW_H

@class UIView, NSString, NSArray, NSMutableDictionary;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "BPSMultipleWatchMigrationPickerTableView.h"

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BPSMultipleWatchMigrationPickerTableView *devicesTable; // ivar: _devicesTable
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *migratableDevices; // ivar: _migratableDevices
@property (retain, nonatomic) NSMutableDictionary *selectedStates; // ivar: _selectedStates
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(CGFloat)tableHeight;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 andStyle:(NSUInteger)arg1 ;
-(id)selectedMigrationDevices;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif