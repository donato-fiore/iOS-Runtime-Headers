// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRREADPARAMETERS_H
#define SPRREADPARAMETERS_H

@class NSData, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRReadParameters : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ? amount; // ivar: _amount
@property (readonly, copy, nonatomic) NSData *currencyCode; // ivar: _currencyCode
@property (readonly, copy, nonatomic) NSData *interfaceDeviceSerial; // ivar: _interfaceDeviceSerial
@property (readonly, copy, nonatomic) NSString *kernelToken; // ivar: _kernelToken
@property (readonly, copy, nonatomic) NSData *merchantCategoryCode; // ivar: _merchantCategoryCode
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, copy, nonatomic) NSData *schemePreference; // ivar: _schemePreference
@property (readonly, nonatomic) NSInteger timeoutReadPay; // ivar: _timeoutReadPay
@property (readonly, nonatomic) NSInteger timeoutReadVas; // ivar: _timeoutReadVas
@property (readonly, copy, nonatomic) NSString *transactionId; // ivar: _transactionId
@property (readonly, nonatomic) unsigned char transactionType; // ivar: _transactionType
@property (readonly, copy, nonatomic) NSArray *urls;
@property (readonly, copy, nonatomic) NSArray *vasPasses;
@property (readonly, copy, nonatomic) NSArray *vasProtocol;
@property (readonly, copy, nonatomic) NSArray *vasRequests; // ivar: _vasRequests


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 vasPasses:(id)arg1 urls:(id)arg2 amount:(struct ? )arg3 currencyCode:(id)arg4 transactionType:(unsigned char)arg5 merchantCategoryCode:(id)arg6 interfaceDeviceSerial:(id)arg7 kernelToken:(id)arg8 timeoutReadPay:(NSInteger)arg9 timeoutReadVas:(NSInteger)arg10 ;
-(id)initWithMode:(NSInteger)arg0 vasPasses:(id)arg1 urls:(id)arg2 amount:(struct ? )arg3 currencyCode:(id)arg4 transactionType:(unsigned char)arg5 merchantCategoryCode:(id)arg6 kernelToken:(id)arg7 timeoutReadPay:(NSInteger)arg8 timeoutReadVas:(NSInteger)arg9 ;
-(id)initWithMode:(NSInteger)arg0 vasRequests:(id)arg1 amount:(struct ? )arg2 currencyCode:(id)arg3 transactionType:(unsigned char)arg4 merchantCategoryCode:(id)arg5 interfaceDeviceSerial:(id)arg6 kernelToken:(id)arg7 timeoutReadPay:(NSInteger)arg8 timeoutReadVas:(NSInteger)arg9 ;
-(id)initWithMode:(NSInteger)arg0 vasRequests:(id)arg1 amount:(struct ? )arg2 currencyCode:(id)arg3 transactionType:(unsigned char)arg4 merchantCategoryCode:(id)arg5 interfaceDeviceSerial:(id)arg6 kernelToken:(id)arg7 timeoutReadPay:(NSInteger)arg8 timeoutReadVas:(NSInteger)arg9 transactionId:(id)arg10 ;
-(id)initWithMode:(NSInteger)arg0 vasRequests:(id)arg1 amount:(struct ? )arg2 currencyCode:(id)arg3 transactionType:(unsigned char)arg4 merchantCategoryCode:(id)arg5 interfaceDeviceSerial:(id)arg6 kernelToken:(id)arg7 timeoutReadPay:(NSInteger)arg8 timeoutReadVas:(NSInteger)arg9 transactionId:(id)arg10 schemePreference:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif