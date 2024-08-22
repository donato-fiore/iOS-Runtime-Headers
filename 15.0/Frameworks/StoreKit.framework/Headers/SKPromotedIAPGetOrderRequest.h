// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPROMOTEDIAPGETORDERREQUEST_H
#define SKPROMOTEDIAPGETORDERREQUEST_H

@class NSString;


#import "SKRequest.h"

@interface SKPromotedIAPGetOrderRequest : SKRequest

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)_handleReply:(id)arg0 ;
-(void)_start;


@end


#endif