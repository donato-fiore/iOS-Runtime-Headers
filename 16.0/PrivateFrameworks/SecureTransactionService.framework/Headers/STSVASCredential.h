// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSVASCREDENTIAL_H
#define STSVASCREDENTIAL_H

@class NSData;


#import "STSAuxiliaryCredential.h"

@interface STSVASCredential : STSAuxiliaryCredential

@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSData *merchantId; // ivar: _merchantId
@property (retain, nonatomic) NSData *mobileToken; // ivar: _mobileToken
@property (nonatomic) BOOL userInterventionRequired; // ivar: _userInterventionRequired


+(BOOL)supportsSecureCoding;
+(id)vasCredentialWithMerchantId:(id)arg0 data:(id)arg1 mobileToken:(id)arg2 userInterventionRequired:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMerchantId:(id)arg0 data:(id)arg1 mobileToken:(id)arg2 userInterventionRequired:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif