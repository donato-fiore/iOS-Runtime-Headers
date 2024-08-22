// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONEMAILEDITPANEVIEWCONTROLLER_H
#define AKAUTHORIZATIONEMAILEDITPANEVIEWCONTROLLER_H

@class NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "AKAuthorizationPaneViewController.h"
#import "AKAuthorizationScopeChoices.h"

@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 anonymousCellForRow:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 emailCellForRow:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif