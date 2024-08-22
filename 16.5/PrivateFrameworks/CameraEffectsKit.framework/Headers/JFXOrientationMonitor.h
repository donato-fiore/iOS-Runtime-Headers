// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXORIENTATIONMONITOR_H
#define JFXORIENTATIONMONITOR_H

@class UIWindow;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface JFXOrientationMonitor : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *darwinNotificationQ; // ivar: _darwinNotificationQ
@property (nonatomic) int darwinNotificationToken; // ivar: _darwinNotificationToken
@property (nonatomic) NSInteger deviceInterfaceOrientation; // ivar: _deviceInterfaceOrientation
@property (nonatomic) NSInteger deviceInterfaceOrientation_lock; // ivar: _deviceInterfaceOrientation_lock
@property (nonatomic) NSInteger deviceOrientation;
@property (nonatomic) NSInteger deviceOrientation_lock; // ivar: _deviceOrientation_lock
@property (nonatomic) NSInteger interfaceOrientation;
@property (nonatomic) NSInteger interfaceOrientation_lock; // ivar: _interfaceOrientation_lock
@property (readonly, nonatomic) UIWindow *keyWindow; // ivar: _keyWindow


+(BOOL)initialized;
+(void)JFX_initLock;
+(void)initializeWithKeyWindow:(id)arg0 ;
+(void)initializeWithViewController:(id)arg0 ;
-(id)initWithKeyWindow:(id)arg0 ;
-(void)JFX_UIApplicationDidChangeStatusBarOrientationNotification:(id)arg0 ;
-(void)JFX_UIApplicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)JFX_UIApplicationWillEnterForegroundNotification:(id)arg0 ;
-(void)JFX_initDarwinNotification;
-(void)dealloc;


@end


#endif