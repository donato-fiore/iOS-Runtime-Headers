// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDINSERTIONTOKEN_H
#define FCFEEDINSERTIONTOKEN_H


#import <Foundation/Foundation.h>

#import "FCFDBFeed.h"

@interface FCFeedInsertionToken : NSObject {
    FCFDBFeed *_fromFeed;
    NSUInteger _fromOrder;
    NSUInteger _toOrder;
}






@end


#endif