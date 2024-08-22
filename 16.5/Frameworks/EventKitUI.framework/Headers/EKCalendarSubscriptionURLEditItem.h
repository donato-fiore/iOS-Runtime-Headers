// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARSUBSCRIPTIONURLEDITITEM_H
#define EKCALENDARSUBSCRIPTIONURLEDITITEM_H

@class UITableViewCell, NSString;
@protocol UITextFieldDelegate, EKCalendarSubscriptionURLEditItemDelegate;


#import "EKCalendarEditItem.h"

@interface EKCalendarSubscriptionURLEditItem : EKCalendarEditItem <UITextFieldDelegate>

 {
    UITableViewCell *_cell;
    NSString *_urlString;
    BOOL _inWaitPeriodSinceLastChange;
    NSString *_lastNotifiedURLString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editable; // ivar: _editable
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<EKCalendarSubscriptionURLEditItemDelegate> *urlEditItemDelegate; // ivar: _urlEditItemDelegate
@property (retain, nonatomic) NSString *urlString;


-(BOOL)becomeFirstResponder;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSInteger)_cellSelectionStyleForEditable:(BOOL)arg0 ;
-(id)_textFieldColorForEditable:(BOOL)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)headerTitle;
-(void)_notifyDelegateThatURLStringChangedIfNeeded;
-(void)_textFieldChanged;
-(void)_waitPeriodElapsedSinceLastTextFieldChange;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif