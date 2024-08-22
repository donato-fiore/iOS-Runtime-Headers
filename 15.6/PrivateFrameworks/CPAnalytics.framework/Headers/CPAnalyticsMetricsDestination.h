// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSMETRICSDESTINATION_H
#define CPANALYTICSMETRICSDESTINATION_H

@class NSString, NSMapTable;
@protocol CPAnalyticsDestination;

#import <Foundation/Foundation.h>


@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) NSMapTable *eventRoutes; // ivar: _eventRoutes
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg0 withPropertiesToInclude:(id)arg1 ;
-(id)_eventRoutesFromConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg0 eventRoute:(id)arg1 ;
-(void)processEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif