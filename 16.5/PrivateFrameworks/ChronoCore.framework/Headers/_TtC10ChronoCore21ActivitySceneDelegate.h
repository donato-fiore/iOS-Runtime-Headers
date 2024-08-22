// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10CHRONOCORE21ACTIVITYSCENEDELEGATE_H
#define _TTC10CHRONOCORE21ACTIVITYSCENEDELEGATE_H

@class TtC10ChronoCore25ActivitySceneDelegateBase;



@interface _TtC10ChronoCore21ActivitySceneDelegate : TtC10ChronoCore25ActivitySceneDelegateBase {
    ? _cancellables;
    ? _viewController;
    ? _viewModel;
}




-(id)init;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidDisconnect:(id)arg0 ;


@end


#endif