// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDPURCHASERESPONSEITEM_H
#define ASDPURCHASERESPONSEITEM_H

@class NSString, NSError, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASDPurchase.h"

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) BOOL cancelsPurchaseBatch; // ivar: _cancelsPurchaseBatch
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) ASDPurchase *purchase; // ivar: _purchase
@property (nonatomic) CGFloat requestStartTime; // ivar: _requestStartTime
@property (nonatomic) CGFloat responseEndTime; // ivar: _responseEndTime
@property (readonly, nonatomic) NSDictionary *responseMetrics; // ivar: _responseMetrics
@property (nonatomic) CGFloat responseStartTime; // ivar: _responseStartTime
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly, nonatomic) NSDictionary *transationIDs; // ivar: _transationIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 ;
-(id)transactionIdentifierForItemIdentifier:(NSInteger)arg0 ;
-(void)_setTransactionIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif