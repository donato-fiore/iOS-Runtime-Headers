// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAPRIVATEKEY_H
#define LAPRIVATEKEY_H

@protocol LAKeyStoreKey, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LARight.h"
#import "LAPublicKey.h"

@interface LAPrivateKey : NSObject {
    LARight *_right;
    id<LAKeyStoreKey> *_key;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _instanceID;
}


@property (readonly, nonatomic) LAPublicKey *publicKey;


-(BOOL)canDecryptUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canSignUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithKey:(id)arg0 ;
-(id)right;
-(void)dealloc;
-(void)decryptData:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 completion:(id)arg2 ;
-(void)exchangeKeysWithPublicKey:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 secKeyParameters:(id)arg2 completion:(id)arg3 ;
-(void)setRight:(id)arg0 ;
-(void)signData:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 completion:(id)arg2 ;


@end


#endif