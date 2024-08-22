// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITABBARITEM_H
#define SKUITABBARITEM_H

@class UIViewController, NSString, NSURL, UITabBarItem, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUITabBarItem : NSObject <NSCopying>



@property (nonatomic) BOOL alwaysCreatesRootViewController; // ivar: _alwaysCreatesRootViewController
@property (nonatomic) NSInteger barTintStyle; // ivar: _barTintStyle
@property (retain, nonatomic) UIViewController *customRootViewController; // ivar: _customRootViewController
@property (copy, nonatomic) NSString *metricsIdentifier; // ivar: _metricsIdentifier
@property (copy, nonatomic) NSURL *rootURL; // ivar: _rootURL
@property (retain, nonatomic) Class rootViewControllerClass; // ivar: _rootViewControllerClass
@property (readonly, nonatomic) NSString *tabIdentifier; // ivar: _tabIdentifier
@property (retain, nonatomic) UITabBarItem *underlyingTabBarItem; // ivar: _underlyingTabBarItem
@property (retain, nonatomic) UIColor *userInterfaceTintColor; // ivar: _userInterfaceTintColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTabIdentifier:(id)arg0 ;


@end


#endif