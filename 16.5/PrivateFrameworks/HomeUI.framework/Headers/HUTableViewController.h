// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTABLEVIEWCONTROLLER_H
#define HUTABLEVIEWCONTROLLER_H

@class UITableViewController, NSHashTable, NSString, NSMapTable;
@protocol HUResizableCellDelegate;



@interface HUTableViewController : UITableViewController <HUResizableCellDelegate>



@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime; // ivar: _childViewControllersAtViewWillAppearTime
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime; // ivar: _childViewControllersAtViewWillDisappearTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell; // ivar: _installedChildViewControllersKeyedByCell
@property (nonatomic) BOOL sectionContentInsetFollowsLayoutMargins; // ivar: _sectionContentInsetFollowsLayoutMargins
@property (readonly) Class superclass;
@property (nonatomic, getter=isViewLayingOut) BOOL viewLayingOut; // ivar: _viewLayingOut


-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)didUpdateRequiredHeightForCell:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif