// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HOMEKITEVENTREMOTELOGINEVENT_H
#define HOMEKITEVENTREMOTELOGINEVENT_H

@class HMMLogEvent, NSString, NSDate;
@protocol HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol;


#import "AWDHomeKitRemoteLogin.h"

@interface HomeKitEventRemoteLoginEvent : HMMLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AWDHomeKitRemoteLogin *metric; // ivar: _metric
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 ;
-(unsigned int)AWDMessageType;
-(void)setError:(id)arg0 ;


@end


#endif