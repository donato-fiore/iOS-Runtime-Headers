// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMFETCHREVIEWSERVICE_H
#define IMFETCHREVIEWSERVICE_H

@class NSString;


#import "IMBaseStoreService.h"

@interface IMFetchReviewService : IMBaseStoreService

@property (retain, nonatomic) NSString *adamID; // ivar: _adamID


-(id)initWithAdamID:(id)arg0 ;
-(id)urlRequest;
-(void)performDataRequestWithCompletion:(id)arg0 ;


@end


#endif