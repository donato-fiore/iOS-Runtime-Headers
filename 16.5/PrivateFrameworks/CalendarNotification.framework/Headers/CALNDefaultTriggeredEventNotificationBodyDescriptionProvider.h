// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONBODYDESCRIPTIONPROVIDER_H
#define CALNDEFAULTTRIGGEREDEVENTNOTIFICATIONBODYDESCRIPTIONPROVIDER_H

@class NSString;
@protocol CALNTriggeredEventNotificationBodyDescriptionProvider, CalDateProvider, CALNTravelAdvisoryDescriptionGenerator;

#import <Foundation/Foundation.h>


@interface CALNDefaultTriggeredEventNotificationBodyDescriptionProvider : NSObject <CALNTriggeredEventNotificationBodyDescriptionProvider>



@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNTravelAdvisoryDescriptionGenerator> *travelAdvisoryDescriptionGenerator; // ivar: _travelAdvisoryDescriptionGenerator


-(id)_bodyWithTravelAdvisoryForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 ;
-(id)_bodyWithoutTravelAdvisoryForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 ;
-(id)_ttlDescriptionTypeNumberForTravelAdvisoryTimelinessPeriod:(NSUInteger)arg0 ;
-(id)bodyForSourceClientIdentifier:(id)arg0 sourceNotificationInfo:(id)arg1 bodyContainsTravelAdvice:(*BOOL)arg2 ;
-(id)initWithTravelAdvisoryDescriptionGenerator:(id)arg0 dateProvider:(id)arg1 ;


@end


#endif