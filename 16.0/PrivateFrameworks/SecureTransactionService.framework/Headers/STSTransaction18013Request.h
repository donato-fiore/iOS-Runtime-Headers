// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTRANSACTION18013REQUEST_H
#define STSTRANSACTION18013REQUEST_H

@class NSData, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface STSTransaction18013Request : NSObject

@property (retain, nonatomic) NSData *authenticationACL; // ivar: _authenticationACL
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (retain, nonatomic) NSDictionary *elementsByNamespace; // ivar: _elementsByNamespace
@property (nonatomic) BOOL readerAuthenticated; // ivar: _readerAuthenticated
@property (retain, nonatomic) NSString *readerMerchantId; // ivar: _readerMerchantId




@end


#endif