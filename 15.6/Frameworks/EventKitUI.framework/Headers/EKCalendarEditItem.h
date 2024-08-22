// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDAREDITITEM_H
#define EKCALENDAREDITITEM_H

@class EKEventStore, EKCalendar;
@protocol EKCalendarEditItemDelegate, EKStyleProvider;

#import <Foundation/Foundation.h>


@interface EKCalendarEditItem : NSObject {
    EKEventStore *_store;
}


@property (readonly, nonatomic) EKCalendar *calendar; // ivar: _calendar
@property (weak, nonatomic) NSObject<EKCalendarEditItemDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<EKStyleProvider> *styleProvider; // ivar: _styleProvider


-(BOOL)becomeFirstResponder;
-(BOOL)calendarEditor:(id)arg0 shouldSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)configureWithCalendar:(id)arg0 ;
-(BOOL)configureWithCalendar:(id)arg0 store:(id)arg1 ;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)footerTitle;
-(id)headerTitle;
-(void)applyStyleProviderToCell:(id)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)layoutForWidth:(CGFloat)arg0 ;
-(void)reset;


@end


#endif