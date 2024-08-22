// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED28DEBUGFORMATLOGVIEWCONTROLLER_H
#define _TTC8NEWSFEED28DEBUGFORMATLOGVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC8NewsFeed28DebugFormatLogViewController : UIViewController {
    ? editor;
    ? styler;
    ? tableView;
    ? entries;
    ? unfilteredEntries;
    ? filterTerm;
    ? $__lazy_storage_$_nowBarButtonItem;
    ? $__lazy_storage_$_filterBarButtonItem;
    ? filterTermLabel;
    ? filterTermLabelAction;
    ? searchController;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)doClearLogs;
-(void)doCollapse;
-(void)doNow;
-(void)doShowFilter;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif