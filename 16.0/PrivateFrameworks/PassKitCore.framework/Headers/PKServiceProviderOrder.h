// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSERVICEPROVIDERORDER_H
#define PKSERVICEPROVIDERORDER_H

@class NSData, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKServiceProviderOrder : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *appletValue; // ivar: _appletValue
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (nonatomic) NSUInteger paymentInstrumentType; // ivar: _paymentInstrumentType
@property (copy, nonatomic) NSDictionary *serviceProviderData; // ivar: _serviceProviderData
@property (copy, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


+(BOOL)supportsSecureCoding;
-(id)_itemDictionary;
-(id)_paymentInstrumentDictionary;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif