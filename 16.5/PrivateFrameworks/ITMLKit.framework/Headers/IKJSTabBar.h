// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSTABBAR_H
#define IKJSTABBAR_H

@class NSString, NSArray;
@protocol NSObject, IKJSTabBar, _IKJSTabBarProxy, _IKJSTabBar;


#import "IKJSObject.h"
#import "IKAppTabBar.h"
#import "IKJSTabBarItem.h"

@interface IKJSTabBar : IKJSObject <NSObject, IKJSTabBar, _IKJSTabBarProxy, _IKJSTabBar>



@property (readonly, weak, nonatomic) IKAppTabBar *appTabBar; // ivar: _appTabBar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IKJSTabBarItem *selectedTab;
@property (readonly) Class superclass;
@property (retain) NSArray *tabItems; // ivar: _tabItems
@property (readonly, nonatomic) NSArray *tabs;


-(id)asPrivateIKJSTabBar;
-(id)initWithAppContext:(id)arg0 appTabBar:(id)arg1 ;
-(id)transientTab;
-(void)_onSelectSync;
-(void)onSelect;


@end


#endif