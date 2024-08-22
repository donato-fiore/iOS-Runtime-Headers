// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSEASONFEEDREQUEST_H
#define MTSEASONFEEDREQUEST_H

@class NSArray;


#import "MTPartialFeedRequest.h"

@interface MTSeasonFeedRequest : MTPartialFeedRequest {
    ? seasons;
}


@property (nonatomic, copy) NSArray *seasons;


-(id)initWithStoreID:(NSInteger)arg0 ;
-(id)initWithStoreID:(NSInteger)arg0 seasons:(id)arg1 ;


@end


#endif