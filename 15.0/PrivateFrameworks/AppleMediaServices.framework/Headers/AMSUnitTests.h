// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUNITTESTS_H
#define AMSUNITTESTS_H


#import <Foundation/Foundation.h>


@interface AMSUnitTests : NSObject



+(BOOL)isRunningUnitTests;
+(id)_encryptionKeys;
+(id)encryptionKeyForDataProtectionClass:(NSUInteger)arg0 ;
+(void)_sync:(id)arg0 ;
+(void)setEncryptionKey:(id)arg0 forDataProtectionClass:(NSUInteger)arg1 ;


@end


#endif