// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKSELECTPICKERTABLEVIEWCONTROLLER_H
#define WKSELECTPICKERTABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "WKContentView.h"

@interface WKSelectPickerTableViewController : UITableViewController {
    WKContentView *_contentView;
    NSInteger _numberOfSections;
    RetainPtr<NSMutableSet<NSNumber *>> _collapsedSections;
    RetainPtr<UIBarButtonItem> _previousButton;
    RetainPtr<UIBarButtonItem> _nextButton;
}




-(*void)optionItemAtIndexPath:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)findItemIndexAt:(id)arg0 ;
-(NSInteger)numberOfRowsInGroup:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)groupHeaderFont;
-(id)initWithView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)close:(id)arg0 ;
-(void)didTapSelectPickerGroupHeaderView:(id)arg0 ;
-(void)next:(id)arg0 ;
-(void)previous:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif