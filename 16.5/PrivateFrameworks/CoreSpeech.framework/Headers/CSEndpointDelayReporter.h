// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSENDPOINTDELAYREPORTER_H
#define CSENDPOINTDELAYREPORTER_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface CSEndpointDelayReporter : NSObject

@property (nonatomic) BOOL didReportEndpointDelay; // ivar: _didReportEndpointDelay
@property (nonatomic) NSUInteger endpointBufferHostTime; // ivar: _endpointBufferHostTime
@property (nonatomic) CGFloat endpointTimeInMs; // ivar: _endpointTimeInMs
@property (retain, nonatomic) NSString *requestMHUUID; // ivar: _requestMHUUID
@property (nonatomic) NSUInteger stopRecordingHostTime; // ivar: _stopRecordingHostTime
@property (retain, nonatomic) NSUUID *turnIdentifier; // ivar: _turnIdentifier
@property (nonatomic) NSUInteger userSpeakingEndedHostTime; // ivar: _userSpeakingEndedHostTime
@property (nonatomic) CGFloat userSpeakingEndedTimeInMs; // ivar: _userSpeakingEndedTimeInMs
@property (nonatomic) NSUInteger userSpeakingStartedHostTime; // ivar: _userSpeakingStartedHostTime
@property (nonatomic) CGFloat userSpeakingStartedTimeInMs; // ivar: _userSpeakingStartedTimeInMs


-(NSUInteger)estimatedUserSpeakingEndedHostTime;
-(NSUInteger)estimatedUserSpeakingStartedHostTime;
-(id)initWithRequestMHUUID:(id)arg0 turnIdentifier:(id)arg1 ;
-(void)_reportUEIUserSpeakingContext;
-(void)reportEndpointDelayIfNeed;
-(void)reset;
-(void)setSpeechRecognizedContext:(id)arg0 withEndpointerMetrics:(id)arg1 ;


@end


#endif