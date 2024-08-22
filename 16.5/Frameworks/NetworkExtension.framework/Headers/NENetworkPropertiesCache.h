// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NENETWORKPROPERTIESCACHE_H
#define NENETWORKPROPERTIESCACHE_H

@class NSDictionary, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface NENetworkPropertiesCache : NSObject {
    os_unfair_lock_s lock;
    int _notifyToken;
    NSDictionary *_cache;
}


@property (retain, nonatomic) NSURL *cacheFileURL; // ivar: _cacheFileURL
@property (retain, nonatomic) NSString *keychainIdentifier; // ivar: _keychainIdentifier


+(id)sharedCache;
-(id)copyPropertiesForNetworkPath:(id)arg0 ;
-(id)init;
-(void)clear;
-(void)rotateEncryptionKey;
-(void)setProperties:(id)arg0 forNetworkPath:(id)arg1 ;


@end


#endif