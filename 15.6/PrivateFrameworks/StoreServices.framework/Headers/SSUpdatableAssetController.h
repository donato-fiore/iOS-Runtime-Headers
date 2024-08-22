// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSUPDATABLEASSETCONTROLLER_H
#define SSUPDATABLEASSETCONTROLLER_H

@class NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSUpdatableAssetManifest.h"
#import "SSUpdatableAssetCacheManager.h"
#import "SSXPCConnection.h"

@interface SSUpdatableAssetController : NSObject {
    NSString *_bundledManifestVersion;
    SSUpdatableAssetManifest *_bundledManifest;
    SSUpdatableAssetManifest *_currentManifest;
    SSUpdatableAssetCacheManager *_cacheManager;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSURL *bundledManifestURL; // ivar: _bundledManifestURL
@property (readonly, nonatomic) SSUpdatableAssetManifest *currentManifest;
@property (copy, nonatomic) NSURL *manifestURL; // ivar: _manifestURL
@property (readonly, nonatomic) SSUpdatableAssetManifest *newestCachedManifest;


-(id)_bundledManifest;
-(id)_bundledManifestVersion;
-(id)_connection;
-(id)initWithBundledManifestURL:(id)arg0 ;
-(id)initWithBundledManifestURL:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)clearCache:(id)arg0 ;
-(void)dealloc;
-(void)refreshCachedManifest:(id)arg0 ;


@end


#endif