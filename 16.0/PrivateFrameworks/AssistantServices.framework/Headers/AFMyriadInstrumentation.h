// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMYRIADINSTRUMENTATION_H
#define AFMYRIADINSTRUMENTATION_H

@class CDASchemaCDAScoreBoosters;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFMyriadInstrumentation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CDASchemaCDAScoreBoosters *_currentBoost;
}




-(id)_boostTypeAsString:(unsigned char)arg0 ;
-(id)_createSchemaClientEvent:(id)arg0 ;
-(id)init;
-(void)_logRequestLinkMessageRequestId:(id)arg0 cdaId:(id)arg1 ;
-(void)_sendAndLogClientEvent:(id)arg0 stState:(int)arg1 atTimestamp:(NSUInteger)arg2 ;
-(void)logCDADeviceStateActivityEnded:(int)arg0 withCdaId:(id)arg1 withTimestamp:(NSUInteger)arg2 ;
-(void)logCDADeviceStateActivityStartedOrChanged:(int)arg0 withTrigger:(int)arg1 withCdaId:(id)arg2 withTimestamp:(NSUInteger)arg3 ;
-(void)logCDAElectionAdvertisingEnded:(int)arg0 withCdaId:(id)arg1 withTimestamp:(NSUInteger)arg2 ;
-(void)logCDAElectionAdvertisingEnding:(int)arg0 withCdaId:(id)arg1 withTimestamp:(NSUInteger)arg2 ;
-(void)logCDAElectionAdvertisingStarted:(int)arg0 withCdaId:(id)arg1 withTimestamp:(NSUInteger)arg2 ;
-(void)logCDAElectionAdvertisingStarting:(int)arg0 withDelay:(float)arg1 withInterval:(float)arg2 withCdaId:(id)arg3 withTimestamp:(NSUInteger)arg4 ;
-(void)logCDAElectionDecisionMade:(int)arg0 withDecision:(int)arg1 withPreviousDecision:(int)arg2 timeSincePreviousDecision:(NSUInteger)arg3 withWinningDevice:(id)arg4 withThisDevice:(id)arg5 withParticipants:(id)arg6 withRawScore:(unsigned int)arg7 withBoost:(id)arg8 withCdaId:(id)arg9 currentRequestId:(id)arg10 withTimestamp:(NSUInteger)arg11 ;
-(void)logCDAElectionDecisionMadeDebug:(int)arg0 withCrossDeviceArbitrationAllowed:(BOOL)arg1 advertisementData:(id)arg2 withDeviceGroup:(unsigned int)arg3 withCdaId:(id)arg4 withTimestamp:(NSUInteger)arg5 ;
-(void)logCDAElectionTimerEnded:(int)arg0 withCdaId:(id)arg1 withTimestamp:(NSUInteger)arg2 ;
-(void)updateBoost:(unsigned char)arg0 value:(unsigned int)arg1 ;
-(void)updateIsTrump:(BOOL)arg0 withReason:(int)arg1 ;


@end


#endif