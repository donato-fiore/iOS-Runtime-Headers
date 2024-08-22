// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCAVASSETRESOURCELOADER_H
#define FCAVASSETRESOURCELOADER_H

@class NSString;
@protocol AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType;

#import <Foundation/Foundation.h>

#import "FCAssetManager.h"
#import "FCThreadSafeMutableSet.h"

@interface FCAVAssetResourceLoader : NSObject <AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType>



@property (readonly, nonatomic) FCAssetManager *assetManager; // ivar: _assetManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FCThreadSafeMutableSet *whitelistedMasterPlaylistURLs; // ivar: _whitelistedMasterPlaylistURLs


-(BOOL)_isHLSURL:(id)arg0 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)init;
-(id)initWithCacheDirectory:(id)arg0 ;
-(void)prefetchMasterPlaylistForAssetURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerAVURLAssetForAutomaticResourceManagement:(id)arg0 ;


@end


#endif