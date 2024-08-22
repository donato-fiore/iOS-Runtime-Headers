// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKHANDWRITINGWINDOW_H
#define CKHANDWRITINGWINDOW_H

@class UIWindow;



@interface CKHandwritingWindow : UIWindow

@property (nonatomic) BOOL eatOrientationEvents; // ivar: _eatOrientationEvents


-(BOOL)_canAffectStatusBarAppearance;
-(void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg0 ;


@end


#endif