// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPCACHE_H
#define APPCACHE_H

@class NSMutableSet, NSURL, NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>

#import "CacheDeleteVolume.h"
#import "TestTelemetry.h"

@interface AppCache : NSObject

@property (retain, nonatomic) NSMutableSet *bundleRecords; // ivar: _bundleRecords
@property (readonly, nonatomic) CacheDeleteVolume *cdVol; // ivar: _cdVol
@property (readonly, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isEnterprise; // ivar: _isEnterprise
@property (readonly) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly) BOOL isPlugin; // ivar: _isPlugin
@property (retain, nonatomic) NSNumber *lastKnownCacheSize; // ivar: _lastKnownCacheSize
@property (retain, nonatomic) NSNumber *lastKnownFreespace; // ivar: _lastKnownFreespace
@property (retain, nonatomic) NSNumber *lastKnownGroupCacheSize; // ivar: _lastKnownGroupCacheSize
@property (retain, nonatomic) NSNumber *lastKnownTmpSize; // ivar: _lastKnownTmpSize
@property (retain, nonatomic) NSDate *lastUsed; // ivar: _lastUsed
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString
@property (retain, nonatomic) TestTelemetry *telemetry; // ivar: _telemetry
@property CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSURL *userManagedAssetsURL; // ivar: _userManagedAssetsURL


+(id)appCacheWithRecords:(id)arg0 identifier:(id)arg1 dataContainerURL:(id)arg2 personaUniqueString:(id)arg3 isEnterprise:(BOOL)arg4 isPlaceholder:(BOOL)arg5 isPlugin:(BOOL)arg6 telemetry:(id)arg7 ;
+(void)enumerateAppCachesOnVolume:(id)arg0 telemetry:(id)arg1 block:(id)arg2 ;
-(BOOL)moveCacheAside:(id)arg0 ;
-(BOOL)validate;
-(NSInteger)three_days_ago;
-(NSUInteger)caches:(BOOL)arg0 purge:(BOOL)arg1 ;
-(NSUInteger)clearCaches:(BOOL)arg0 ;
-(NSUInteger)groupCache:(BOOL)arg0 ;
-(NSUInteger)tmp:(BOOL)arg0 purge:(BOOL)arg1 all:(BOOL)arg2 ;
-(id)cachePath;
-(id)description;
-(id)initWithBundleRecords:(id)arg0 identifier:(id)arg1 dataContainerURL:(id)arg2 personaUniqueString:(id)arg3 isEnterprise:(BOOL)arg4 isPlaceholder:(BOOL)arg5 isPlugin:(BOOL)arg6 telemetry:(id)arg7 ;
-(id)tmpPath;
-(int)urgency;
-(void)addBundleRecord:(id)arg0 ;
-(void)addBundleRecords:(id)arg0 ;
-(void)invalidate;


@end


#endif