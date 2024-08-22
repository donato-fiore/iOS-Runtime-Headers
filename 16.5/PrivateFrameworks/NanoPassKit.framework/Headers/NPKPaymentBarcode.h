// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTBARCODE_H
#define NPKPAYMENTBARCODE_H

@class NSString, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface NPKPaymentBarcode : NSObject

@property (retain, nonatomic) NSString *barcodeIdentifier; // ivar: _barcodeIdentifier
@property (retain, nonatomic) NSArray *barcodes; // ivar: _barcodes
@property (retain, nonatomic) NSData *decryptedBarcodeCredential; // ivar: _decryptedBarcodeCredential
@property (nonatomic) NSUInteger state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithBarcodeIdentifier:(id)arg0 decryptedBarcodeCredential:(id)arg1 error:(id)arg2 ;


@end


#endif