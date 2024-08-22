// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCRYPTOSTRATEGYFACTORY_H
#define ICCRYPTOSTRATEGYFACTORY_H


#import <Foundation/Foundation.h>


@interface ICCryptoStrategyFactory : NSObject



+(BOOL)objectNeedsMigration:(id)arg0 ;
+(BOOL)shouldAuthenticateWithCustomPasswordForObject:(id)arg0 ;
+(BOOL)shouldAuthenticateWithDevicePasswordForObject:(id)arg0 ;
+(NSInteger)cipherVersionForObject:(id)arg0 ;
+(NSInteger)cipherVersionForPrimaryEncryptedData:(id)arg0 ;
+(NSInteger)userSelectedCipherVersionForObject:(id)arg0 ;
+(id)makeCryptoStrategyForObject:(id)arg0 andValidateProtocolConformance:(id)arg1 ;
+(id)makeCryptoStrategyForObject:(id)arg0 withCipherMatchingEncryptedData:(id)arg1 andValidateProtocolConformance:(id)arg2 ;
+(id)primaryEncryptedDataForObject:(id)arg0 ;
+(id)strategyForObject:(id)arg0 cipherVersion:(NSInteger)arg1 ;
+(id)unitTest_strategyForObject:(id)arg0 cipherVersion:(NSInteger)arg1 ;


@end


#endif