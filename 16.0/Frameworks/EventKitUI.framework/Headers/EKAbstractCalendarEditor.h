// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKABSTRACTCALENDAREDITOR_H
#define EKABSTRACTCALENDAREDITOR_H

@class UITableViewController, NSArray, EKCalendar, NSString, EKEventStore;
@protocol EKCalendarEditItemDelegate, EKUIManagedViewController, EKCalendarEditorDelegate, EKStyleProvider;



@interface EKAbstractCalendarEditor : UITableViewController <EKCalendarEditItemDelegate, EKUIManagedViewController>

 {
    CGSize _preferredContentSize;
    NSArray *_editItems;
    BOOL _isNewCalendar;
}


@property (retain, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKCalendarEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<EKStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;


+(id)createNewCalendarForEntityType:(NSUInteger)arg0 inEventStore:(id)arg1 ;
-(BOOL)canManagePresentationStyle;
-(BOOL)isModalInPresentation;
-(BOOL)isNewCalendar;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)wantsManagement;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)editItems;
-(id)editorForCalendarEditItem:(id)arg0 ;
-(id)initWithCalendar:(id)arg0 eventStore:(id)arg1 entityType:(NSUInteger)arg2 limitedToSource:(id)arg3 ;
-(id)leftButton;
-(id)loadEditItems;
-(id)owningNavigationController;
-(id)rightButton;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(int)sectionForCalendarEditItem:(id)arg0 ;
-(struct CGSize )calculatePreferredContentSize;
-(struct CGSize )preferredContentSize;
-(void)_eventStoreChanged:(id)arg0 ;
-(void)_localeChanged;
-(void)_presentValidationAlert:(id)arg0 ;
-(void)calendarItemStartedEditing:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)didSaveCalendar:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)loadView;
-(void)reloadEditItems;
-(void)resetBackgroundColor;
-(void)saveCalendar;
-(void)saveChanges;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setupForCalendar;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredContentSize;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willSaveCalendar:(id)arg0 ;


@end


#endif