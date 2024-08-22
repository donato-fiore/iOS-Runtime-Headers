// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ASSETVIEWER18CAMERACONTROLSVIEW_H
#define _TTC11ASSETVIEWER18CAMERACONTROLSVIEW_H

@class UIView;



@interface _TtC11AssetViewer18CameraControlsView : UIView {
    ? cameraController;
    ? entityController;
    ? wantsFastMovement;
    ? upButton;
    ? rightButton;
    ? downButton;
    ? leftButton;
    ? fastMovementButton;
    ? zoomOutButton;
    ? zoomInButton;
    ? menuButton;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonPressedWithSender:(id)arg0 ;


@end


#endif