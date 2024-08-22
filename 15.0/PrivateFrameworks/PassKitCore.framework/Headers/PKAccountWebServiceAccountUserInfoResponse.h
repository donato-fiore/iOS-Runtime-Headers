// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICEACCOUNTUSERINFORESPONSE_H
#define PKACCOUNTWEBSERVICEACCOUNTUSERINFORESPONSE_H

@class CNContact;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) CNContact *userInfo; // ivar: _userInfo


+(BOOL)jsonDataOptional;
-(id)_stringValueFromDictionary:(id)arg0 key:(id)arg1 isOptional:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 ;


@end


#endif