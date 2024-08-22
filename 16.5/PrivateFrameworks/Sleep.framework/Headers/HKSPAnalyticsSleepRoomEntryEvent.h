// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPANALYTICSSLEEPROOMENTRYEVENT_H
#define HKSPANALYTICSSLEEPROOMENTRYEVENT_H

@class NSString, NSDictionary, NSArray;
@protocol HKSPAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsSleepRoomEntryEvent : NSObject <HKSPAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) Class superclass;


+(id)_payloadWithProvidenceInfo:(id)arg0 isOnboarded:(BOOL)arg1 ;
-(id)initWithProvenanceInfo:(id)arg0 isOnboarded:(BOOL)arg1 ;


@end


#endif