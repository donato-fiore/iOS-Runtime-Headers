// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSACCESSCODEEVENT_H
#define HFANALYTICSACCESSCODEEVENT_H

@class NSNumber, NSString, HMHome;


#import "HFAnalyticsEvent.h"
#import "HFPinCodeItem.h"

@interface HFAnalyticsAccessCodeEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *duringOnboarding; // ivar: _duringOnboarding
@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger operationType; // ivar: _operationType
@property (retain, nonatomic) HFPinCodeItem *pinCodeItem; // ivar: _pinCodeItem
@property (retain, nonatomic) NSNumber *ratioOfUserPINCodes; // ivar: _ratioOfUserPINCodes
@property (retain, nonatomic) NSNumber *totalGuestPINCodes; // ivar: _totalGuestPINCodes


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif