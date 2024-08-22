// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONNOTIFICATIONMETRIC_H
#define HKMEDICATIONNOTIFICATIONMETRIC_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>

#import "HKMedicationAnalyticsGenericFieldsProvider.h"

@interface HKMedicationNotificationMetric : NSObject {
    HKMedicationAnalyticsGenericFieldsProvider *_genericDataProvider;
}


@property (readonly, nonatomic) NSNumber *areHealthNotificationsAuthorized; // ivar: _areHealthNotificationsAuthorized
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (nonatomic) NSInteger interactionType; // ivar: _interactionType
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)eventName;
-(id)description;
-(id)initWithType:(NSInteger)arg0 areHealthNotificationsAuthorized:(id)arg1 dataSource:(id)arg2 ;


@end


#endif