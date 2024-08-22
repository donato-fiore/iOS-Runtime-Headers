// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFIPVIEWCONTROLLER_H
#define WFIPVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "WFInsetTableViewController.h"
#import "WFAppearanceProxy.h"

@interface WFIPViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) NSArray *addresses; // ivar: _addresses
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy; // ivar: _appearanceProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *prefixes; // ivar: _prefixes
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAddresses:(id)arg0 prefixLengths:(id)arg1 ;
-(id)initWithAddresses:(id)arg0 prefixLengths:(id)arg1 appearanceProxy:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif