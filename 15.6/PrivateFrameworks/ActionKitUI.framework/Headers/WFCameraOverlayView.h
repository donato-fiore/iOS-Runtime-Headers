// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCAMERAOVERLAYVIEW_H
#define WFCAMERAOVERLAYVIEW_H

@class UIView, UIButton, UILabel, UIImagePickerController;


#import "WFCameraFlashButton.h"
#import "WFCameraShutterButton.h"
#import "WFVolumeButtonManager.h"

@interface WFCameraOverlayView : UIView

@property (weak, nonatomic) WFCameraFlashButton *flashButton; // ivar: _flashButton
@property (weak, nonatomic) UIView *flashView; // ivar: _flashView
@property (weak, nonatomic) UIButton *flipButton; // ivar: _flipButton
@property (weak, nonatomic) UILabel *photosLabel; // ivar: _photosLabel
@property (weak, nonatomic) UIImagePickerController *pickerController; // ivar: _pickerController
@property (weak, nonatomic) WFCameraShutterButton *shutterButton; // ivar: _shutterButton
@property (nonatomic) NSInteger takenPhotos; // ivar: _takenPhotos
@property (nonatomic) NSInteger totalPhotos; // ivar: _totalPhotos
@property (retain, nonatomic) WFVolumeButtonManager *volumeButtonManager; // ivar: _volumeButtonManager


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelPressed;
-(void)flashValueChanged;
-(void)flipPressed;
-(void)layoutSubviews;
-(void)shutterPressed;
-(void)updateButtons;
-(void)updateFlipButton;
-(void)updatePhotosLabel;


@end


#endif