// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPINFOCACHE_H
#define NEAPPINFOCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEAppInfoCache : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue
@property (retain) NSMutableDictionary *cachedSourceAppInfo; // ivar: _cachedSourceAppInfo
@property (copy, nonatomic) id *customLookupHandler; // ivar: _customLookupHandler


+(id)sharedAppInfoCache;
-(BOOL)appInfo:(id)arg0 mismatchedWithUUID:(id)arg1 andBundleID:(id)arg2 ;
-(BOOL)appInfo:(id)arg0 shouldOverwriteAppInfo:(id)arg1 ;
-(BOOL)bundleID:(id)arg0 matchesBundleID:(id)arg1 ;
-(BOOL)setAppInfo:(id)arg0 forUUID:(id)arg1 ;
-(id)bundleIDWithoutTeamID:(id)arg0 ;
-(id)init;
-(id)lookupAppInfoForPid:(int)arg0 bundleID:(id)arg1 ;
-(void)addAppInfoToCache:(id)arg0 ;
-(void)appInfoForPid:(int)arg0 UUID:(id)arg1 bundleID:(id)arg2 completionHandler:(id)arg3 ;
-(void)performCustomLookupIfNecessaryForPid:(int)arg0 UUID:(id)arg1 bundleID:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif