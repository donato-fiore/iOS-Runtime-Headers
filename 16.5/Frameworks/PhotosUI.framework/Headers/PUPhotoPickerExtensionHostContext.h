// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOPICKEREXTENSIONHOSTCONTEXT_H
#define PUPHOTOPICKEREXTENSIONHOSTCONTEXT_H

@class NSNumber, NSString, NSUUID;
@protocol PUPhotoPickerHostService;


#import "PUPhotoPickerAbstractExtensionContext.h"

@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService>



@property (nonatomic) BOOL cachedDidDisplayPhotoPickerPreview; // ivar: _cachedDidDisplayPhotoPickerPreview
@property (retain, nonatomic) NSNumber *cachedDidDisplayPhotoPickerSourceType; // ivar: _cachedDidDisplayPhotoPickerSourceType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoPickerHostService> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *photoPickerNavigationBarHidden; // ivar: _photoPickerNavigationBarHidden
@property (copy, nonatomic) NSString *photoPickerViewControllerPrompt; // ivar: _photoPickerViewControllerPrompt
@property (copy, nonatomic) NSString *photoPickerViewControllerTitle; // ivar: _photoPickerViewControllerTitle
@property (retain, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;


-(BOOL)_isHEIFImageFormatFromData:(id)arg0 url:(id)arg1 ;
-(id)_JPEGDataFromImage:(id)arg0 ;
-(id)_JPEGDataFromImageData:(id)arg0 ;
-(id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg0 ;
-(id)_createURLFromPath:(id)arg0 token:(id)arg1 ;
-(id)_pathExtensionFromData:(id)arg0 url:(id)arg1 exportPreset:(NSInteger)arg2 ;
-(id)_remote;
-(void)cancelPhotoPicker;
-(void)completeRequestReturningItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)didDisplayPhotoPickerPreview;
-(void)didDisplayPhotoPickerSourceType:(id)arg0 ;
-(void)didSelectMediaWithInfoDictionary:(id)arg0 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg0 ;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg0 ;
-(void)initiatePhotoPickerSelection;
-(void)invalidatePhotoPickerHostServices;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)performTraitCollectionUpdateUsingData:(id)arg0 completion:(id)arg1 ;


@end


#endif