// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSISTENTASSETKEYCACHE_H
#define FCPERSISTENTASSETKEYCACHE_H

@class NSString, NSMutableDictionary, NFUnfairLock, NSCountedSet;
@protocol FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving;

#import <Foundation/Foundation.h>


@interface FCPersistentAssetKeyCache : NSObject <FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving>

 {
    BOOL _flushingEnabled;
    BOOL _needsSave;
    NSString *_cachePath;
    NSMutableDictionary *_cacheEntries;
    NFUnfairLock *_cacheEntriesLock;
    NSCountedSet *_interestedKeys;
    NFUnfairLock *_interestLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)interestTokenForWrappingKeyIDs:(id)arg0 ;
-(id)wrappingKeyForWrappingKeyID:(id)arg0 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;
-(void)removeAllWrappingKeys;
-(void)setWrappingKey:(id)arg0 forWrappingKeyID:(id)arg1 ;


@end


#endif