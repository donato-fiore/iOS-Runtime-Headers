// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALENDAREVENTALARMTABLE_H
#define CALENDAREVENTALARMTABLE_H


#import <Foundation/Foundation.h>


@interface CalendarEventAlarmTable : NSObject

@property (nonatomic) BOOL useAllDayAlarms; // ivar: _useAllDayAlarms


-(NSUInteger)countOfPresets;
-(int)intervalForPresetIdentifier:(NSInteger)arg0 ;


@end


#endif