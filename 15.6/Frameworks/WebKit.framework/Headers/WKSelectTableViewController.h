// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSELECTTABLEVIEWCONTROLLER_H
#define WKSELECTTABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "WKContentView.h"
#import "WKSelectPopover.h"

@interface WKSelectTableViewController : UITableViewController {
    NSUInteger _singleSelectionIndex;
    NSUInteger _singleSelectionSection;
    NSInteger _numberOfSections;
    BOOL _allowsMultipleSelection;
    CGFloat _fontSize;
    CGFloat _maximumTextWidth;
    NSInteger _textAlignment;
    WKContentView *_contentView;
}


@property (nonatomic) WKSelectPopover *popover; // ivar: _popover
@property (readonly, nonatomic) BOOL shouldDismissWithAnimation;


-(*void)findItemAt:(id)arg0 ;
-(NSInteger)findItemIndexAt:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithView:(id)arg0 hasGroups:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)populateCell:(id)arg0 withItem:(*void)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif