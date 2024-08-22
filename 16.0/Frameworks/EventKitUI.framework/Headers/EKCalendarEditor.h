// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDAREDITOR_H
#define EKCALENDAREDITOR_H

@class EKSource, NSString;


#import "EKAbstractCalendarEditor.h"
#import "EKCalendarShareesEditItem.h"
#import "EKCalendarColorEditItem.h"

@interface EKCalendarEditor : EKAbstractCalendarEditor {
    EKCalendarShareesEditItem *_shareesEditItem;
    EKCalendarColorEditItem *_colorEditItem;
    NSUInteger _entityType;
    EKSource *_limitedToSource;
}


@property (retain, nonatomic) NSString *prefillCalendarTitle; // ivar: _prefillCalendarTitle


-(BOOL)_shouldShowDeleteButton;
-(id)initWithCalendar:(id)arg0 eventStore:(id)arg1 entityType:(NSUInteger)arg2 limitedToSource:(id)arg3 ;
-(id)loadEditItems;
-(void)_deleteCalendar;
-(void)_deleteClicked:(id)arg0 ;
-(void)calendarItemStartedEditing:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif