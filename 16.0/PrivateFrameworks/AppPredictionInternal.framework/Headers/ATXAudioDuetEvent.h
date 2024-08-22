// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAUDIODUETEVENT_H
#define ATXAUDIODUETEVENT_H

@class NSString, NSNumber;
@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXAudioDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSInteger audioState; // ivar: _audioState
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSString *portName; // ivar: _portName
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (readonly, nonatomic) NSNumber *routeChangeReason; // ivar: _routeChangeReason


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithAudioState:(NSInteger)arg0 deviceIdentifier:(id)arg1 portType:(id)arg2 portName:(id)arg3 routeChangeReason:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif