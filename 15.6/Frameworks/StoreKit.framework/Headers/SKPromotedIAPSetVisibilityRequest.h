// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKPROMOTEDIAPSETVISIBILITYREQUEST_H
#define SKPROMOTEDIAPSETVISIBILITYREQUEST_H

@class NSString;


#import "SKRequest.h"

@interface SKPromotedIAPSetVisibilityRequest : SKRequest

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *productId; // ivar: _productId
@property (nonatomic) NSInteger visibility; // ivar: _visibility


-(id)initWithVisibility:(NSInteger)arg0 productId:(id)arg1 bundleId:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithVisibility:(NSInteger)arg0 productId:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleReply:(id)arg0 ;
-(void)_start;


@end


#endif