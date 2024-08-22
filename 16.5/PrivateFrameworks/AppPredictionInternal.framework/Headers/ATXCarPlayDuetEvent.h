// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCARPLAYDUETEVENT_H
#define ATXCARPLAYDUETEVENT_H

@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXCarPlayDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSInteger carPlayState; // ivar: _carPlayState


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(NSInteger)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(id)description;
-(id)identifier;
-(id)initWithCarPlayConnectedState:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif