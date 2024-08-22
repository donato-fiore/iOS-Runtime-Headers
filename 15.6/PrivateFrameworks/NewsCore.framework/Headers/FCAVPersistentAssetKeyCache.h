// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAVPERSISTENTASSETKEYCACHE_H
#define FCAVPERSISTENTASSETKEYCACHE_H

@class NSString, NFUnfairLock, NSURL, NSData;
@protocol FCAVAssetKeyCacheType;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"

@interface FCAVPersistentAssetKeyCache : NSObject <FCAVAssetKeyCacheType>

 {
    NSString *_cacheDirectory;
    NFUnfairLock *_initializationLock;
    FCKeyValueStore *_keyStore;
    NSURL *_certificateFileURL;
}


@property (readonly, copy, nonatomic) NSData *keyServerCertificate;


-(id)assetKeyForURI:(id)arg0 ;
-(id)interestTokenForKeyURIs:(id)arg0 ;
-(void)clearKeyServerCertificate;
-(void)importAVAssetKey:(id)arg0 ;
-(void)removeAllAssetKeys;
-(void)saveAssetKeyData:(id)arg0 creationDate:(id)arg1 expirationDate:(id)arg2 forURI:(id)arg3 ;
-(void)saveKeyServerCertificate:(id)arg0 ;


@end


#endif