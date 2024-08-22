// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKORDERFEEDRESPONSE_H
#define FCCKORDERFEEDRESPONSE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FCCKOrderFeedResponse : NSObject {
    BOOL _reachedEnd;
    BOOL _reachedMinOrder;
    BOOL _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    NSUInteger _extent;
}




-(id)description;


@end


#endif