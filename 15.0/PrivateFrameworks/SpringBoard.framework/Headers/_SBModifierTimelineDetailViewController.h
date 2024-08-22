// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBMODIFIERTIMELINEDETAILVIEWCONTROLLER_H
#define _SBMODIFIERTIMELINEDETAILVIEWCONTROLLER_H

@class UIViewController, UITableView, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "_SBModifierTimelineModifierDetailViewController.h"
#import "_SBModifierTimelineTextViewController.h"
#import "SBSwitcherModifierTimelineEntry.h"

@interface _SBModifierTimelineDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_tableView;
    _SBModifierTimelineModifierDetailViewController *_modifierDetailViewController;
    _SBModifierTimelineTextViewController *_textDetailViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry; // ivar: _entry
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_numberOfModifiersInStackSnapshot:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_prettyStringForEventPredicateDetails:(id)arg0 ;
-(id)_stackSnapshotAtIndex:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_done;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif