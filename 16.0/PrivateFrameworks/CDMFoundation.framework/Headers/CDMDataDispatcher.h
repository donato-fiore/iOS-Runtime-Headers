// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMDATADISPATCHER_H
#define CDMDATADISPATCHER_H

@class NSString, NLXSchemaNLXClientEventMetadata, SiriNLUSELFRequestLinkData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDMDataDispatcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) NSString *interactionId; // ivar: _interactionId
@property (readonly, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata; // ivar: _selfMetadata
@property (readonly, nonatomic) SiriNLUSELFRequestLinkData *selfRequestLink; // ivar: _selfRequestLink


-(id)getInteractionId;
-(id)getSELFMetadata;
-(id)getSELFRequestLinkData;
-(id)initWithRequestId:(id)arg0 ;
-(void)dispatchCdmRequestData:(id)arg0 ;
-(void)dispatchCdmResponseData:(id)arg0 ;
-(void)dispatchContextUpdateData:(id)arg0 ;
-(void)dispatchCorrectedUtteranceTokenizationData:(id)arg0 ;
-(void)dispatchCurrentTurnTokenizationData:(id)arg0 ;
-(void)dispatchMDData:(id)arg0 withResponse:(id)arg1 ;
-(void)dispatchMRData:(id)arg0 withResponse:(id)arg1 ;
-(void)dispatchNLv4Data:(id)arg0 withResponse:(id)arg1 ;
-(void)dispatchPSCData:(id)arg0 withResponse:(id)arg1 ;
-(void)dispatchPreviousTurnTokenizationData:(id)arg0 ;
-(void)dispatchSNLCData:(id)arg0 withResponse:(id)arg1 ;
-(void)dispatchSpanizationData:(id)arg0 ;
-(void)dispatchUaaPData:(id)arg0 withResponse:(id)arg1 ;
// -(void)insertFeatureStore:(id)arg0 debugLog:(unk)arg1  ;
-(void)waitForQueueCompletion;


@end


#endif