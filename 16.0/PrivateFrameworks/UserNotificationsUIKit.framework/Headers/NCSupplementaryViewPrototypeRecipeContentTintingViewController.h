// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTTINTINGVIEWCONTROLLER_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPECONTENTTINTINGVIEWCONTROLLER_H

@class UITableView, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "NCSupplementaryViewPrototypeRecipeViewController.h"

@interface NCSupplementaryViewPrototypeRecipeContentTintingViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)title;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_setTextColor:(id)arg0 ;
-(void)_setTintColor:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;


@end


#endif