// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONEVENTPROVIDER_H
#define ATXNOTIFICATIONEVENTPROVIDER_H

@class NSArray, NSString;
@protocol ATXModeEntityEventProviderProtocol, ATXStableContactRepresentationProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXModeEntityModelTrainingContext.h"

@interface ATXNotificationEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

 {
    NSArray *_eventTypes;
    ATXModeEntityModelTrainingContext *_trainingContext;
    id<ATXStableContactRepresentationProviderProtocol> *_stableContactRepresentationProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEventFromProvider:(id)arg0 ;
-(BOOL)publisherIsCoreDuetWrapper;
-(CGFloat)secondsSinceReceiptForModeEvent:(id)arg0 ;
-(id)aggregationEventsFromEvent:(id)arg0 ;
-(id)biomePublisherWithBookmark:(id)arg0 ;
-(id)dateIntervalFromEvent:(id)arg0 ;
-(id)eventsFromPublisher;
-(id)init;
-(id)initWithEventType:(NSInteger)arg0 trainingContext:(id)arg1 ;
-(id)initWithEventTypes:(id)arg0 trainingContext:(id)arg1 ;
-(void)updateEntitySpecificFeaturesDict:(id)arg0 aggregationEvent:(id)arg1 isLocalToMode:(BOOL)arg2 ;


@end


#endif