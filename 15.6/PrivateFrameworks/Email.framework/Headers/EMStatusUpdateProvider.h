// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMSTATUSUPDATEPROVIDER_H
#define EMSTATUSUPDATEPROVIDER_H

@class NSDateFormatter;

#import <Foundation/Foundation.h>


@interface EMStatusUpdateProvider : NSObject {
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_weekdayFormatter;
    NSDateFormatter *_dateFormatter;
}




-(NSUInteger)statusUpdateWithDate:(id)arg0 now:(id)arg1 nextTransition:(*id)arg2 ;
-(id)_statusUpdatedAtTimeWithDate:(id)arg0 ;
-(id)_statusUpdatedMinutesAgoWithDate:(id)arg0 now:(id)arg1 ;
-(id)_statusUpdatedOnDateWithDate:(id)arg0 ;
-(id)_statusUpdatedOnDayWithDate:(id)arg0 ;
-(id)statusUpdateStringWithDate:(id)arg0 now:(id)arg1 nextTransition:(*id)arg2 ;


@end


#endif