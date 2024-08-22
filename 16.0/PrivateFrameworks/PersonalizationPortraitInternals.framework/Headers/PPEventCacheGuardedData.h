// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPEVENTCACHEGUARDEDDATA_H
#define PPEVENTCACHEGUARDEDDATA_H

@class NSMutableArray, NSMutableIndexSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PPEventCacheGuardedData : NSObject {
    NSMutableArray *_cachedEvents;
    NSMutableIndexSet *_cachedRanges;
    NSUInteger _extraSecondsToBackfill;
    NSMutableDictionary *_cachedEventHighlights;
}






@end


#endif