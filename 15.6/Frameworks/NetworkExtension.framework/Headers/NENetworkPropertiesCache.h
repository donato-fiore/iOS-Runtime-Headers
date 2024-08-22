// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NENETWORKPROPERTIESCACHE_H
#define NENETWORKPROPERTIESCACHE_H

@class NSDictionary, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface NENetworkPropertiesCache : NSObject {
    os_unfair_lock_s lock;
}


@property (retain, nonatomic) NSDictionary *cache; // ivar: _cache
@property (retain, nonatomic) NSURL *cacheFileURL; // ivar: _cacheFileURL
@property (retain, nonatomic) NSString *keychainIdentifier; // ivar: _keychainIdentifier
@property (nonatomic) int notifyToken; // ivar: _notifyToken


+(id)sharedCache;
-(BOOL)loadCache;
-(BOOL)saveKey:(id)arg0 itemExists:(BOOL)arg1 ;
-(id)copyNetworkSignatureForPath:(id)arg0 ;
-(id)copyPropertiesForNetworkPath:(id)arg0 ;
-(id)createCacheKeyFromSignature:(id)arg0 ;
-(id)encryptData:(id)arg0 withKey:(id)arg1 ;
-(id)generateNewKey;
-(id)init;
-(int)fetchKey:(*id)arg0 ;
-(void)clear;
-(void)rotateEncryptionKey;
-(void)saveCacheToDisk:(id)arg0 ;
-(void)setProperties:(id)arg0 forNetworkPath:(id)arg1 ;
-(void)updateKeyWithCurrentKey:(id)arg0 currentCache:(id)arg1 ;


@end


#endif