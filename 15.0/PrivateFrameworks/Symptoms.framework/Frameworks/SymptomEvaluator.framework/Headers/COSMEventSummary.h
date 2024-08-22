// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSMEVENTSUMMARY_H
#define COSMEVENTSUMMARY_H


#import <Foundation/Foundation.h>


@interface COSMEventSummary : NSObject {
    BOOL _arpFailureEvent;
    BOOL _captivityIndeterminateEvent;
    BOOL _dampeningTimerExpiryEvent;
    BOOL _dataStallThresholdEvent;
    BOOL _excessCertificateErrorsEvent;
    BOOL _imminentStallEvent;
    BOOL _mediaPlaybackStallEvent;
    BOOL _nd6FailureEvent;
    BOOL _wifiChangedSSIDEvent;
}


@property (nonatomic) BOOL arpFailureEvent;
@property (nonatomic) BOOL captivityIndeterminateEvent;
@property (nonatomic) BOOL dampeningTimerExpiryEvent;
@property (nonatomic) BOOL dataStallThresholdEvent;
@property (readonly, nonatomic) NSUInteger eventsInstanceNumber; // ivar: _eventsInstanceNumber
@property (nonatomic) BOOL excessCertificateErrorsEvent;
@property (nonatomic) BOOL imminentStallEvent;
@property (nonatomic) BOOL mediaPlaybackStallEvent;
@property (nonatomic) BOOL nd6FailureEvent;
@property (nonatomic) BOOL wifiChangedSSIDEvent;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(id)description;
-(void)_bumpInstanceNumber;
-(void)clear;


@end


#endif