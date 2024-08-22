// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRSAMPLEVIEWCONTROLLER_H
#define SRSAMPLEVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray;


#import "SRAuthorizationGroup.h"

@interface SRSampleViewController : UITableViewController

@property (retain, nonatomic) SRAuthorizationGroup *authGroup; // ivar: _authGroup
@property (retain, nonatomic) NSString *note; // ivar: _note
@property (retain, nonatomic) NSArray *sampleDataEntries; // ivar: _sampleDataEntries


+(id)sampleViewControllerForAuthGroup:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)prepareEndRowWithText:(id)arg0 detailText:(id)arg1 ;
-(id)prepareExtendedRowWithText:(id)arg0 ;
-(id)sortedKeysForDictionary:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif