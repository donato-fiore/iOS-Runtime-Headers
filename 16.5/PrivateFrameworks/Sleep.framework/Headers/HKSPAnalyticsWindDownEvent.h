// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPANALYTICSWINDDOWNEVENT_H
#define HKSPANALYTICSWINDDOWNEVENT_H

@class NSString, NSDictionary, NSArray;
@protocol HKSPAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsWindDownEvent : NSObject <HKSPAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) Class superclass;


+(id)_payloadValueForWindDownAction:(NSUInteger)arg0 ;
-(id)initWithWindDownEventData:(id)arg0 watchProductType:(id)arg1 weeksSinceOnboarded:(id)arg2 ;


@end


#endif