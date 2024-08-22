// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPLAUNCH_H
#define _ATXAPPLAUNCH_H

@class NSString, NSDate, NSTimeZone;
@protocol ATXLaunchEventProtocol, ATXTimedEventProtocol;

#import <Foundation/Foundation.h>


@interface _ATXAppLaunch : NSObject <ATXLaunchEventProtocol, ATXTimedEventProtocol>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLaunch:(id)arg0 ;
-(id)eventTime;
-(id)init;
-(id)initWithBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 ;


@end


#endif