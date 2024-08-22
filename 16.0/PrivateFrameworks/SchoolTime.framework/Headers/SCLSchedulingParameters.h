// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHEDULINGPARAMETERS_H
#define SCLSCHEDULINGPARAMETERS_H

@class NSCalendar, NSString, NSDate;
@protocol SCLSchedulingParameters, NSCopying;

#import <Foundation/Foundation.h>

#import "SCLScheduleSettings.h"

@interface SCLSchedulingParameters : NSObject <SCLSchedulingParameters, NSCopying>



@property (nonatomic) NSUInteger activationSetting; // ivar: _activationSetting
@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *evaluationDate; // ivar: _evaluationDate
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SCLScheduleSettings *scheduleSettings; // ivar: _scheduleSettings
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed; // ivar: _suppressed


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif