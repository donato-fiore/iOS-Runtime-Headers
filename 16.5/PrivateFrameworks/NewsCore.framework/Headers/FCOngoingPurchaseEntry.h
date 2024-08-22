// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCONGOINGPURCHASEENTRY_H
#define FCONGOINGPURCHASEENTRY_H

@class NSNumber, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface FCOngoingPurchaseEntry : NSObject

@property (copy, nonatomic) NSNumber *appAdamID; // ivar: _appAdamID
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSNumber *price; // ivar: _price
@property (copy, nonatomic) NSString *productID; // ivar: _productID
@property (copy, nonatomic) NSString *purchaseID; // ivar: _purchaseID
@property (copy, nonatomic) NSDate *purchaseInitiatedTime; // ivar: _purchaseInitiatedTime
@property (copy, nonatomic) NSNumber *storeExternalVersion; // ivar: _storeExternalVersion
@property (copy, nonatomic) NSString *tagID; // ivar: _tagID
@property (copy, nonatomic) NSString *vendorIdentifier; // ivar: _vendorIdentifier
@property (nonatomic) BOOL webAccessOptIn; // ivar: _webAccessOptIn


+(id)dummyOngoingPurchaseEntryWithTagID:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithEntryID:(id)arg0 dictionaryRepresentation:(id)arg1 ;
-(id)initWithEntryID:(id)arg0 tagID:(id)arg1 purchaseID:(id)arg2 productID:(id)arg3 bundleID:(id)arg4 webAccessOptIn:(BOOL)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10 ;


@end


#endif