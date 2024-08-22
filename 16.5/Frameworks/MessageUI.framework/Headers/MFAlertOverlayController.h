// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFALERTOVERLAYCONTROLLER_H
#define MFALERTOVERLAYCONTROLLER_H

@class UIWindow, UIWindowScene, UIAlertController;

#import <Foundation/Foundation.h>


@interface MFAlertOverlayController : NSObject

@property (readonly, nonatomic) BOOL isPresentingAlert;
@property (retain, nonatomic) UIWindow *overlayWindow; // ivar: _overlayWindow
@property (readonly, weak, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (readonly, nonatomic) UIAlertController *topmostPresentedAlert;


+(id)log;
-(id)_bottomPresentedAlert;
-(id)_topmostViewController;
-(id)initWithWindowScene:(id)arg0 ;
-(void)_handlePresentationDismissalNotification:(id)arg0 ;
-(void)_setupOverlayWindowWithScene:(id)arg0 ;
-(void)_teardownOverlayWindow;
-(void)dealloc;
-(void)presentAlertController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif