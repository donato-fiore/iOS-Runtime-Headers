// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPPDELEGATE_H
#define TSAPPDELEGATE_H

@class UIResponder, UIWindow;
@protocol UIApplicationDelegate;



@interface TSAppDelegate : UIResponder <UIApplicationDelegate>

 {
    ? $__lazy_storage_$_resolverManager;
    ? $__lazy_storage_$_resolvers;
    ? swiftSingletonPool;
    ? objcSingletonPool;
    ? $__lazy_storage_$_menuManager;
    ? $__lazy_storage_$_commandCenter;
    ? $__lazy_storage_$_tracker;
}


@property (nonatomic, retain) UIWindow *window; // ivar: window


-(id)init;
-(void)bootstrapWithApplication:(id)arg0 ;


@end


#endif