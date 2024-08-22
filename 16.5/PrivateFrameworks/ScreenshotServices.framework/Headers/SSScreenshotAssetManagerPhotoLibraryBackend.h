// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSCREENSHOTASSETMANAGERPHOTOLIBRARYBACKEND_H
#define SSSCREENSHOTASSETMANAGERPHOTOLIBRARYBACKEND_H

@class PHPhotoLibrary, NSString;
@protocol SSScreenshotAssetManagerBackend;

#import <Foundation/Foundation.h>


@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend>

 {
    PHPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_gameHighlightsImageDataFromImage:(id)arg0 withOptions:(id)arg1 ;
+(id)_gameHighlightsImageDataFromImageData:(id)arg0 withOptions:(id)arg1 ;
+(id)imageDataFromImage:(id)arg0 withProperties:(id)arg1 ;
-(id)_ARKitImageDataFromImage:(id)arg0 ;
-(id)photoLibrary;
-(void)_registerEntryWithImage:(id)arg0 options:(id)arg1 retry:(BOOL)arg2 identifierHandler:(id)arg3 ;
-(void)imageForPreviouslyRegisteredIdentifier:(id)arg0 imageHandler:(id)arg1 ;
-(void)registerEntryWithImage:(id)arg0 options:(id)arg1 identifierHandler:(id)arg2 ;
-(void)removeEntryWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveImageToTemporaryLocation:(id)arg0 withName:(id)arg1 imageDescription:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateImageData:(id)arg0 withModificationData:(id)arg1 forEntryWithIdentifier:(id)arg2 registrationOptions:(id)arg3 imageDescription:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif