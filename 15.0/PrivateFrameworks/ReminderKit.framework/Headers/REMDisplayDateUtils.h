// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMDISPLAYDATEUTILS_H
#define REMDISPLAYDATEUTILS_H

@class NSDateComponents;

#import <Foundation/Foundation.h>


@interface REMDisplayDateUtils : NSObject

@property (retain, nonatomic) NSDateComponents *dueDateComponents; // ivar: _dueDateComponents
@property (retain, nonatomic) NSDateComponents *floatingDateComponents; // ivar: _floatingDateComponents
@property (nonatomic) BOOL hasAlarmDateComponents; // ivar: _hasAlarmDateComponents
@property (nonatomic) BOOL hasDisplayDate; // ivar: _hasDisplayDate
@property (nonatomic) BOOL isInitWithDueDateComponents; // ivar: _isInitWithDueDateComponents
@property (retain, nonatomic) NSDateComponents *nonFloatingDateComponents; // ivar: _nonFloatingDateComponents


+(id)_displayDateWithDueDateComponents:(id)arg0 alarms:(id)arg1 hasAlarmDateComponents:(BOOL)arg2 floatingDateComponents:(id)arg3 nonFloatingDateComponents:(id)arg4 displayDateUtils:(id)arg5 ;
+(id)displayDateWithDueDateComponents:(id)arg0 alarms:(id)arg1 ;
-(id)displayDateWithDueDateComponents:(id)arg0 alarms:(id)arg1 ;
-(id)updateDisplayDateWithDueDateComponents:(id)arg0 alarm:(id)arg1 alarmsProviding:(id)arg2 ;


@end


#endif