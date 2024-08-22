// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARSUBSCRIPTIONDETAILSVIEWCONTROLLER_H
#define EKCALENDARSUBSCRIPTIONDETAILSVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString;
@protocol EKCalendarEditItemDelegate;


#import "EKSubscribedCalendarDescriptionHeader.h"

@interface EKCalendarSubscriptionDetailsViewController : UITableViewController <EKCalendarEditItemDelegate>

 {
    EKSubscribedCalendarDescriptionHeader *_tableHeaderView;
    NSArray *_sections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKCalendarEditItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isNewCalendar;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_tableHeaderView;
-(id)editorForCalendarEditItem:(id)arg0 ;
-(id)initWithCalendar:(id)arg0 store:(id)arg1 ;
-(id)owningNavigationController;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(int)sectionForCalendarEditItem:(id)arg0 ;
-(void)calendarItemStartedEditing:(id)arg0 ;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif