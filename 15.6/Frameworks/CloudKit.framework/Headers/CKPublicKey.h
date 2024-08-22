// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPUBLICKEY_H
#define CKPUBLICKEY_H

@class NSData, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CKPublicKey : NSObject

@property (readonly, nonatomic) NSData *certData; // ivar: _certData
@property (readonly, nonatomic) NSDate *expiration; // ivar: _expiration
@property (readonly, nonatomic) NSString *protectionSource; // ivar: _protectionSource
@property (readonly, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(BOOL)hasExpired;
-(id)initWithPublicKey:(id)arg0 version:(NSInteger)arg1 expiration:(id)arg2 certificateData:(id)arg3 protectionSource:(id)arg4 ;


@end


#endif