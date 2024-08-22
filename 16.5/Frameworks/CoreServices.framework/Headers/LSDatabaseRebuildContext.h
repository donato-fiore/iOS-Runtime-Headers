// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSDATABASEREBUILDCONTEXT_H
#define LSDATABASEREBUILDCONTEXT_H

@class NSMutableSet, NSError;

#import <Foundation/Foundation.h>

#import "LSRebuildStatisticsGatherer.h"

@interface LSDatabaseRebuildContext : NSObject {
    LSRebuildStatisticsGatherer *_statsGatherer;
    NSMutableSet *_overriddenPlugins;
    NSError *_lastObservedError;
}




-(id)initWithStatsGatherer:(id)arg0 ;


@end


#endif