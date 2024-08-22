// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSGROUPENCRYPTIONKEYMATERIALCACHE_H
#define IDSGROUPENCRYPTIONKEYMATERIALCACHE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface IDSGroupEncryptionKeyMaterialCache : NSObject {
    os_unfair_lock_s _lock;
    NSMutableSet *_cache;
}




-(id)init;
-(void)enumerateCachedKeyMaterialUsingBlock:(id)arg0 ;
-(void)invalidateKeyMaterialByKeyIndexes:(id)arg0 ;
-(void)recvKeyMaterial:(id)arg0 ;


@end


#endif