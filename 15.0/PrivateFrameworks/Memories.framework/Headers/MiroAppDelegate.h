// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAPPDELEGATE_H
#define MIROAPPDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol UIApplicationDelegate;



@interface MiroAppDelegate : UIResponder <UIApplicationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;


@end


#endif