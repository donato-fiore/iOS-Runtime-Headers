// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECONFIGURATIONOPTIONSVIEWCONTROLLER_H
#define WFVARIABLECONFIGURATIONOPTIONSVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString;
@protocol WFVariableConfigurationOptionsViewControllerDelegate;


#import "WFVariableConfigurationOption.h"

@interface WFVariableConfigurationOptionsViewController : UITableViewController

@property (readonly, nonatomic) WFVariableConfigurationOption *defaultOption; // ivar: _defaultOption
@property (weak, nonatomic) NSObject<WFVariableConfigurationOptionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *options; // ivar: _options
@property (nonatomic) NSInteger selectedOptionIndex; // ivar: _selectedOptionIndex
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 userIdentifier:(id)arg1 options:(id)arg2 defaultOption:(id)arg3 selectedOption:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif