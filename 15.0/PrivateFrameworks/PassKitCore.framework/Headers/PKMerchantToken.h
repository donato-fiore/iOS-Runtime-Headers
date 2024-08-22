// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTTOKEN_H
#define PKMERCHANTTOKEN_H

@class NSNumber, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface PKMerchantToken : NSObject

@property (readonly, nonatomic) BOOL isAMPPaymentToken;
@property (readonly, nonatomic) NSNumber *merchantAdamId; // ivar: _merchantAdamId
@property (readonly, copy, nonatomic) NSString *merchantName; // ivar: _merchantName
@property (readonly, copy, nonatomic) NSString *merchantTokenId; // ivar: _merchantTokenId
@property (readonly, nonatomic) NSURL *merchantTokenManagementURL; // ivar: _merchantTokenManagementURL
@property (readonly, copy, nonatomic) NSString *tokenCategory; // ivar: _tokenCategory


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMerchantTokenId:(id)arg0 merchantName:(id)arg1 merchantAdamId:(id)arg2 merchantTokenManagementURL:(id)arg3 tokenCategory:(id)arg4 ;


@end


#endif