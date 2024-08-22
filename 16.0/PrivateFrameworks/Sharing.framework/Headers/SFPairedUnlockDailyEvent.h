// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPAIREDUNLOCKDAILYEVENT_H
#define SFPAIREDUNLOCKDAILYEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFPairedUnlockDailyEvent : NSObject <SFCoreAnalyticsEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic) NSInteger failedAttempts; // ivar: _failedAttempts
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger passcodeUnlocks; // ivar: _passcodeUnlocks
@property (nonatomic) BOOL phoneAutoUnlockEnabled; // ivar: _phoneAutoUnlockEnabled
@property (copy, nonatomic) NSString *phoneHardwareModel; // ivar: _phoneHardwareModel
@property (copy, nonatomic) NSString *phoneSoftwareVersion; // ivar: _phoneSoftwareVersion
@property (nonatomic) NSInteger successfulAttempts; // ivar: _successfulAttempts
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalAttempts; // ivar: _totalAttempts
@property (nonatomic) NSInteger totalUnlocks; // ivar: _totalUnlocks


+(id)eventName;
-(void)submitEvent;


@end


#endif