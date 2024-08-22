// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSDURATIONESTIMATIONTASK_H
#define VSDURATIONESTIMATIONTASK_H

@class NSOperation, NSString, NSError, VSInstrumentMetrics, VSSpeechRequest;
@protocol VSSpeechTaskProtocol;


#import "VSDeviceTTSCore.h"

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSDeviceTTSCore *deviceCore; // ivar: _deviceCore
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat estimatedDuration; // ivar: _estimatedDuration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) VSSpeechRequest *request; // ivar: _request
@property (readonly) Class superclass;


+(id)shortTermCachedEngineForVoice:(id)arg0 voiceResource:(id)arg1 ;
+(id)shortTermCachedEngines;
-(id)delegate;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)taskHash;
-(void)cancel;
-(void)main;
-(void)resume;
-(void)suspend;


@end


#endif