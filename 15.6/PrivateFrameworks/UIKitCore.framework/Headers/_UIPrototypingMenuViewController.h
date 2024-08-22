// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROTOTYPINGMENUVIEWCONTROLLER_H
#define _UIPROTOTYPINGMENUVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, UIDebuggingInformationViewController;


#import "UIViewController.h"
#import "_UIContentUnavailableView.h"
#import "UITableView.h"

@interface _UIPrototypingMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIDebuggingInformationViewController>



@property (retain, nonatomic) NSArray *allSettings; // ivar: _allSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIContentUnavailableView *noContentView; // ivar: _noContentView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_reloadSettings:(id)arg0 ;
-(void)_resetSettings:(id)arg0 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif