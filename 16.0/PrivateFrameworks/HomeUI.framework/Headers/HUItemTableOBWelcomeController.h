// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUITEMTABLEOBWELCOMECONTROLLER_H
#define HUITEMTABLEOBWELCOMECONTROLLER_H

@class OBWelcomeController, NSString, NSLayoutConstraint;
@protocol HUPreloadableViewController;


#import "HUItemTableViewController.h"

@interface HUItemTableOBWelcomeController : OBWelcomeController <HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUItemTableViewController *itemTableViewController; // ivar: _itemTableViewController
@property (retain, nonatomic) NSLayoutConstraint *itemTableViewHeightConstraint; // ivar: _itemTableViewHeightConstraint
@property (readonly) Class superclass;


-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 itemTableViewController:(id)arg4 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif