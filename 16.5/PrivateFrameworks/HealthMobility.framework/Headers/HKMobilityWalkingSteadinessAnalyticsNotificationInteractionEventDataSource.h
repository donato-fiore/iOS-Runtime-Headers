// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONINTERACTIONEVENTDATASOURCE_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONINTERACTIONEVENTDATASOURCE_H

@class HKHealthStore, NSString;
@protocol HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSourceProvider;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSourceProvider>

 {
    HKHealthStore *_healthStore;
    NSString *_category;
    NSString *_actionIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_walkingSteadinessEventValueForCategory:(id)arg0 ;
-(id)ageWithError:(*id)arg0 ;
-(id)biologicalSexWithError:(*id)arg0 ;
-(id)initWithHealthStore:(id)arg0 category:(id)arg1 action:(id)arg2 ;
-(id)notificationClassificationWithError:(*id)arg0 ;
-(id)notificationInteractionTypeWithError:(*id)arg0 ;
-(id)notificationTypeWithError:(*id)arg0 ;


@end


#endif