// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE25ACTIVITYSCENEDELEGATEBASE_H
#define _TTC10CHRONOCORE25ACTIVITYSCENEDELEGATEBASE_H

@class UIWindow;
@protocol UIWindowSceneDelegate;

#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore25ActivitySceneDelegateBase : NSObject <UIWindowSceneDelegate>

 {
    ? logger;
    ? viewLogger;
    ? logIdentifier;
    ? viewModel;
}


@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)init;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidBecomeActive:(id)arg0 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)sceneWillResignActive:(id)arg0 ;


@end


#endif