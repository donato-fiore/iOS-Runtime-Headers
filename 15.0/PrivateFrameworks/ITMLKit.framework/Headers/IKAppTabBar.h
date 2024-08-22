// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKAPPTABBAR_H
#define IKAPPTABBAR_H

@protocol IKAppTabBarController;

#import <Foundation/Foundation.h>

#import "IKJSTabBar.h"

@interface IKAppTabBar : NSObject

@property (readonly, weak, nonatomic) NSObject<IKAppTabBarController> *controller; // ivar: _controller
@property (weak, nonatomic) IKJSTabBar *jsTabBar; // ivar: _jsTabBar


-(id)initWithTabBarController:(id)arg0 ;
-(void)onSelect;


@end


#endif