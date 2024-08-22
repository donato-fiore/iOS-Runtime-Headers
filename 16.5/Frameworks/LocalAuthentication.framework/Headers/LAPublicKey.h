// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAPUBLICKEY_H
#define LAPUBLICKEY_H

@protocol LAKeyStoreKey, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LARight.h"

@interface LAPublicKey : NSObject {
    LARight *_right;
    id<LAKeyStoreKey> *_key;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _instanceID;
}




-(BOOL)canEncryptUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)canVerifyUsingSecKeyAlgorithm:(struct __CFString *)arg0 ;
-(id)description;
-(id)identifier;
-(id)initWithKey:(id)arg0 ;
-(id)right;
-(void)dealloc;
-(void)encryptData:(id)arg0 secKeyAlgorithm:(struct __CFString *)arg1 completion:(id)arg2 ;
-(void)exportBytesWithCompletion:(id)arg0 ;
-(void)setRight:(id)arg0 ;
-(void)verifyData:(id)arg0 signature:(id)arg1 secKeyAlgorithm:(struct __CFString *)arg2 completion:(id)arg3 ;


@end


#endif