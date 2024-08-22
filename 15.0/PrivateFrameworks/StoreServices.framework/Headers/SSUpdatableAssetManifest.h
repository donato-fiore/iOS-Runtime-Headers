// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSUPDATABLEASSETMANIFEST_H
#define SSUPDATABLEASSETMANIFEST_H

@class NSDictionary, NSCache, NSArray, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "SSUpdatableAsset.h"

@interface SSUpdatableAssetManifest : NSObject {
    NSDictionary *_assetsByName;
    NSCache *_imageCache;
}


@property (copy, nonatomic, setter=_setAssets:) NSArray *assets; // ivar: _assets
@property (retain, nonatomic, setter=_setBootstrapAsset:) SSUpdatableAsset *bootstrapAsset; // ivar: _bootstrapAsset
@property (retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL; // ivar: _cacheURL
@property (copy, nonatomic, setter=_setExtraInfo:) NSDictionary *extraInfo; // ivar: _extraInfo
@property (nonatomic, setter=_setLastModifiedTimestamp:) CGFloat lastModifiedTimestamp; // ivar: _lastModifiedTimestamp
@property (copy, nonatomic, setter=_setName:) NSString *name; // ivar: _name
@property (nonatomic, setter=_setPollInterval:) CGFloat pollInterval; // ivar: _pollInterval
@property (nonatomic, setter=_setReloadUrgencyType:) NSInteger reloadUrgencyType; // ivar: _reloadUrgencyType
@property (retain, nonatomic, setter=_setServerURL:) NSURL *serverURL; // ivar: _serverURL
@property (copy, nonatomic, setter=_setVersion:) NSString *version; // ivar: _version


+(id)_osVersionString;
-(id)assetWithName:(id)arg0 ;


@end


#endif