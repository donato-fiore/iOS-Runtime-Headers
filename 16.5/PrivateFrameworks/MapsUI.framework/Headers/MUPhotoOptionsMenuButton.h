// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPHOTOOPTIONSMENUBUTTON_H
#define MUPHOTOOPTIONSMENUBUTTON_H

@class UIButton;
@protocol MUPhotoOptionsMenuButtonDelegate;



@interface MUPhotoOptionsMenuButton : UIButton

@property (weak, nonatomic) NSObject<MUPhotoOptionsMenuButtonDelegate> *delegate; // ivar: _delegate


+(BOOL)_supportsCamera;
+(BOOL)_supportsPhotoLibrary;
+(NSInteger)preferredEntryPoint;
+(NSUInteger)_numberOfSupportedSourceTypes;
+(id)buttonWithDelegate:(id)arg0 ;
// +(id)menuForPhotoOptionsMenuButtonWithCameraCompletion:(id)arg0 libraryCompletion:(unk)arg1  ;
// +(id)menuForPhotoOptionsMenuButtonWithTitle:(id)arg0 symbol:(id)arg1 cameraCompletion:(id)arg2 libraryCompletion:(unk)arg3  ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_captureUserAction:(int)arg0 ;
-(void)_didSelectAddFromLibrary;
-(void)_didSelectTakePhoto;
-(void)_didTapOnMenuButton;
-(void)_setActionMenu;
-(void)_setTouchEvent;


@end


#endif