// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTAVAILABILITYEDITVIEWCONTROLLER_H
#define EKEVENTAVAILABILITYEDITVIEWCONTROLLER_H

@class NSMutableArray, UITableView, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "EKEditItemViewController.h"

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>

 {
    NSUInteger _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}


@property (nonatomic) NSInteger availability; // ivar: _availability
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedAvailabilities;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_selectRow:(NSUInteger)arg0 ;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif