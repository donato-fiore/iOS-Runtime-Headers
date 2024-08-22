// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTGRAYSCALESTICKERCONTROLLER_H
#define AVTGRAYSCALESTICKERCONTROLLER_H

@class NSArray, UIColor, NSString;
@protocol AVTPoseCaptureViewControllerDelegate, AVTStickerSheetDelegate, AVTStickerSheetControllerProvider, AVTGrayscaleStickerControllerDelegate, AVTStickerViewControllerImageDelegate, AVTPresenterDelegate, AVTStickerSelectionDelegate;

#import <Foundation/Foundation.h>

#import "AVTUIEnvironment.h"
#import "AVTStickerViewController.h"
#import "AVTUICapabilities.h"
#import "AVTViewSessionProvider.h"

@interface AVTGrayscaleStickerController : NSObject <AVTPoseCaptureViewControllerDelegate, AVTStickerSheetDelegate, AVTStickerSheetControllerProvider>



@property (nonatomic) BOOL accessibilityIgnoresInvertColors; // ivar: _accessibilityIgnoresInvertColors
@property (retain, nonatomic) NSArray *allowedStickers; // ivar: _allowedStickers
@property (nonatomic) BOOL allowsPoseCapture; // ivar: _allowsPoseCapture
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTGrayscaleStickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AVTStickerViewControllerImageDelegate> *imageDelegate; // ivar: _imageDelegate
@property (weak, nonatomic) NSObject<AVTPresenterDelegate> *presenterDelegate; // ivar: _presenterDelegate
@property (weak, nonatomic) NSObject<AVTStickerSelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (nonatomic, getter=shouldShowSelectionLayerForStickers) BOOL showsSelectionLayerForStickers; // ivar: _showsSelectionLayerForStickers
@property (weak, nonatomic) AVTStickerViewController *stickerViewController; // ivar: _stickerViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) AVTUICapabilities *uiCapabilities; // ivar: _uiCapabilities
@property (retain, nonatomic) AVTViewSessionProvider *viewSessionProvider; // ivar: _viewSessionProvider


-(id)init;
-(id)stickerSheetControllerForSelectedAvatar:(id)arg0 stickerSheetModel:(id)arg1 taskScheduler:(id)arg2 ;
-(id)stickerViewControllerForFetchRequest:(id)arg0 allowedStickers:(id)arg1 stickerPacks:(id)arg2 allowPoseCapture:(BOOL)arg3 showUserInfoView:(BOOL)arg4 allowEditing:(BOOL)arg5 backgroundColor:(id)arg6 grayscaleConvertionDelegate:(id)arg7 presenterDelegate:(id)arg8 selectionDelegate:(id)arg9 ;
-(void)poseCaptureViewController:(id)arg0 didCapturePoseWithConfiguration:(id)arg1 avatar:(id)arg2 ;
-(void)poseCaptureViewController:(id)arg0 willCaptureAvatarImage:(id)arg1 completion:(id)arg2 ;
-(void)poseCaptureViewControllerDidCancel:(id)arg0 ;
-(void)stickerSheetController:(id)arg0 didSelectCameraViewForRecord:(id)arg1 ;
-(void)wrapAndPresentViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif