// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSPANEVIEWCONTROLLER_H
#define CBSPANEVIEWCONTROLLER_H

@class UIButton;


#import "CBSTableViewController.h"

@interface CBSPaneViewController : CBSTableViewController

@property (retain, nonatomic) UIButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) UIButton *secondaryButton; // ivar: _secondaryButton


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_setupPrimaryButton;
-(void)_setupSecondaryButton;
-(void)primaryButtonTapped:(id)arg0 ;
-(void)secondaryButtonTapped:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif