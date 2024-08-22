// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISTOREPLAYBACKLAUNCHSHROUD_H
#define VUISTOREPLAYBACKLAUNCHSHROUD_H

@class UIWindow;

#import <Foundation/Foundation.h>


@interface VUIStorePlaybackLaunchShroud : NSObject

@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) UIWindow *window; // ivar: _window


+(id)sharedShroud;
-(id)init;
-(void)_hideWithFadeAnimation:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)_showWithFadeAnimation:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)fadeOut;


@end


#endif