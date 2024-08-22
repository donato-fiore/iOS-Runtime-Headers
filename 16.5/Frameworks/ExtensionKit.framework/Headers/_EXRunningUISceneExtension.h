// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXRUNNINGUISCENEEXTENSION_H
#define _EXRUNNINGUISCENEEXTENSION_H

@class EXRunningUIExtension, NSString, NSXPCListener, UIWindow;
@protocol UIApplicationDelegate, NSXPCListenerDelegate;



@interface _EXRunningUISceneExtension : EXRunningUIExtension <UIApplicationDelegate, NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListener *internalListener; // ivar: _internalListener
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(BOOL)application:(id)arg0 willFinishLaunchingWithOptions:(id)arg1 ;
-(id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(int)startWithArguments:(*char *)arg0 count:(int)arg1 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidFinishLaunching:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;


@end


#endif