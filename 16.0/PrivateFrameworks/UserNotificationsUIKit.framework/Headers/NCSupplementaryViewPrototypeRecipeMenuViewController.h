// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSUPPLEMENTARYVIEWPROTOTYPERECIPEMENUVIEWCONTROLLER_H
#define NCSUPPLEMENTARYVIEWPROTOTYPERECIPEMENUVIEWCONTROLLER_H

@class UITableView, NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, NCNotificationListBaseComponent;


#import "NCSupplementaryViewPrototypeRecipeViewController.h"

@interface NCSupplementaryViewPrototypeRecipeMenuViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource, NCNotificationListBaseComponent>

 {
    UITableView *_tableView;
    NSArray *_viewControllers;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif