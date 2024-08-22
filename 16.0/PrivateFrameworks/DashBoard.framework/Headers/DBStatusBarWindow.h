// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSTATUSBARWINDOW_H
#define DBSTATUSBARWINDOW_H

@class UIWindow;



@interface DBStatusBarWindow : UIWindow

@property (nonatomic, getter=isRightHandDrive) BOOL rightHandDrive; // ivar: _rightHandDrive


-(BOOL)_canBecomeKeyWindow;
-(BOOL)_reversesLinearFocusWrapping;


@end


#endif