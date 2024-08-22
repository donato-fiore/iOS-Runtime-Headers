// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALASSETREPRESENTATIONPRIVATE_H
#define ALASSETREPRESENTATIONPRIVATE_H

@class PLPhotoLibrary, NSString, PLManagedAsset;
@protocol ALAssetsLibraryAsset, PLSidecar;

#import <Foundation/Foundation.h>

#import "ALAssetsLibrary.h"

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset>

 {
    ALAssetsLibrary *_library;
}


@property (retain, nonatomic) PLPhotoLibrary *_photoLibrary; // ivar: _photoLibrary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (nonatomic) ALAssetsLibrary *library;
@property (retain, nonatomic) PLManagedAsset *photo; // ivar: _photo
@property (retain, nonatomic) NSObject<PLSidecar> *sidecar; // ivar: _sidecar
@property (readonly) Class superclass;


+(int)_fileDescriptorForPersistentURL:(id)arg0 ;
+(int)_updateFileDescriptor:(int)arg0 forPersistentURL:(id)arg1 ;
+(void)_clearFileDescriptorQueue;
+(void)_setupFileDescriptorQueue;
-(BOOL)_isImage;
-(BOOL)_isVideo;
-(id)initWithManagedAsset:(id)arg0 sidecar:(id)arg1 extension:(id)arg2 library:(id)arg3 ;
-(void)_performBlockAndWait:(id)arg0 ;
-(void)dealloc;


@end


#endif