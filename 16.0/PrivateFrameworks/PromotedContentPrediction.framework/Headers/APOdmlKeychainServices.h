// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLKEYCHAINSERVICES_H
#define APODMLKEYCHAINSERVICES_H


#import <Foundation/Foundation.h>


@interface APOdmlKeychainServices : NSObject



+(id)_keychainQuery:(id)arg0 ;
+(id)_readDataFromKeychain:(id)arg0 ;
+(id)allowedClasses;
+(id)objectForKey:(id)arg0 error:(*id)arg1 ;
+(void)_removeObjectForKey:(id)arg0 ;
+(void)_writeDataToKeychain:(id)arg0 andData:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif