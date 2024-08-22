// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QRSELFLOGGINGUTILS_H
#define QRSELFLOGGINGUTILS_H


#import <Foundation/Foundation.h>


@interface QRSELFLoggingUtils : NSObject



+(BOOL)emitCCQREvaluatedEventWithResponse:(struct QRResponse )arg0 andNLXMetadata:(id)arg1 ;
+(BOOL)emitCCQRFailedEventWithMetadata:(id)arg0 andErrorCode:(NSInteger)arg1 ;
+(BOOL)emitCCQRStartedEventWithMetadata:(id)arg0 ;
+(BOOL)emitQueryRewriteEvaluatedEventWithResponse:(struct QRResponse )arg0 andNLXMetadata:(id)arg1 byPredictorType:(int)arg2 ;
+(BOOL)emitQueryRewriteFailedEventWithMetadata:(id)arg0 andErrorCode:(NSInteger)arg1 byPredictorType:(int)arg2 ;
+(BOOL)emitQueryRewriteStartedEventWithMetadata:(id)arg0 byPredictorType:(int)arg1 ;
+(BOOL)emitRDEvaluatedEventWithResponse:(struct QRResponse )arg0 andNLXMetadata:(id)arg1 ;
+(BOOL)emitRDFailedEventWithMetadata:(id)arg0 andErrorCode:(NSInteger)arg1 ;
+(BOOL)emitRDStartedEventWithMetadata:(id)arg0 ;
+(id)convertUUID:(id)arg0 ;
+(id)createCCQRContextEvaluatedEvent:(struct QRResponse )arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;
+(id)createCCQRContextEvaluatedTier1Event:(struct QRResponse )arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;
+(id)createCCQRContextEventWrapper:(id)arg0 withMetaData:(id)arg1 ;
+(id)createEventMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 andWithRequester:(int)arg2 ;
+(id)createRDContextEvaluatedEvent:(struct QRResponse )arg0 withNLXMetadata:(id)arg1 ;
+(id)createRDContextEventWrapper:(id)arg0 withMetaData:(id)arg1 ;
+(int)convertMarrsErrorCode:(NSInteger)arg0 ;
+(int)convertRepetitionType:(int)arg0 ;
+(int)convertRewriteType:(int)arg0 ;
+(void)emitEvent:(id)arg0 ;


@end


#endif