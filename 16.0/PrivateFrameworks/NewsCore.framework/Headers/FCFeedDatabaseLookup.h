// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDDATABASELOOKUP_H
#define FCFEEDDATABASELOOKUP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCFeedRange.h"
#import "FCFeedItemFeature.h"

@interface FCFeedDatabaseLookup : NSObject {
    BOOL _cachedOnly;
    NSString *_feedID;
    FCFeedRange *_feedRange;
    NSUInteger _maxCount;
    FCFeedItemFeature *_requiredFeature;
}




-(id)description;


@end


#endif