// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRRMULTIMODALMENTIONDETECTOR_H
#define MRRMULTIMODALMENTIONDETECTOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRRMultimodalMentionDetector : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unique_ptr<marrs::mrr::md::MRRMentionDetectorInterface, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> _mentionDetector;
    NSString *_locale;
}




+(id)name;
+(id)sharedManager;
-(BOOL)detectMentionsInUtterance:(id)arg0 maximumCandidates:(NSUInteger)arg1 status:(*id)arg2 completionBlock:(id)arg3 ;
-(BOOL)detectMentionsInUtterance:(id)arg0 status:(*id)arg1 completionBlock:(id)arg2 ;
-(BOOL)detectMentionsInUtterance:(id)arg0 utteranceTokens:(id)arg1 tokenEmbeddings:(id)arg2 maximumCandidates:(NSUInteger)arg3 status:(*id)arg4 completionBlock:(id)arg5 ;
-(id)detectMentionsInUtterance:(id)arg0 maximumCandidates:(NSUInteger)arg1 status:(*id)arg2 ;
-(id)detectMentionsInUtterance:(id)arg0 status:(*id)arg1 ;
-(id)detectMentionsInUtterance:(id)arg0 utteranceTokens:(id)arg1 tokenEmbeddings:(id)arg2 maximumCandidates:(NSUInteger)arg3 status:(*id)arg4 ;
-(id)detectMentionsInUtteranceImpl:(id)arg0 status:(*id)arg1 ;
-(id)detectMentionsInUtteranceRequest:(id)arg0 status:(*id)arg1 ;
-(id)initWithAssets:(id)arg0 forLocale:(id)arg1 status:(*id)arg2 ;


@end


#endif