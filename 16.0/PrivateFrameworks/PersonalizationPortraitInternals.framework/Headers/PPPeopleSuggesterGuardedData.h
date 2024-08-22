// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPEOPLESUGGESTERGUARDEDDATA_H
#define PPPEOPLESUGGESTERGUARDEDDATA_H

@class _PSSuggester, NSCache, NSDate;

#import <Foundation/Foundation.h>


@interface PPPeopleSuggesterGuardedData : NSObject {
    _PSSuggester *_suggester;
    NSCache *_cache;
    NSDate *_lastCacheSweepDate;
}






@end


#endif