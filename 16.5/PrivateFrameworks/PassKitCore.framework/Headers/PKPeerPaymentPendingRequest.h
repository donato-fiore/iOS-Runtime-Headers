// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTPENDINGREQUEST_H
#define PKPEERPAYMENTPENDINGREQUEST_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPeerPaymentPendingRequest : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (retain, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (retain, nonatomic) NSDate *lastDismissedDate; // ivar: _lastDismissedDate
@property (retain, nonatomic) NSString *memo; // ivar: _memo
@property (retain, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (retain, nonatomic) NSString *requestToken; // ivar: _requestToken
@property (retain, nonatomic) NSString *requesteeAddress; // ivar: _requesteeAddress
@property (retain, nonatomic) NSString *requesterAddress; // ivar: _requesterAddress
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSString *status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestToken:(id)arg0 requesterAddress:(id)arg1 requesteeAddress:(id)arg2 currencyAmount:(id)arg3 memo:(id)arg4 sessionID:(id)arg5 requestDate:(id)arg6 expiryDate:(id)arg7 lastDismissedDate:(id)arg8 actions:(id)arg9 status:(id)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif