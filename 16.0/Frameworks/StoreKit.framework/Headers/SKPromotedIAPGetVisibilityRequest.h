// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPROMOTEDIAPGETVISIBILITYREQUEST_H
#define SKPROMOTEDIAPGETVISIBILITYREQUEST_H

@class NSString;


#import "SKRequest.h"

@interface SKPromotedIAPGetVisibilityRequest : SKRequest

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *productId; // ivar: _productId


-(id)initWithProductId:(id)arg0 bundleId:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithProductId:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleReply:(id)arg0 ;
-(void)_start;


@end


#endif