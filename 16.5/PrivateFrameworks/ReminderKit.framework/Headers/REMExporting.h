// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMEXPORTING_H
#define REMEXPORTING_H


#import <Foundation/Foundation.h>


@interface REMExporting : NSObject



+(BOOL)_updateICSComponentWithReminder:(id)arg0 icsCalendarItem:(id)arg1 ;
+(id)_icsCalendarItemsFromReminders:(id)arg0 exportingOption:(NSInteger)arg1 ;
+(id)exportICSCalendarFromReminders:(id)arg0 ;
+(id)exportICSCalendarFromReminders:(id)arg0 exportingOption:(NSInteger)arg1 ;
+(id)icsTodoFromReminder:(id)arg0 ;
+(id)icsTodoFromReminder:(id)arg0 exportingOption:(NSInteger)arg1 ;


@end


#endif