// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPRESENTATIONCONTROLLERWINDOW_H
#define CKPRESENTATIONCONTROLLERWINDOW_H

@class UIWindow;



@interface CKPresentationControllerWindow : UIWindow

@property (nonatomic) BOOL restrictedToPortraitOrientation; // ivar: _restrictedToPortraitOrientation


-(BOOL)_canAffectStatusBarAppearance;
-(id)initWithFrame:(struct CGRect )arg0 allowsRotation:(BOOL)arg1 restrictedToPortraitOrientation:(BOOL)arg2 ;
-(id)initWithWindowScene:(id)arg0 allowsRotation:(BOOL)arg1 restrictedToPortraitOrientation:(BOOL)arg2 ;
-(id)initWithWindowScene:(id)arg0 frame:(struct CGRect )arg1 allowsRotation:(BOOL)arg2 restrictedToPortraitOrientation:(BOOL)arg3 ;
-(void)restrictedToPortraitOrientation:(BOOL)arg0 ;


@end


#endif