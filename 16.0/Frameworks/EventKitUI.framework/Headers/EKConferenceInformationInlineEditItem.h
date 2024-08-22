// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCONFERENCEINFORMATIONINLINEEDITITEM_H
#define EKCONFERENCEINFORMATIONINLINEEDITITEM_H

@class NSString;
@protocol EKCalendarItemInlineEditItem;


#import "EKEventEditItem.h"
#import "CalendarNotesCell.h"

@interface EKConferenceInformationInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem>

 {
    CalendarNotesCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isInline;
-(BOOL)isSaveable;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)searchStringForEventAutocomplete;
-(void)reset;


@end


#endif