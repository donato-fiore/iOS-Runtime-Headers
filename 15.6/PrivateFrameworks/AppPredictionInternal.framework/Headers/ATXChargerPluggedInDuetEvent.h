// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCHARGERPLUGGEDINDUETEVENT_H
#define ATXCHARGERPLUGGEDINDUETEVENT_H

@class NSNumber;
@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXChargerPluggedInDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *adapterType; // ivar: _adapterType
@property (readonly, nonatomic) NSInteger chargerPluggedInState; // ivar: _chargerPluggedInState


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithChargerPluggedInState:(NSInteger)arg0 adapterType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif