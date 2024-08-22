// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTPROPERTYGROUPPICKERVIEWCONTROLLER_H
#define CNCONTACTPROPERTYGROUPPICKERVIEWCONTROLLER_H

@class UIViewController, NSArray, UITableView, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, CNContactGroupPickerDelegate;



@interface CNContactPropertyGroupPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSArray *_pickableGroups;
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CNContactGroupPickerDelegate> *groupPickerDelegate; // ivar: _groupPickerDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (readonly) Class superclass;


+(BOOL)propertiesLeftToPickWithPickedGroups:(id)arg0 policy:(id)arg1 ;
+(BOOL)propertiesLeftToPickWithPickedGroups:(id)arg0 policy:(id)arg1 prohibitedPropertyKeys:(id)arg2 ;
+(id)pickableGroupsWithPickedGroups:(id)arg0 policy:(id)arg1 prohibitedPropertyKeys:(id)arg2 ;
+(id)propertySections;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_loadPickableGroupsWithPickedGroups:(id)arg0 policy:(id)arg1 ;
-(id)initWithGroups:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancel:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif