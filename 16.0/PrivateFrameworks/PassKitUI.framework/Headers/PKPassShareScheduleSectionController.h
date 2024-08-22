// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHARESCHEDULESECTIONCONTROLLER_H
#define PKPASSSHARESCHEDULESECTIONCONTROLLER_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSDateFormatter, PKPassShareTimeConfiguration;
@protocol PKWeekdaySelectorDelegate, PKPassShareScheduleSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassShareScheduleSectionController : PKPassShareSectionController <PKWeekdaySelectorDelegate>

 {
    NSMutableArray *_dayRowItems;
    NSArray *_dateRowItems;
    NSMutableDictionary *_tags;
    NSDateFormatter *_formatter;
    BOOL _isEditable;
    PKPassShareTimeConfiguration *_possibleTimeConfiguration;
    id<PKPassShareScheduleSectionControllerDelegate> *_delegate;
}


@property (retain, nonatomic) PKPassShareTimeConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled


-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)_formattedDate:(id)arg0 ;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)decorateCell:(id)arg0 forScheduleRowItem:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 possibleTimeConfiguration:(id)arg1 isEditable:(BOOL)arg2 isDisabled:(BOOL)arg3 delegate:(id)arg4 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_updateRowsIfNecessary;
-(void)decorateDayPicker:(id)arg0 forScheduleRowItem:(id)arg1 ;
-(void)didSelectItem:(id)arg0 ;
-(void)timePickerValueDidChange:(id)arg0 ;
-(void)toggleValueChanged:(id)arg0 ;
-(void)weekdaySelector:(id)arg0 didUpdateSelectedWeekdays:(id)arg1 ;


@end


#endif