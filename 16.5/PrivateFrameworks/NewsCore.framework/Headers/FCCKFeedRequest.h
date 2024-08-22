// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKFEEDREQUEST_H
#define FCCKFEEDREQUEST_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface FCCKFeedRequest : NSObject {
    NSString *_feedID;
    NSData *_startCursor;
    NSUInteger _startOrder;
    NSUInteger _orderLimit;
    NSUInteger _softResultsLimit;
    NSUInteger _hardResultsLimit;
}




-(id)description;
-(id)init;


@end


#endif