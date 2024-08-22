// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDAREDITITEMVIEWCONTROLLER_H
#define EKCALENDAREDITITEMVIEWCONTROLLER_H

@class EKEventStore, EKCalendar, NSString, EKEvent;
@protocol EKCalendarChooserDelegate;


#import "EKEditItemViewController.h"
#import "EKCalendarChooser.h"

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate>

 {
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    NSUInteger _entityType;
    EKCalendar *_selectedCalendar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL limitToSource; // ivar: _limitToSource
@property (nonatomic) BOOL onlyShowUnmanagedSources; // ivar: _onlyShowUnmanagedSources
@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 store:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 store:(id)arg1 styleProvider:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 store:(id)arg1 styleProvider:(id)arg2 entityType:(NSUInteger)arg3 ;
-(struct CGSize )preferredContentSize;
-(void)calendarChooserSelectionDidChange:(id)arg0 ;
-(void)loadView;


@end


#endif