// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPAIREDUNLOCKEVENT_H
#define SFPAIREDUNLOCKEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFPairedUnlockEvent : NSObject <SFCoreAnalyticsEvent>



@property (nonatomic) unsigned short attemptHourLocal; // ivar: _attemptHourLocal
@property (nonatomic) NSString *bannerDismissReason; // ivar: _bannerDismissReason
@property (nonatomic) NSInteger bannerDismissalCount; // ivar: _bannerDismissalCount
@property (nonatomic) BOOL canRelock; // ivar: _canRelock
@property (nonatomic) unsigned int confirmationDuration; // ivar: _confirmationDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic) unsigned short failureReason; // ivar: _failureReason
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int keyExchangeDuration; // ivar: _keyExchangeDuration
@property (nonatomic) BOOL phoneAutoUnlockEnabled; // ivar: _phoneAutoUnlockEnabled
@property (nonatomic) NSInteger phoneState; // ivar: _phoneState
@property (nonatomic) unsigned int pillDelay; // ivar: _pillDelay
@property (nonatomic) BOOL relockedWatch; // ivar: _relockedWatch
@property (nonatomic) BOOL retriedWithEscrowRecord; // ivar: _retriedWithEscrowRecord
@property (nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly) Class superclass;
@property (nonatomic) unsigned int totalUnlockDuration; // ivar: _totalUnlockDuration
@property (nonatomic) unsigned int totalUnlockProcessDuration; // ivar: _totalUnlockProcessDuration
@property (nonatomic) BOOL usingEscrowRecord; // ivar: _usingEscrowRecord
@property (copy, nonatomic) NSString *watchHardwareModel; // ivar: _watchHardwareModel
@property (copy, nonatomic) NSString *watchSoftwareVersion; // ivar: _watchSoftwareVersion


+(id)eventName;
-(void)submitEvent;


@end


#endif