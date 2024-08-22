// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT28MAGNIFIERAPPLICATIONDELEGATE_H
#define _TTC16MAGNIFIERSUPPORT28MAGNIFIERAPPLICATIONDELEGATE_H

@class UIResponder;
@protocol UIApplicationDelegate;



@interface _TtC16MagnifierSupport28MagnifierApplicationDelegate : UIResponder <UIApplicationDelegate>

 {
    ? _commandManager;
    ? _stillImageStore;
}


@property (nonatomic, readonly) UIResponder *nextResponder;


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(NSUInteger)application:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;


@end


#endif