// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPLAUNCHDUETEVENT_H
#define ATXAPPLAUNCHDUETEVENT_H

@class NSString;
@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXAppLaunchDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSInteger appLaunchState; // ivar: _appLaunchState
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *launchReason; // ivar: _launchReason


+(BOOL)_acceptableLaunchReason:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithBundleId:(id)arg0 appLaunchState:(NSInteger)arg1 launchReason:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif