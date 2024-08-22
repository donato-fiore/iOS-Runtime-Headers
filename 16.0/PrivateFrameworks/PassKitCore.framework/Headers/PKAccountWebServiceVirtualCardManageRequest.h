// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEVIRTUALCARDMANAGEREQUEST_H
#define PKACCOUNTWEBSERVICEVIRTUALCARDMANAGEREQUEST_H

@class NSString, NSURL;
@protocol NSSecureCoding;


#import "PKAccountWebServiceRequest.h"
#import "PKVirtualCardEncryptionFields.h"

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding>

 {
    PKVirtualCardEncryptionFields *_encryptionFields;
    NSInteger _action;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *virtualCardIdentifier; // ivar: _virtualCardIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(void)setAction:(NSInteger)arg0 withQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif