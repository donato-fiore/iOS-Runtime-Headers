// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARSHAREESEDITITEM_H
#define EKCALENDARSHAREESEDITITEM_H

@class UILabel, NSString, NSMutableArray;
@protocol EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate;


#import "EKCalendarEditItem.h"

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate>

 {
    UILabel *_descriptionLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *shareeCells; // ivar: _shareeCells
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 ;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)_addPersonCell;
-(id)_shareeCellForName:(id)arg0 detailText:(id)arg1 additionalDetailText:(id)arg2 ;
-(id)_stringForShareeAccessLevel:(NSUInteger)arg0 ;
-(id)_stringForShareeStatus:(NSUInteger)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)eventStoreForShareePickerViewController:(id)arg0 ;
-(id)footerTitle;
-(id)headerTitle;
-(void)_dismissShareePicker;
-(void)_popBackToCalendarEditor:(BOOL)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)reset;
-(void)shareePickerViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)shareeViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)shareeViewControllerDidChangeAccessLevel:(id)arg0 ;


@end


#endif