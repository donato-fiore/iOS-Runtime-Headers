// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSELECTEDITEMACTIONITEM_H
#define PKSELECTEDITEMACTIONITEM_H

@class NSDecimalNumber, NSString, NSDate, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSelectedItemActionItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, copy, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *newExpirationDate; // ivar: _newExpirationDate
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData; // ivar: _serviceProviderData
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresAppletData; // ivar: _serviceProviderDataRequiresAppletData
@property (readonly, nonatomic) BOOL serviceProviderDataRequiresLocalBalance; // ivar: _serviceProviderDataRequiresLocalBalance
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)serviceProviderDataWithCurrentLocalBalance:(id)arg0 ;
-(void)_processLocalizableStrings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif