// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDDATABASELOOKUPRESULT_H
#define FCFEEDDATABASELOOKUPRESULT_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>

#import "FCFeedRange.h"

@interface FCFeedDatabaseLookupResult : NSObject {
    BOOL _exhaustedRange;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSData *_ckFromCursor;
    NSUInteger _ckFromOrder;
    NSUInteger _ckToOrder;
    id *_insertionToken;
}




-(id)description;


@end


#endif