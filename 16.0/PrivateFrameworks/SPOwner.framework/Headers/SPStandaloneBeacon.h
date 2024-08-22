// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPSTANDALONEBEACON_H
#define SPSTANDALONEBEACON_H

@class NSData, NSUUID, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPStandaloneBeacon : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *classicMacAddress; // ivar: _classicMacAddress
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *macAddress; // ivar: _macAddress
@property (copy, nonatomic) NSDate *pairingDate; // ivar: _pairingDate
@property (copy, nonatomic) NSData *productData; // ivar: _productData
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 macAddress:(id)arg1 classicMacAddress:(id)arg2 serialNumber:(id)arg3 pairingDate:(id)arg4 productData:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif