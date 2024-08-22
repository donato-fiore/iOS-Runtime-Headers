// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSENCRYPTEDCLOUDKEYVALUESTORE_H
#define WBSENCRYPTEDCLOUDKEYVALUESTORE_H

@class NSString, NSUbiquitousKeyValueStore;

#import <Foundation/Foundation.h>


@interface WBSEncryptedCloudKeyValueStore : NSObject {
    id *_accountUpdateObserver;
    NSString *_dsid;
    RetainPtr<_PCSIdentitySetData *> _pcsIdentitySet;
    RetainPtr<_OpaquePCSShareProtection *> _pcsShareProtection;
    RetainPtr<const __CFData *> _serializedPCSObject;
}


@property (readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore; // ivar: _backingStore


+(id)additionalStoreWithIdentifier:(id)arg0 ;
+(id)defaultStore;
-(id)_dsidForPrimaryAccount;
-(id)_objectForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)decryptEntry:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)encryptPropertyList:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(int)_currentPCSConfiguration;
-(void)_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)synchronize;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;


@end


#endif