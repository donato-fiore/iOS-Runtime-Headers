// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSEVENT_H
#define CPANALYTICSEVENT_H

@class NSString, NSCalendar, NSDictionary, NSDate;
@protocol CPAnalyticsEventProtocol;

#import <Foundation/Foundation.h>

#import "CPAnalyticsSystemProperties.h"

@interface CPAnalyticsEvent : NSObject <CPAnalyticsEventProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties; // ivar: _systemProperties
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)_dayOfWeekFromDate:(id)arg0 ;
+(id)_hourOfDayFromDate:(id)arg0 ;
+(void)initialize;
-(id)copyRawPayload;
-(id)initWithName:(id)arg0 payload:(id)arg1 systemProperties:(id)arg2 ;
-(id)propertyForKey:(id)arg0 ;


@end


#endif