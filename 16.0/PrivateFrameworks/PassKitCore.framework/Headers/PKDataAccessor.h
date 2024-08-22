// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDATAACCESSOR_H
#define PKDATAACCESSOR_H

@class NSData, NSBundle;

#import <Foundation/Foundation.h>

#import "PKRemoteAssetManager.h"

@interface PKDataAccessor : NSObject

@property (readonly, nonatomic) NSData *archiveData;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSData *manifestHash;
@property (readonly, nonatomic) PKRemoteAssetManager *remoteAssetManager;
@property (readonly, nonatomic) BOOL remoteAssetsDownloaded;
@property (readonly, nonatomic) NSData *serializedFileWrapper;


-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg0 ;
-(BOOL)remoteAssetsDownloadedForScreenScale:(CGFloat)arg0 suffix:(id)arg1 ;
-(id)cachedImageSetForType:(NSInteger)arg0 withDisplayProfile:(id)arg1 displayTraits:(id)arg2 ;
-(id)content;
-(id)dataForBundleResource:(id)arg0 ;
-(id)dataForBundleResourceNamed:(id)arg0 withExtension:(id)arg1 ;
-(id)dataForBundleResources:(id)arg0 ;
-(id)dictionary;
-(id)displayProfileOfType:(NSInteger)arg0 ;
-(id)imageSetForType:(NSInteger)arg0 displayProfile:(id)arg1 preheat:(BOOL)arg2 ;
-(id)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 preheat:(BOOL)arg4 ;
-(id)passLocalizedStringForKey:(id)arg0 ;
-(id)remoteAssetManagerForSEIDs:(id)arg0 ;
-(id)resourceValueForKey:(id)arg0 ;
-(void)_downloadRemoteAssetsWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)contentWithCompletion:(id)arg0 ;
-(void)dictionaryWithCompletion:(id)arg0 ;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg0 completion:(id)arg1 ;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg0 seids:(id)arg1 completion:(id)arg2 ;
-(void)downloadRemoteAssetsWithCompletion:(id)arg0 ;
-(void)downloadRemoteAssetsWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(CGFloat)arg0 suffix:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 completion:(id)arg3 ;
-(void)downloadRemoteAssetsWithScreenScale:(CGFloat)arg0 suffix:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 seids:(id)arg3 completion:(id)arg4 ;
-(void)downloadRemoteAssetsWithScreenScale:(CGFloat)arg0 suffix:(id)arg1 completion:(id)arg2 ;
-(void)imageSetForType:(NSInteger)arg0 displayProfile:(id)arg1 preheat:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)imageSetForType:(NSInteger)arg0 screenScale:(CGFloat)arg1 suffix:(id)arg2 displayProfile:(id)arg3 preheat:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(id)arg0 ;
-(void)revocationStatusWithCompletion:(id)arg0 ;
-(void)updateSettings:(NSUInteger)arg0 ;


@end


#endif