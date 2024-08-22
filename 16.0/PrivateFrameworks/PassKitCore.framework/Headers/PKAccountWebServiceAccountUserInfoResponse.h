// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTUSERINFORESPONSE_H
#define PKACCOUNTWEBSERVICEACCOUNTUSERINFORESPONSE_H

@class CNContact;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) BOOL billingAddressReadOnly; // ivar: _billingAddressReadOnly
@property (readonly, nonatomic) CNContact *primaryUser; // ivar: _primaryUser
@property (readonly, nonatomic) BOOL useLegacyUpdateAPI; // ivar: _useLegacyUpdateAPI


+(BOOL)jsonDataOptional;
-(id)_stringValueFromDictionary:(id)arg0 key:(id)arg1 isOptional:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 ;


@end


#endif