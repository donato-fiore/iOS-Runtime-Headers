// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCRMCONFIGURATIONSVIEWCONTROLLER_H
#define DMCRMCONFIGURATIONSVIEWCONTROLLER_H

@class NSArray;


#import "DMCProfileTableViewController.h"
#import "RMConfigurationsSpecifierProvider.h"

@interface DMCRMConfigurationsViewController : DMCProfileTableViewController

@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider; // ivar: _rmSpecifierProvider
@property (retain, nonatomic) NSArray *rmTableCells; // ivar: _rmTableCells


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithRMConfigurationsSpecifierProvider:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_rmConfigsChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif