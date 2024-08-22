// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPARTIALFEEDREQUEST_H
#define MTPARTIALFEEDREQUEST_H

@class NSArray;


#import "MTBaseFeedRequest.h"

@interface MTPartialFeedRequest : MTBaseFeedRequest {
    ? sections;
}


@property (nonatomic) NSInteger limit; // ivar: limit
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) BOOL showTypeIsSerial; // ivar: showTypeIsSerial


-(id)initWithStoreID:(NSInteger)arg0 ;


@end


#endif