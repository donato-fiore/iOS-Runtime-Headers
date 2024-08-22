// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTCREPORTINGAGENT_H
#define RTCREPORTINGAGENT_H

@class NSDate, NSArray, NSString, RTCReporting, NSNumber, NSMutableDictionary;
@protocol VCAggregatorDelegate, RTCReportingMessageSentNotifier, OS_nw_activity, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCAggregator.h"

@interface RTCReportingAgent : NSObject <VCAggregatorDelegate, RTCReportingMessageSentNotifier>

 {
    unsigned int _callID;
    *void _symptomReporter;
    int _nextUnassignedReportingModuleID;
    NSObject<OS_nw_activity> *_nwActivity;
    NSDate *_conversationTimeBase;
}


@property (retain) VCAggregator *aggregator; // ivar: _aggregator
@property (copy) NSArray *backends; // ivar: _backends
@property int clientType; // ivar: _clientType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isABCForceDisabled) BOOL forceDisableABC; // ivar: _forceDisableABC
@property (readonly) NSUInteger hash;
@property (readonly) int nextUnassignedReportingModuleID;
@property (retain) RTCReporting *reportingObject; // ivar: _reportingObject
@property (readonly) NSObject<OS_dispatch_queue> *reportingQueue; // ivar: _reportingQueue
@property NSNumber *subSessionId; // ivar: _subSessionId
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *userInfoMap; // ivar: _userInfoMap


-(id)deriveFromParentHierarchyToken:(id)arg0 ;
-(id)initWithConfig:(struct ? )arg0 ;
-(id)newAggregatorForClientType:(int)arg0 nwActivity:(id)arg1 ;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
-(unsigned short)reportingCallMethodForClientType:(int)arg0 ;
-(unsigned short)reportingSegmentMethodForClientType:(int)arg0 ;
-(unsigned short)reportingSessionMethodForClientType:(int)arg0 ;
-(unsigned short)reportingSessionTypeForClientType:(int)arg0 ;
-(void)dealloc;
-(void)didSendMessageForReportingClient:(id)arg0 event:(id)arg1 ;
-(void)finalizeAggregation;
-(void)initAdaptiveLearningWithParameters:(id)arg0 ;
-(void)releaseReportingObject;
-(void)report:(id)arg0 segmentDirection:(int)arg1 ;
-(void)reportQR:(id)arg0 ;
-(void)reportingSetNetworkActivityReportingEnabled:(BOOL)arg0 ;
-(void)reportingSetReportCallback:(*unk)arg0 withContext:(*void)arg1 ;
-(void)reportingSymptom:(unsigned int)arg0 withOptionalDict:(struct __CFDictionary *)arg1 ;
-(void)sendAggregatedCallReport;
-(void)sendAggregatedSessionReport;
-(void)sendMessageWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;


@end


#endif