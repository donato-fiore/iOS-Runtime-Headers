// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKFEEDRESPONSE_H
#define FCCKFEEDRESPONSE_H

@class NSString, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface FCCKFeedResponse : NSObject {
    BOOL _reachedEnd;
    BOOL _reachedOrderLimit;
    BOOL _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    NSUInteger _extent;
    NSData *_cursor;
}




-(id)description;


@end


#endif