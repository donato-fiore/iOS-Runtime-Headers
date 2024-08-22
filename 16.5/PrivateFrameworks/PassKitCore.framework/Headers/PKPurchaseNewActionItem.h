// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPURCHASENEWACTIONITEM_H
#define PKPURCHASENEWACTIONITEM_H

@class NSMutableDictionary, NSDecimalNumber, NSString, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassLibrary.h"

@interface PKPurchaseNewActionItem : NSObject <NSSecureCoding, NSCopying>

 {
    PKPassLibrary *_sharedLibrary;
    NSMutableDictionary *_serviceProviderData;
}


@property (readonly, copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, copy, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *newExpirationDate; // ivar: _newExpirationDate
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresAppletData; // ivar: _serviceProviderDataRequiresAppletData
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_processLocalizableStrings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)serviceProviderDataWithItemForPass:(id)arg0 completion:(id)arg1 ;


@end


#endif