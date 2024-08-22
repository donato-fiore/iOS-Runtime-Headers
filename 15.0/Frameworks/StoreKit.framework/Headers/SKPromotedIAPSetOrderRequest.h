// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPROMOTEDIAPSETORDERREQUEST_H
#define SKPROMOTEDIAPSETORDERREQUEST_H

@class NSString, NSArray;


#import "SKRequest.h"

@interface SKPromotedIAPSetOrderRequest : SKRequest

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSArray *order; // ivar: _order


-(id)initWithOrder:(id)arg0 bundleId:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithOrder:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleReply:(id)arg0 ;
-(void)_start;


@end


#endif