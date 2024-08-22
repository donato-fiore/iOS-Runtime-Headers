// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPERSISTENTKEYSTORAGE_H
#define MLPERSISTENTKEYSTORAGE_H


#import <Foundation/Foundation.h>


@interface MLPersistentKeyStorage : NSObject



+(BOOL)storeKeyBlob:(id)arg0 forKeyIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)persistentKeyStorageURL;
+(id)retrieveKeyBlobForKeyIdentifier:(id)arg0 ;
+(id)syncQueue;


@end


#endif