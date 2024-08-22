// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLIENTPHOTOLIBRARYBUNDLE_H
#define PLCLIENTPHOTOLIBRARYBUNDLE_H

@class PLLazyObject;


#import "PLPhotoLibraryBundle.h"

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {
    PLLazyObject *_lazyClientSandboxExtensionCache;
}




-(id)clientSandboxExtensionCache;
-(id)initWithLibraryURL:(id)arg0 bundleController:(id)arg1 ;
-(id)newAssetsdClient;
-(id)newBoundAssetsdServicesTable;
-(id)newChangePublisher;
-(id)newLibraryServicesManager;
-(id)transferAssets:(id)arg0 toBundle:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)_initClientSandboxExtensionCache;
-(void)_invalidateClientSandboxExtensionCache;
-(void)close;
-(void)resetClientSandboxExtensionCache;
-(void)setCloudPhotoLibraryEnabled:(BOOL)arg0 ;
-(void)setPhotoStreamEnabled:(BOOL)arg0 ;
-(void)setSharedAlbumEnabled:(BOOL)arg0 ;


@end


#endif