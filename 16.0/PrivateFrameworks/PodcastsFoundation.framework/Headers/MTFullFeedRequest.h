// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFULLFEEDREQUEST_H
#define MTFULLFEEDREQUEST_H



#import "MTBaseFeedRequest.h"

@interface MTFullFeedRequest : MTBaseFeedRequest {
    ? isSerial;
    ? hasSeasons;
}




-(id)initWithStoreID:(NSInteger)arg0 ;
-(id)initWithStoreID:(NSInteger)arg0 isSerial:(BOOL)arg1 hasSeasons:(BOOL)arg2 ;


@end


#endif