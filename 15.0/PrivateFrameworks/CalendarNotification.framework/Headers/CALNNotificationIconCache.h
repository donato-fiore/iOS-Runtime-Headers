// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNNOTIFICATIONICONCACHE_H
#define CALNNOTIFICATIONICONCACHE_H

@class NSString;
@protocol CALNIconCache, CalIconProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CALNNotificationIconCache : NSObject <CALNIconCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CalIconProvider> *iconProvider; // ivar: _iconProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)_iconCacheDirectory;
+(id)_pathForCachedIconWithIdentifier:(id)arg0 ;
+(id)iconCacheDirectory;
+(id)pathForCachedIconWithIdentifier:(id)arg0 ;
-(BOOL)_addIconWithIdentifier:(id)arg0 toCacheAtPath:(id)arg1 ;
-(BOOL)_createCacheDirectoryIfNeeded;
-(BOOL)addIconsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)forceRemoveAllCachedIconsWithError:(*id)arg0 ;
-(BOOL)removeIconWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)cachedIconPathForIconIdentifier:(id)arg0 ;
-(id)iconIdentifierForCachedIconPath:(id)arg0 ;
-(id)initWithIconProvider:(id)arg0 ;


@end


#endif