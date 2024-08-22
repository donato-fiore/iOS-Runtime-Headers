// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INIMAGESERVICECONNECTION_H
#define INIMAGESERVICECONNECTION_H

@class NSXPCConnection, NSCache, NSString;
@protocol INImageLoading, INImageStoring;

#import <Foundation/Foundation.h>


@interface INImageServiceConnection : NSObject <INImageLoading, INImageStoring>

 {
    NSXPCConnection *_connection;
    NSCache *_localStorageCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSUInteger servicePriority;
@property (readonly) Class superclass;


+(id)sharedConnection;
// -(BOOL)accessBundleContentForBundleIdentifiers:(id)arg0 withBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)canLoadImageDataForImage:(id)arg0 ;
-(BOOL)canStoreImage:(id)arg0 ;
-(id)_availableBundleIdentifiers;
-(id)_localStorageCache;
-(id)availableSchemasWithError:(*id)arg0 ;
-(id)fetchShareExtensionIntentForExtensionContextUUID:(id)arg0 ;
-(id)imageServiceSchemaURLsForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)loadDataImageFromImage:(id)arg0 scaledSize:(struct ? )arg1 error:(*id)arg2 ;
-(id)loadSchemasForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)schemaURLsForBundleIdentifiers:(id)arg0 ;
-(id)securityScopedURLsForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)serviceProxyWithErrorHandler:(id)arg0 ;
-(id)storeImage:(id)arg0 scaled:(BOOL)arg1 qualityOfService:(unsigned int)arg2 storeType:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)synchronousServiceProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)loadDataImageFromImage:(id)arg0 usingPortableImageLoader:(id)arg1 scaledSize:(struct ? )arg2 completion:(id)arg3 ;
-(void)loadImageDataAndSizeForImage:(id)arg0 reply:(id)arg1 ;
-(void)purgeImageWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)retrieveImageWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)storeUserContext:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif