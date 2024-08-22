// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUWINDOWRESTORATIONMANAGER_H
#define TUWINDOWRESTORATIONMANAGER_H

@class NSString;
@protocol TUWindowRestorationManagerDelegate;

#import <Foundation/Foundation.h>


@interface TUWindowRestorationManager : NSObject

@property (readonly, nonatomic) NSObject *appKitWindow; // ivar: _appKitWindow
@property (weak, nonatomic) NSObject<TUWindowRestorationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *windowFrameName; // ivar: _windowFrameName


-(id)application;
-(id)initWithPluginBundleName:(id)arg0 windowFrameName:(id)arg1 delegate:(id)arg2 ;
-(void)didFinishRestoringWindows;
-(void)setFrameName:(id)arg0 forWindow:(id)arg1 changeFrame:(BOOL)arg2 ;
-(void)windowSceneDidBecomeVisible;


@end


#endif