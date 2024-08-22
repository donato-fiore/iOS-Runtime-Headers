// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKPAYMENTQUEUECLIENT_H
#define SKPAYMENTQUEUECLIENT_H

@class NSString, NSNumber;
@protocol NSCopying, SKPaymentQueueClientDelegate;

#import <Foundation/Foundation.h>


@interface SKPaymentQueueClient : NSObject <NSCopying>



@property (nonatomic) BOOL allowsBootstrapCellularData; // ivar: _allowsBootstrapCellularData
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (weak, nonatomic) NSObject<SKPaymentQueueClientDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger environmentType; // ivar: _environmentType
@property (nonatomic) BOOL hidesConfirmationDialogs; // ivar: _hidesConfirmationDialogs
@property (nonatomic) BOOL ignoresInAppPurchaseRestriction; // ivar: _ignoresInAppPurchaseRestriction
@property (copy, nonatomic) NSString *productsRequestBundleIdentifier; // ivar: _productsRequestBundleIdentifier
@property (copy, nonatomic) NSString *receiptDirectoryPath; // ivar: _receiptDirectoryPath
@property (nonatomic) BOOL requiresAuthenticationForPayment; // ivar: _requiresAuthenticationForPayment
@property (copy, nonatomic) NSNumber *storeExternalVersion; // ivar: _storeExternalVersion
@property (copy, nonatomic) NSNumber *storeItemIdentifier; // ivar: _storeItemIdentifier
@property (copy, nonatomic) NSString *vendorIdentifier; // ivar: _vendorIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)plist;


@end


#endif