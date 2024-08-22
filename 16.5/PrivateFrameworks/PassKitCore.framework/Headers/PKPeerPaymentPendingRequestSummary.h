// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTPENDINGREQUESTSUMMARY_H
#define PKPEERPAYMENTPENDINGREQUESTSUMMARY_H

@class NSArray, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentPendingRequestSummary : NSObject

@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, copy, nonatomic) NSString *requestToken; // ivar: _requestToken
@property (readonly, copy, nonatomic) NSString *status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif