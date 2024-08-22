// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMERCHANTTOKEN_H
#define PKMERCHANTTOKEN_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface PKMerchantToken : NSObject

@property (readonly, copy, nonatomic) NSString *appleMerchantId; // ivar: _appleMerchantId
@property (readonly, nonatomic) BOOL isAMPPaymentToken;
@property (readonly, nonatomic) NSURL *merchantIconURL; // ivar: _merchantIconURL
@property (readonly, copy, nonatomic) NSString *merchantName; // ivar: _merchantName
@property (readonly, copy, nonatomic) NSString *merchantTokenId; // ivar: _merchantTokenId
@property (readonly, nonatomic) NSURL *merchantTokenManagementURL; // ivar: _merchantTokenManagementURL
@property (readonly, copy, nonatomic) NSString *tokenCategory; // ivar: _tokenCategory


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMerchantTokenId:(id)arg0 appleMerchantId:(id)arg1 merchantName:(id)arg2 merchantIconURL:(id)arg3 merchantTokenManagementURL:(id)arg4 tokenCategory:(id)arg5 ;


@end


#endif