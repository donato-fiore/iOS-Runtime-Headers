// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPURCHASELOOKUPENTRY_H
#define FCPURCHASELOOKUPENTRY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface FCPurchaseLookUpEntry : NSObject

@property (copy, nonatomic) NSDate *dateOfExpiration; // ivar: _dateOfExpiration
@property (nonatomic) BOOL hasShownRenewalNotice; // ivar: _hasShownRenewalNotice
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isNewsAppPurchase; // ivar: _isNewsAppPurchase
@property (copy, nonatomic) NSDate *lastVerificationFailureTime; // ivar: _lastVerificationFailureTime
@property (copy, nonatomic) NSDate *lastVerificationTime; // ivar: _lastVerificationTime
@property (copy, nonatomic) NSString *purchaseID; // ivar: _purchaseID
@property (nonatomic) NSUInteger purchaseType; // ivar: _purchaseType
@property (nonatomic) NSUInteger purchaseValidationState; // ivar: _purchaseValidationState
@property (copy, nonatomic) NSString *tagID; // ivar: _tagID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithEntryID:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)initWithEntryID:(id)arg0 tagID:(id)arg1 purchaseID:(id)arg2 lastVerificationTime:(id)arg3 lastVerificationFailureTime:(id)arg4 purchaseType:(NSUInteger)arg5 purchaseValidationState:(NSUInteger)arg6 isNewsAppPurchase:(BOOL)arg7 dateOfExpiration:(id)arg8 hasShownRenewalNotice:(BOOL)arg9 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif