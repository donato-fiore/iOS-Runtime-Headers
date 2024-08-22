// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDEBUGGINGINFORMATIONVCDETAILVIEWCONTROLLER_H
#define UIDEBUGGINGINFORMATIONVCDETAILVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "UIViewController.h"
#import "UITableView.h"

@interface UIDebuggingInformationVCDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_tableView;
    NSArray *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *inspectedVC; // ivar: _inspectedVC
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_updateDataAndReload:(BOOL)arg0 ;
-(void)inspectVC:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif