// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCURRENTISSUESPROMISECHAININGDATA_H
#define FCCURRENTISSUESPROMISECHAININGDATA_H

@class NSArray, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "FCCurrentIssuesCheckerResult.h"

@interface FCCurrentIssuesPromiseChainingData : NSObject {
    NSArray *_resultingIssues;
    NSOrderedSet *_bundleChannelIDs;
    NSArray *_followedChannelIDs;
    NSArray *_autoFavoriteTagIDs;
    FCCurrentIssuesCheckerResult *_partialResult;
}






@end


#endif