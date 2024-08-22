// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIESTATE_H
#define CTSTEWIESTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger activeServices; // ivar: _activeServices
@property (nonatomic) NSInteger allowedServices; // ivar: _allowedServices
@property (nonatomic) NSInteger baseReason; // ivar: _baseReason
@property (nonatomic) NSInteger congestedServices; // ivar: _congestedServices
@property (nonatomic) NSInteger offGridCriteriaSatisfiedServices; // ivar: _offGridCriteriaSatisfiedServices
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger subscribedServices; // ivar: _subscribedServices
@property (nonatomic) NSInteger subscriptionDeterminedServices; // ivar: _subscriptionDeterminedServices
@property (nonatomic) NSInteger transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(BOOL)displayInactiveSOSInStatusBar;
-(BOOL)displayStewieInStatusBar;
-(BOOL)isActiveService:(NSInteger)arg0 ;
-(BOOL)isAllowedService:(NSInteger)arg0 ;
-(BOOL)isCongestedService:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToState:(id)arg0 ;
-(BOOL)isOffGridCriteriaSatisfied:(NSInteger)arg0 ;
-(BOOL)isStewieActive;
-(BOOL)isStewieActiveOverBB;
-(BOOL)isStewieActiveOverInternet;
-(BOOL)isSubscribedService:(NSInteger)arg0 ;
-(BOOL)isSubscriptionRequired:(NSInteger)arg0 ;
-(BOOL)isSubscriptionStatusNetworkDetermined:(NSInteger)arg0 ;
-(NSInteger)statusReasonForService:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStewieState:(struct StewieState *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif