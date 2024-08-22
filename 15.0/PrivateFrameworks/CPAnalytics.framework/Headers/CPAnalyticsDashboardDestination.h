// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPANALYTICSDASHBOARDDESTINATION_H
#define CPANALYTICSDASHBOARDDESTINATION_H

@class NSArray, NSString;
@protocol CPAnalyticsDestination;

#import <Foundation/Foundation.h>

#import "CPAnalytics.h"

@interface CPAnalyticsDashboardDestination : NSObject <CPAnalyticsDestination>



@property (readonly, nonatomic) NSArray *allErrorProperties;
@property (readonly, nonatomic) NSArray *allMediaProperties;
@property (readonly, nonatomic) NSArray *allStandardProperties;
@property (readonly, weak, nonatomic) CPAnalytics *cpAnalyticsInstance; // ivar: _cpAnalyticsInstance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isMediaEvent:(id)arg0 ;
-(id)buildCoreAnalyticsEventPayloadWithProperties:(id)arg0 fromSourceEvent:(id)arg1 intoTargetEventPayload:(id)arg2 ;
-(id)init;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)processEvent:(id)arg0 ;
-(void)reportMalformedEvent:(id)arg0 malformationDescriptionWithFormat:(id)arg1 ;
-(void)sendCoreAnalyticsEventWithStandardPropertiesForEventWithName:(id)arg0 fromSourceEvent:(id)arg1 payload:(id)arg2 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif