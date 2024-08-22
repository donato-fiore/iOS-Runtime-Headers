// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUDEBUGWINDOW_H
#define TUDEBUGWINDOW_H

@class UIWindow, UIViewController;



@interface TUDebugWindow : UIWindow {
    ? debugDelegate;
    ? isAllowed;
    ? isPresenting;
    ? _observableRootViewController;
}


@property (nonatomic, retain) UIViewController *rootViewController;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(void)motionBegan:(NSInteger)arg0 withEvent:(id)arg1 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif