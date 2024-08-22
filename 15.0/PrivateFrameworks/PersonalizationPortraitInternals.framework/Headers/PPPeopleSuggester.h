// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPEOPLESUGGESTER_H
#define PPPEOPLESUGGESTER_H

@class _PASLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}




+(id)sharedInstance;
-(CGFloat)_cacheEntryAgeThresholdSecondsSince1970;
-(id)_rankedContactIdentifiersMatchingName:(id)arg0 ;
-(id)init;
-(id)rankedContactIdentifiers;
-(id)rankedContactIdentifiersMatchingName:(id)arg0 ;
-(void)_sweepCache;


@end


#endif