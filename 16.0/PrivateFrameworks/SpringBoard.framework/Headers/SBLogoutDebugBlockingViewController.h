// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOGOUTDEBUGBLOCKINGVIEWCONTROLLER_H
#define SBLOGOUTDEBUGBLOCKINGVIEWCONTROLLER_H

@class UIViewController, NSArray, NSDictionary, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface SBLogoutDebugBlockingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSArray *_applicationKeys;
}


@property (retain, nonatomic) NSDictionary *debugBlockingTasks; // ivar: _debugBlockingTasks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 indentationLevelForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_tableView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureCell:(id)arg0 withBlockingTask:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif