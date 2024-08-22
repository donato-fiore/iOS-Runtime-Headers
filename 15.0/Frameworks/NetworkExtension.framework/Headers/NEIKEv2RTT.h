// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2RTT_H
#define NEIKEV2RTT_H


#import <Foundation/Foundation.h>


@interface NEIKEv2RTT : NSObject

@property (nonatomic) int lastRequestMessageID; // ivar: _lastRequestMessageID
@property (nonatomic) NSUInteger rtt_cur; // ivar: _rtt_cur
@property (nonatomic) NSUInteger rtt_min; // ivar: _rtt_min
@property (nonatomic) NSUInteger rtt_start_time; // ivar: _rtt_start_time
@property (nonatomic) NSUInteger rtt_updated; // ivar: _rtt_updated
@property (nonatomic) NSUInteger rtt_var; // ivar: _rtt_var
@property (nonatomic) NSUInteger rxt_cur; // ivar: _rxt_cur
@property (nonatomic) unsigned short rxt_shift; // ivar: _rxt_shift
@property (nonatomic) NSUInteger srtt; // ivar: _srtt


-(BOOL)getCurrentTime:(struct timeval *)arg0 ;
-(BOOL)startRTTMeasurement:(id)arg0 requestMessageID:(int)arg1 ;
-(NSUInteger)nextRetransmissionInterval;
-(id)init;
-(void)reset;
-(void)resetRTTMeasurement;
-(void)updateRTT:(id)arg0 responseMessageID:(int)arg1 ;


@end


#endif