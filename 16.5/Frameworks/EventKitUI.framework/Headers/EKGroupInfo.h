// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKGROUPINFO_H
#define EKGROUPINFO_H

@class NSMutableArray, NSString, NSArray, NSSet, EKSource;

#import <Foundation/Foundation.h>


@interface EKGroupInfo : NSObject {
    NSMutableArray *_calendars;
    NSUInteger _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
}


@property (nonatomic) NSUInteger accountError; // ivar: _accountError
@property (readonly, retain, nonatomic) NSArray *calendarInfos;
@property (readonly, copy, nonatomic) NSSet *calendarSet;
@property (retain, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) NSUInteger numCalendars;
@property (readonly, nonatomic) NSUInteger numSelectableCalendars;
@property (readonly, nonatomic) NSUInteger numSelectedCalendars;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly, copy, nonatomic) NSSet *selectedCalendarSet;
@property (nonatomic) BOOL showAccountErrorActionButton; // ivar: _showAccountErrorActionButton
@property (readonly, nonatomic) BOOL showAddCalendarButton;
@property (readonly, nonatomic) BOOL showCalendarNameIfSolitary;
@property (nonatomic) BOOL showSelectAllButton; // ivar: _showSelectAllButton
@property (readonly, nonatomic) int sortOrder;
@property (retain, nonatomic) EKSource *source; // ivar: _source
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *typeTitle;


-(id)calendarAtIndex:(NSUInteger)arg0 ;
-(id)copyCalendars;
-(id)description;
-(id)init;
-(id)initWithCustomGroupType:(NSUInteger)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)titleForBeginningOfSentence:(BOOL)arg0 ;
-(void)insertCalendarInfo:(id)arg0 ;
-(void)removeCalendar:(id)arg0 ;
-(void)selectAll;
-(void)selectNone;
-(void)setCustomTitle:(id)arg0 forBeginningOfSentence:(id)arg1 ;


@end


#endif