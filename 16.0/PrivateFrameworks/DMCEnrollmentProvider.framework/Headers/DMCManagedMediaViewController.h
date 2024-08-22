// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCMANAGEDMEDIAVIEWCONTROLLER_H
#define DMCMANAGEDMEDIAVIEWCONTROLLER_H

@class MDMBook;


#import "DMCProfileTableViewController.h"
#import "DMCApplicationProxy.h"
#import "DMCProfileViewModel.h"

@interface DMCManagedMediaViewController : DMCProfileTableViewController

@property (retain, nonatomic) DMCApplicationProxy *app; // ivar: _app
@property (retain, nonatomic) MDMBook *book; // ivar: _book
@property (retain, nonatomic) DMCProfileViewModel *profileViewModel; // ivar: _profileViewModel


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithProfileViewModel:(id)arg0 managedAppBundleID:(id)arg1 ;
-(id)initWithProfileViewModel:(id)arg0 managedBook:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_profileChanged:(id)arg0 ;
-(void)_setup;


@end


#endif