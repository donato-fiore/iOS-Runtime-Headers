// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTPLANIDENTIFIER_H
#define CTPLANIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPlanIdentifier : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *gid1; // ivar: _gid1
@property (retain, nonatomic) NSString *gid2; // ivar: _gid2
@property (retain, nonatomic) NSString *iccid; // ivar: _iccid
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *mcc; // ivar: _mcc
@property (retain, nonatomic) NSString *mnc; // ivar: _mnc
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIccid:(id)arg0 carrierName:(id)arg1 phoneNumber:(id)arg2 countryCode:(id)arg3 label:(id)arg4 mcc:(id)arg5 mnc:(id)arg6 gid1:(id)arg7 gid2:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif