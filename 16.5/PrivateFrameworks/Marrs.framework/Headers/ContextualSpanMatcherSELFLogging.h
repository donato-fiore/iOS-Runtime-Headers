// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTEXTUALSPANMATCHERSELFLOGGING_H
#define CONTEXTUALSPANMATCHERSELFLOGGING_H


#import <Foundation/Foundation.h>


@interface ContextualSpanMatcherSELFLogging : NSObject



+(BOOL)emitContextualSpanMatcherEndedEventWithResponse:(id)arg0 WithNlId:(id)arg1 andWithResultCandidateId:(id)arg2 andWithRequester:(int)arg3 ;
+(BOOL)emitEvent:(id)arg0 ;
+(id)createContextualSpanMatcherEndedEvent:(id)arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;
+(id)createContextualSpanMatcherEndedTier1Event:(id)arg0 withNLXMetadata:(id)arg1 andLinkId:(id)arg2 ;


@end


#endif