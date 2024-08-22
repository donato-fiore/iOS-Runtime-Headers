// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLPURCHASEREQUEST_H
#define BLPURCHASEREQUEST_H

@class NSNumber, NSDictionary, NSString, NSURL;
@protocol NSCopying, NSSecureCoding;


#import "BLRequest.h"

@interface BLPurchaseRequest : BLRequest <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSDictionary *analyticsInfo; // ivar: _analyticsInfo
@property (nonatomic, getter=isAudiobook) BOOL audiobook; // ivar: _audiobook
@property (copy, nonatomic) NSString *buyParameters; // ivar: _buyParameters
@property (copy, nonatomic) NSString *logUUID; // ivar: _logUUID
@property (retain, nonatomic) NSURL *permlink; // ivar: _permlink
@property (copy, nonatomic) NSString *permlinkTitle; // ivar: _permlinkTitle
@property (nonatomic, getter=isPreOrder) BOOL preOrder; // ivar: _preOrder
@property (nonatomic, getter=isRestore) BOOL restore; // ivar: _restore
@property (retain, nonatomic) NSNumber *storeIdentifier; // ivar: _storeIdentifier
@property (nonatomic, getter=shouldSuppressNetworkEvaluatorDialogs) BOOL suppressNetworkEvaluatorDialogs; // ivar: _suppressNetworkEvaluatorDialogs


+(BOOL)supportsSecureCoding;
+(id)requestWithBuyParameters:(id)arg0 storeIdentifier:(id)arg1 ;
+(id)requestWithPermlink:(id)arg0 title:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif