// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRRMULTIMODALMENTIONRESOLVER_H
#define MRRMULTIMODALMENTIONRESOLVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRRMultimodalMentionResolver : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unique_ptr<marrs::mrr::mr::MROrchestrator, std::default_delete<marrs::mrr::mr::MROrchestrator>> _mrOrchestrator;
    NSString *_locale;
}




+(id)name;
+(id)sharedManager;
-(BOOL)resolveCandidatesForUtterance:(id)arg0 entities:(id)arg1 maximumCandidates:(NSUInteger)arg2 status:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)resolveCandidatesForUtterance:(id)arg0 mentions:(id)arg1 entities:(id)arg2 maximumCandidates:(NSUInteger)arg3 status:(*id)arg4 completionBlock:(id)arg5 ;
-(BOOL)resolveCandidatesForUtterance:(id)arg0 status:(*id)arg1 completionBlock:(id)arg2 ;
-(BOOL)resolveCandidatesForUtterance:(id)arg0 utteranceTokens:(id)arg1 tokenEmbeddings:(id)arg2 entities:(id)arg3 maximumCandidates:(NSUInteger)arg4 status:(*id)arg5 completionBlock:(id)arg6 ;
-(BOOL)resolveCandidatesForUtterance:(id)arg0 utteranceTokens:(id)arg1 tokenEmbeddings:(id)arg2 mentions:(id)arg3 entities:(id)arg4 maximumCandidates:(NSUInteger)arg5 status:(*id)arg6 completionBlock:(id)arg7 ;
-(id)initWithAssets:(id)arg0 forLocale:(id)arg1 status:(*id)arg2 ;
-(id)resolveCandidatesForUtterance:(id)arg0 entities:(id)arg1 maximumCandidates:(NSUInteger)arg2 status:(*id)arg3 ;
-(id)resolveCandidatesForUtterance:(id)arg0 utteranceTokens:(id)arg1 tokenEmbeddings:(id)arg2 entities:(id)arg3 maximumCandidates:(NSUInteger)arg4 status:(*id)arg5 ;
-(id)resolveMentionsInUtterance:(id)arg0 mentions:(id)arg1 entities:(id)arg2 maximumCandidates:(NSUInteger)arg3 status:(*id)arg4 ;
-(id)resolveMentionsInUtterance:(id)arg0 status:(*id)arg1 ;
-(id)resolveMentionsInUtterance:(id)arg0 utteranceTokens:(id)arg1 tokenEmbeddings:(id)arg2 mentions:(id)arg3 entities:(id)arg4 maximumCandidates:(NSUInteger)arg5 status:(*id)arg6 ;
-(id)resolveReferencesInUtteranceImpl:(id)arg0 status:(*id)arg1 ;


@end


#endif