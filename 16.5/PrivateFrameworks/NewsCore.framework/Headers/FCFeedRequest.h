// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDREQUEST_H
#define FCFEEDREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "FCFeedRange.h"
#import "FCFeedItemFeature.h"

@interface FCFeedRequest : NSObject <NSCopying>



@property (nonatomic) BOOL cachedOnly; // ivar: _cachedOnly
@property (nonatomic) NSInteger feedBin; // ivar: _feedBin
@property (copy, nonatomic) NSString *feedID; // ivar: _feedID
@property (copy, nonatomic) FCFeedRange *feedRange; // ivar: _feedRange
@property (nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature; // ivar: _requiredFeature


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif