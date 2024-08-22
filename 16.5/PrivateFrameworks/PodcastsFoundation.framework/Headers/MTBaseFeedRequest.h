// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTBASEFEEDREQUEST_H
#define MTBASEFEEDREQUEST_H

@protocol MTMAPIRequest;


#import "MTBaseMAPIRequest.h"

@interface MTBaseFeedRequest : MTBaseMAPIRequest <MTMAPIRequest>

 {
    ? storeID;
    ? showMetadata;
}




-(id)init;
-(id)initWithStoreID:(NSInteger)arg0 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif