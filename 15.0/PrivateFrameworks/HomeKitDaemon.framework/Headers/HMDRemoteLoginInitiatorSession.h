// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGININITIATORSESSION_H
#define HMDREMOTELOGININITIATORSESSION_H

@class HMFObject, HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol>, NSString;



@interface HMDRemoteLoginInitiatorSession : HMFObject

@property (retain, nonatomic) HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric; // ivar: _metric
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID


-(id)description;
-(id)initWithSessionID:(id)arg0 ;
-(void)dealloc;


@end


#endif