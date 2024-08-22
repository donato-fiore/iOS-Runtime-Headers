// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16HEALTHEXPERIENCE44ADVERTISABLEFEATUREINTERACTIONANALYTICSEVENT_H
#define _TTC16HEALTHEXPERIENCE44ADVERTISABLEFEATUREINTERACTIONANALYTICSEVENT_H

@class SwiftObject, NSString;
@protocol HKAnalyticsEvent;



@interface _TtC16HealthExperience44AdvertisableFeatureInteractionAnalyticsEvent : SwiftObject <HKAnalyticsEvent>

 {
    ? location;
    ? featureModels;
}


@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) BOOL isEventSubmissionIHAGated;


-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif