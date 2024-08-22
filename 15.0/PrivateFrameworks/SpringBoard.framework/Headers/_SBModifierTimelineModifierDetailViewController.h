// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBMODIFIERTIMELINEMODIFIERDETAILVIEWCONTROLLER_H
#define _SBMODIFIERTIMELINEMODIFIERDETAILVIEWCONTROLLER_H

@class UIViewController, UITableView, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "_SBModifierTimelineTextViewController.h"
#import "SBSwitcherModifierStackSnapshot.h"

@interface _SBModifierTimelineModifierDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_tableView;
    _SBModifierTimelineTextViewController *_textViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSwitcherModifierStackSnapshot *stackSnapshot; // ivar: _stackSnapshot
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif