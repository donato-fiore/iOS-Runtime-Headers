// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEBUGPREFSVIEWCONTROLLER_H
#define DEBUGPREFSVIEWCONTROLLER_H

@class UITableViewController, NSMutableDictionary, NSArray;



@interface DebugPrefsViewController : UITableViewController

@property (retain, nonatomic) NSMutableDictionary *extraObjects; // ivar: _extraObjects
@property (retain, nonatomic) NSArray *sections; // ivar: _sections


+(BOOL)hasDebugPrefs;
+(BOOL)isDebugPrefs:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)addAccessory:(id)arg0 forMenuItem:(id)arg1 ;
-(void)debugPrefsStop:(id)arg0 ;
-(void)loadDebugMenu;
-(void)presentOverViewController:(id)arg0 ;
-(void)restoreDefaults:(id)arg0 ;
-(void)restoreDefaultsInSections:(id)arg0 ;
-(void)switchChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif