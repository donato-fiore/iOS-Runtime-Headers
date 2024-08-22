// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOPICKERHOSTVIEWCONTROLLER_H
#define PUPHOTOPICKERHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, NSExtensionContext;
@protocol PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler, PUPhotoPickerHostViewControllerDelegate, PUPhotoPickerHostService;



@interface PUPhotoPickerHostViewController : UIRemoteViewController <PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler>



@property (nonatomic, getter=_isInvalidated) BOOL _invalidated; // ivar: __invalidated
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoPickerHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSExtensionContext *hostExtensionContext; // ivar: _hostExtensionContext
@property (readonly, nonatomic) NSObject<PUPhotoPickerHostService> *hostProxy;
@property (readonly) Class superclass;


-(id)_hostContext;
-(void)invalidate;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)performTraitCollectionUpdateWithCompletion:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif