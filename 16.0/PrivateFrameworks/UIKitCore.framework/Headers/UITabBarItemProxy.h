// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABBARITEMPROXY_H
#define UITABBARITEMPROXY_H


#import <Foundation/Foundation.h>

#import "UITabBarItem.h"
#import "UITabBarButton.h"

@interface UITabBarItemProxy : NSObject {
    UITabBarItem *_item;
    UITabBarButton *_view;
}




-(id)initWithItem:(id)arg0 inTabBar:(id)arg1 ;
-(id)item;
-(id)view;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif