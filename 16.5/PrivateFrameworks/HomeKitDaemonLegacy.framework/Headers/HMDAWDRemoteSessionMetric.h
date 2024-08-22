// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAWDREMOTESESSIONMETRIC_H
#define HMDAWDREMOTESESSIONMETRIC_H

@class HMMLogEvent, NSDate, NSString, NSUUID;
@protocol HMDAWDLogEvent;



@interface HMDAWDRemoteSessionMetric : HMMLogEvent <HMDAWDLogEvent>



@property (getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic) int closeReason; // ivar: _closeReason
@property (retain, nonatomic) NSDate *creation; // ivar: _creation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role; // ivar: _role
@property (readonly, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL submitted; // ivar: _submitted
@property (readonly) Class superclass;


+(int)closeReasonFromError:(id)arg0 ;
-(id)initWithClientMode:(BOOL)arg0 sessionID:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;
-(void)open;


@end


#endif