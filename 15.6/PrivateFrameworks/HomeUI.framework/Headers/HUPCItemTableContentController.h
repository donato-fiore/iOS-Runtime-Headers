// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPCITEMTABLECONTENTCONTROLLER_H
#define HUPCITEMTABLECONTENTCONTROLLER_H

@class PRXCardContentViewController, NSString, NSLayoutConstraint;
@protocol HUPreloadableViewController;


#import "HUItemTableViewController.h"

@interface HUPCItemTableContentController : PRXCardContentViewController <HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUItemTableViewController *itemTableViewController; // ivar: _itemTableViewController
@property (retain, nonatomic) NSLayoutConstraint *itemTableViewHeightConstraint; // ivar: _itemTableViewHeightConstraint
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 itemTableViewController:(id)arg2 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif