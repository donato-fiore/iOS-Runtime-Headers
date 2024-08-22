// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSENGAGEMENTCLIENTDATA_H
#define AMSENGAGEMENTCLIENTDATA_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMSEngagementClientData : NSObject

@property (retain, nonatomic) NSMutableDictionary *apps; // ivar: _apps
@property (retain, nonatomic) NSString *lastSyncedBuild; // ivar: _lastSyncedBuild


+(BOOL)_isDaemon;
+(id)_fetchClientData;
+(id)_sharedQueue;
+(id)loadFromDisk;
+(void)_assertEngagementd;
+(void)_registerNotifications;
-(id)cachedResponseDataForEvent:(id)arg0 ;
-(id)destinationsForEvent:(id)arg0 ;
-(id)initWithCacheObject:(id)arg0 ;
-(void)_cleanUpApps;
-(void)addCachedResponseData:(id)arg0 cacheInfo:(id)arg1 appIdentifier:(id)arg2 ;
-(void)saveToDisk;
-(void)setAllowedEvents:(id)arg0 appIdentifier:(id)arg1 ;


@end


#endif