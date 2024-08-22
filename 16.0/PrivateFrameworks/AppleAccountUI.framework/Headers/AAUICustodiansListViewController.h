// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUICUSTODIANSLISTVIEWCONTROLLER_H
#define AAUICUSTODIANSLISTVIEWCONTROLLER_H

@class NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "AAUIOBTableWelcomeController.h"
#import "AAUIOBCustodiansListViewModel.h"
#import "AAUIProfilePictureStore.h"

@interface AAUICustodiansListViewController : AAUIOBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>

 {
    AAUIOBCustodiansListViewModel *_viewModel;
    AAUIProfilePictureStore *_pictureStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_pictureStore;
-(id)initWithContacts:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_setupTableView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif