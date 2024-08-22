// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCLINKPROBINGRESULT_H
#define VCLINKPROBINGRESULT_H

@class NSNumber, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCLinkProbingResult : NSObject {
    ? _linkProbingResultConfig;
}


@property (readonly) NSNumber *expMovMeanRTT; // ivar: _expMovMeanRTT
@property (readonly) NSNumber *plrEnvelopeValue; // ivar: _plrEnvelopeValue
@property (readonly) NSNumber *plrTier; // ivar: _plrTier
@property (readonly) unsigned int receivedResponseCount; // ivar: _receivedResponseCount
@property (readonly) unsigned int reorderedPacketsCount; // ivar: _reorderedPacketsCount
@property (readonly) NSMutableArray *requestTimestampAndRTTList; // ivar: _requestTimestampAndRTTList
@property (readonly) unsigned int sentRequestCount; // ivar: _sentRequestCount


-(id)description;
-(id)initWithProbingResults:(id)arg0 linkProbingResultConfig:(struct ? )arg1 ;
-(unsigned char)getPLRTierFromPLREnvelope:(CGFloat)arg0 ;
-(void)dealloc;
-(void)mergeProbingResults:(id)arg0 ;
-(void)updateLinkStatsWithArrivingNewValueMeanRTT:(CGFloat)arg0 arrivingNewValuePLR:(CGFloat)arg1 ;
-(void)updateProbingResult:(id)arg0 initialResult:(BOOL)arg1 ;


@end


#endif