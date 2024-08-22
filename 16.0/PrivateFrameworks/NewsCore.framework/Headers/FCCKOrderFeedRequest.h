// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKORDERFEEDREQUEST_H
#define FCCKORDERFEEDREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCCKOrderFeedRequest : NSObject {
    NSString *_feedID;
    NSUInteger _maxOrder;
    NSUInteger _minOrder;
    NSUInteger _resultsLimit;
    NSUInteger _topK;
}




-(id)description;
-(id)init;


@end


#endif