// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFKNOWNNETWORKSVIEWCONTROLLER_H
#define WFKNOWNNETWORKSVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray;
@protocol WFKnownNetworksViewControllerDelegate;



@interface WFKnownNetworksViewController : UITableViewController

@property (retain, nonatomic) NSMutableArray *knownNetworksArray; // ivar: _knownNetworksArray
@property (weak, nonatomic) NSObject<WFKnownNetworksViewControllerDelegate> *knownNetworksDelegate; // ivar: _knownNetworksDelegate


-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif