// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTOPICBLOCKLIST_H
#define PPTOPICBLOCKLIST_H

@class _PASCFBurstTrie;
@protocol TRINotificationToken;

#import <Foundation/Foundation.h>

#import "PPTrialWrapper.h"

@interface PPTopicBlocklist : NSObject {
    _PASCFBurstTrie *_blocklistTrie;
    PPTrialWrapper *_trialWrapper;
    id<TRINotificationToken> *_trialToken;
}




+(id)sharedInstance;
-(BOOL)shouldBlock:(id)arg0 ;
-(id)indicesOfBlockedTopicsInRecordArray:(id)arg0 ;
-(id)indicesOfBlockedTopicsInScoredTopicArray:(id)arg0 ;
-(id)initWithTrialWrapper:(id)arg0 ;
-(void)dealloc;


@end


#endif