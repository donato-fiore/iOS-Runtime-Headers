// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTOPICALLOWLIST_H
#define PPTOPICALLOWLIST_H

@class _PASCFBurstTrie;
@protocol TRINotificationToken;

#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"

@interface PPTopicAllowlist : NSObject {
    _PASCFBurstTrie *_allowlistTrie;
    PPTrialWrapper *_trialWrapper;
    id<TRINotificationToken> *_trialToken;
}




+(id)sharedInstance;
-(BOOL)shouldBypassAllowlist:(id)arg0 ;
-(id)filterTopicDictionary:(id)arg0 clientProcess:(id)arg1 ;
-(id)indicesOfAllowedTopicsInRecordArray:(id)arg0 clientProcess:(id)arg1 ;
-(id)indicesOfAllowedTopicsInScoredTopicArray:(id)arg0 clientProcess:(id)arg1 ;
-(id)initWithTrialWrapper:(id)arg0 ;
-(void)dealloc;


@end


#endif