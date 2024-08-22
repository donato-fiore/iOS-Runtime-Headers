// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPRECOVERYKEYCACHE_H
#define CDPRECOVERYKEYCACHE_H

@class AAFKeychainManager;

#import <Foundation/Foundation.h>


@interface CDPRecoveryKeyCache : NSObject {
    AAFKeychainManager *_keychainManager;
}




+(id)sharedInstance;
-(BOOL)cacheRecoveryKey:(id)arg0 forAltDSID:(id)arg1 error:(*id)arg2 ;
-(id)fetchRecoveryKeyFromCacheForAltDSID:(id)arg0 ;
-(id)init;
-(void)deleteCache;


@end


#endif