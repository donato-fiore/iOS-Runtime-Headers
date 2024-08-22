// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKREMINDERTIMELINEENTRY_H
#define NTKREMINDERTIMELINEENTRY_H

@class NSDate, NSString, UIColor;


#import "NTKTimelineEntryModel.h"

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel

@property (nonatomic) BOOL displayAsConflicting; // ivar: _displayAsConflicting
@property (retain, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (nonatomic) NSUInteger overlappingReminderCount; // ivar: _overlappingReminderCount
@property (retain, nonatomic) NSString *primaryReminderId; // ivar: _primaryReminderId
@property (retain, nonatomic) UIColor *primaryReminderParentListColor; // ivar: _primaryReminderParentListColor
@property (retain, nonatomic) NSString *primaryReminderTitle; // ivar: _primaryReminderTitle
@property (retain, nonatomic) NSString *secondaryReminderTitle; // ivar: _secondaryReminderTitle


+(id)_analogReminderImageProvider;
+(id)_cornerReminderImageProvider;
+(id)_reminderImageAnalog;
+(id)_reminderImageCorner;
+(id)loadingEntryForFamily:(NSInteger)arg0 ;
+(id)lockedEntryForFamily:(NSInteger)arg0 ;
-(id)_createLargeModularTemplate;
-(id)_createLargeUtilityTemplate;
-(id)_createSignatureCornerTemplate;
-(id)description;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif