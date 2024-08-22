// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKRECEIPTREFRESHREQUEST_H
#define SKRECEIPTREFRESHREQUEST_H

@class NSDictionary;


#import "SKRequest.h"

@interface SKReceiptRefreshRequest : SKRequest

@property (readonly, nonatomic) NSDictionary *receiptProperties; // ivar: _properties


-(BOOL)_wantsExpired;
-(BOOL)_wantsRevoked;
-(BOOL)_wantsVPP;
-(id)initWithReceiptProperties:(id)arg0 ;
-(void)_handleReply:(id)arg0 ;
-(void)_requestCompletedWithError:(id)arg0 ;
-(void)_start;


@end


#endif