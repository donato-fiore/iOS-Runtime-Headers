// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HOMEKITEVENTREMOTELOGOUTEVENT_H
#define HOMEKITEVENTREMOTELOGOUTEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol;


#import "AWDHomeKitRemoteLogout.h"

@interface HomeKitEventRemoteLogoutEvent : HMMLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AWDHomeKitRemoteLogout *metric; // ivar: _metric
@property (readonly) Class superclass;


-(id)initWithSessionID:(id)arg0 ;
-(unsigned int)AWDMessageType;
-(void)setError:(id)arg0 ;


@end


#endif