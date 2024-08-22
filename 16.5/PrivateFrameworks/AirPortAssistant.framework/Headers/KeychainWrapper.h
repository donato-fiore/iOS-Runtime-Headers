// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KEYCHAINWRAPPER_H
#define KEYCHAINWRAPPER_H

@class NSString, NSLock;

#import <Foundation/Foundation.h>


@interface KeychainWrapper : NSObject

@property (copy, nonatomic) NSString *accountName; // ivar: _accountName
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName


+(id)keychainPasswordForMACAddress:(id)arg0 ;
+(id)keychainWrapperWithMACAddress:(id)arg0 ;
+(void)removeKeychainPasswordForMACAddress:(id)arg0 ;
-(id)genericPassword;
-(id)genericPasswordQuery;
-(id)getGenericPassword;
-(id)getPasswordFromQuery:(id)arg0 ;
-(id)initWithAccountName:(id)arg0 serviceName:(id)arg1 ;
-(int)addGenericPassword:(id)arg0 withLabel:(id)arg1 andDescription:(id)arg2 ;
-(void)dealloc;
-(void)removeGenericPassword;


@end


#endif