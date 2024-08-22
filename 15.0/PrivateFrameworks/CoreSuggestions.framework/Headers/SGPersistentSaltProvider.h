// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPERSISTENTSALTPROVIDER_H
#define SGPERSISTENTSALTPROVIDER_H

@class _PASLock, NSString;

#import <Foundation/Foundation.h>


@interface SGPersistentSaltProvider : NSObject {
    _PASLock *_lock;
    NSString *_serviceIdentifier;
    NSString *_accessGroup;
}




+(id)hexStringForData:(id)arg0 ;
+(id)saltProviderFromKeyChainWithServiceIdentifier:(id)arg0 accessGroup:(id)arg1 ;
+(id)saltProviderWithString:(id)arg0 serviceIdentifier:(id)arg1 accessGroup:(id)arg2 ;
-(id)_createSalt;
-(id)_findExistingSaltError:(*id)arg0 ;
-(id)_findOrCreateSalt;
-(id)_queryKeychainError:(*id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 accessGroup:(id)arg1 ;
-(id)salt;
-(void)_deleteSalt;


@end


#endif