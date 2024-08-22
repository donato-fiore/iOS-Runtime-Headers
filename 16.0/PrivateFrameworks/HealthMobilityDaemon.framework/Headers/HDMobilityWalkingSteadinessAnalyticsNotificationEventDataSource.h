// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONEVENTDATASOURCE_H
#define HDMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONEVENTDATASOURCE_H

@class HDProfile, NSString, NSDate;
@protocol HKMobilityWalkingSteadinessAnalyticsNotificationEventDataSourceProvider;

#import <Foundation/Foundation.h>


@interface HDMobilityWalkingSteadinessAnalyticsNotificationEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationEventDataSourceProvider>

 {
    HDProfile *_profile;
    NSString *_category;
    NSInteger _value;
    NSDate *_date;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)ageWithError:(*id)arg0 ;
-(id)areHealthNotificationsAuthorizedWithError:(*id)arg0 ;
-(id)biologicalSexWithError:(*id)arg0 ;
-(id)daysSinceLastNotificationWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 category:(id)arg1 value:(NSInteger)arg2 date:(id)arg3 ;
-(id)notificationClassificationWithError:(*id)arg0 ;
-(id)notificationTypeWithError:(*id)arg0 ;


@end


#endif