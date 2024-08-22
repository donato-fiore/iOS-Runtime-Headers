// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKPROMOTEDIAPGETINFOINTERNALREQUEST_H
#define SKPROMOTEDIAPGETINFOINTERNALREQUEST_H

@class NSString;


#import "SKRequest.h"

@interface SKPromotedIAPGetInfoInternalRequest : SKRequest

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithBundleId:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleReply:(id)arg0 ;
-(void)_start;


@end


#endif