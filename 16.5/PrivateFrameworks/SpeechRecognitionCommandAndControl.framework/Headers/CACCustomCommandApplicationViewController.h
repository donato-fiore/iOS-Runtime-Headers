// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCUSTOMCOMMANDAPPLICATIONVIEWCONTROLLER_H
#define CACCUSTOMCOMMANDAPPLICATIONVIEWCONTROLLER_H

@class UITableViewController, NSDictionary, NSArray;
@protocol CACCustomCommandApplicationViewControllerDelegate;


#import "CACSpokenCommandItem.h"

@interface CACCustomCommandApplicationViewController : UITableViewController

@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames; // ivar: _applicationIdentifiersToNames
@property (retain, nonatomic) CACSpokenCommandItem *commandItem; // ivar: _commandItem
@property (weak, nonatomic) NSObject<CACCustomCommandApplicationViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *sortedIdentifiers; // ivar: _sortedIdentifiers
@property (retain, nonatomic) NSArray *sortedNames; // ivar: _sortedNames


-(BOOL)_canShowWhileLocked;
-(BOOL)isModalInPresentation;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif