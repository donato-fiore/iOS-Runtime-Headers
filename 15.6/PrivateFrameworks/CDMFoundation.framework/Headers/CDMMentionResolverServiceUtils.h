// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMMENTIONRESOLVERSERVICEUTILS_H
#define CDMMENTIONRESOLVERSERVICEUTILS_H


#import <Foundation/Foundation.h>


@interface CDMMentionResolverServiceUtils : NSObject



+(id)buildMRRequestWithCurTurn:(id)arg0 tokenChain:(id)arg1 mdResponse:(id)arg2 embedding:(id)arg3 utterance:(id)arg4 turnIndex:(NSUInteger)arg5 nluRequestId:(id)arg6 resultCandidateId:(id)arg7 cdmRequestId:(id)arg8 ;
+(void)logMRRequestToFile:(id)arg0 ;
+(void)logMRResponseToFile:(id)arg0 ;


@end


#endif