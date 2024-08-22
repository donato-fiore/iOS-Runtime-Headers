// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPUBLICKEY_H
#define CKPUBLICKEY_H

@class NSData, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface CKPublicKey : NSObject

@property (readonly, copy, nonatomic) NSData *certData; // ivar: _certData
@property (readonly, copy, nonatomic) NSDate *expiration; // ivar: _expiration
@property (readonly, copy, nonatomic) NSString *protectionSource; // ivar: _protectionSource
@property (readonly, copy, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(BOOL)hasExpired;
-(id)initWithPublicKey:(id)arg0 version:(NSInteger)arg1 expiration:(id)arg2 certificateData:(id)arg3 protectionSource:(id)arg4 ;


@end


#endif