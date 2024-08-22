// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDPURCHASEREQUEST_H
#define ASDPURCHASEREQUEST_H



#import "ASDEphemeralRequest.h"
#import "ASDPurchaseRequestOptions.h"

@interface ASDPurchaseRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurchaseRequestOptions *options;


+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif