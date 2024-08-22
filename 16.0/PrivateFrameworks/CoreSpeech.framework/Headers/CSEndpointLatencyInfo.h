// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSENDPOINTLATENCYINFO_H
#define CSENDPOINTLATENCYINFO_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CSEndpointLatencyInfo : NSObject

@property (nonatomic) CGFloat firstPktLatency; // ivar: _firstPktLatency
@property (nonatomic) NSUInteger numOfAudioPackets; // ivar: _numOfAudioPackets
@property (nonatomic) NSUInteger numOfValidTrailingPackets; // ivar: _numOfValidTrailingPackets
@property (nonatomic) NSUInteger numOfValidTrailingSpeechPackets; // ivar: _numOfValidTrailingSpeechPackets
@property (retain, nonatomic) NSString *requestMHUUID; // ivar: _requestMHUUID
@property (retain, nonatomic) NSMutableArray *trailingPktLatencies; // ivar: _trailingPktLatencies
@property (retain, nonatomic) NSMutableArray *trailingPktSpeechLatencies; // ivar: _trailingPktSpeechLatencies


-(id)initWithRequestMHUUID:(id)arg0 ;
-(void)_emitMHEndpointLatencyInfo:(id)arg0 withRequestMHUUID:(id)arg1 ;
-(void)addPktInfoWithTimestamp:(NSUInteger)arg0 arrivalTimestamp:(NSUInteger)arg1 currentMachTime:(NSUInteger)arg2 ;
-(void)report;


@end


#endif