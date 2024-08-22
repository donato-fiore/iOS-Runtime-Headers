// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCRYPTO_H
#define MKCRYPTO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MKCrypto : NSObject

@property (copy, nonatomic) NSData *key; // ivar: _key


-(id)bytes:(NSUInteger)arg0 ;
-(id)decryptData:(id)arg0 ;
-(id)encrypt:(BOOL)arg0 data:(id)arg1 withKey:(id)arg2 iv:(id)arg3 ;
-(id)encryptData:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;


@end


#endif