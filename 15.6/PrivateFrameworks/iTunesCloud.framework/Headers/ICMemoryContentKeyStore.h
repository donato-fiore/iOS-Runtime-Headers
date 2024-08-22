// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMEMORYCONTENTKEYSTORE_H
#define ICMEMORYCONTENTKEYSTORE_H

@class NSMutableDictionary;
@protocol ICContentKeyStoreProtocol;

#import <Foundation/Foundation.h>


@interface ICMemoryContentKeyStore : NSObject <ICContentKeyStoreProtocol>

 {
    NSMutableDictionary *_keyEntries;
}




-(BOOL)containsKeyForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)incrementFailureCountForKeyWithIdentifier:(id)arg0 ;
-(id)init;
-(id)loadKeyForIdentifier:(id)arg0 renewalDate:(*id)arg1 error:(*id)arg2 ;
-(id)removeAllKeys;
-(id)removeKeyForIdentifier:(id)arg0 ;
-(id)saveKey:(id)arg0 forIdentifier:(id)arg1 withRenewalDate:(id)arg2 ;
-(void)enumerateKeysUsingBlock:(id)arg0 ;


@end


#endif