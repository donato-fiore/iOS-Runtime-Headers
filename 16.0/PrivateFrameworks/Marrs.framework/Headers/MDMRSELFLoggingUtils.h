// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMRSELFLOGGINGUTILS_H
#define MDMRSELFLOGGINGUTILS_H


#import <Foundation/Foundation.h>


@interface MDMRSELFLoggingUtils : NSObject



+(BOOL)emitEvent:(id)arg0 ;
+(BOOL)emitMentionDetectorEvaluatedEventWithResponse:(id)arg0 WithNlId:(id)arg1 andWithResultCandidateId:(id)arg2 andWithRequester:(int)arg3 ;
+(BOOL)emitMentionResolverEvaluatedEventWithResponse:(id)arg0 WithNlId:(id)arg1 andWithResultCandidateId:(id)arg2 andWithRequester:(int)arg3 ;
+(id)createMentionDetectorEvaluatedEvent:(id)arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;
+(id)createMentionDetectorEvaluatedTier1Event:(id)arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;
+(id)createMentionResolverEvaluatedEvent:(id)arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;
+(id)createMentionResolverEvaluatedTier1Event:(id)arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;


@end


#endif