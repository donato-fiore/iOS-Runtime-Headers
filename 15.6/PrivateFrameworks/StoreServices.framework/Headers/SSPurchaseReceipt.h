// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPURCHASERECEIPT_H
#define SSPURCHASERECEIPT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "ISPurchaseReceipt.h"

@interface SSPurchaseReceipt : NSObject {
    ISPurchaseReceipt *_purchaseReceipt;
}


@property (readonly) NSDate *expirationDate;
@property (readonly) BOOL isRevoked;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isValid; // ivar: _isValid


+(id)receiptPathForProxy:(id)arg0 ;
+(int)vppStateFlagsWithProxy:(id)arg0 ;
+(void)getReceiptPathWithCompletionBlock:(id)arg0 ;
-(BOOL)receiptExpired;
-(id)initWithContainerPath:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;


@end


#endif