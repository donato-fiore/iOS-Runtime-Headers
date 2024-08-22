// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDRESPONSE_H
#define FCFEEDRESPONSE_H

@class NSError, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "FCFeedRange.h"

@interface FCFeedResponse : NSObject

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL exhaustedRequestRange; // ivar: _exhaustedRequestRange
@property (copy, nonatomic) NSString *feedID; // ivar: _feedID
@property (copy, nonatomic) NSArray *feedItems; // ivar: _feedItems
@property (readonly, copy, nonatomic) FCFeedRange *feedRange;


-(id)feedResponseByMergingWithResponse:(id)arg0 ;


@end


#endif