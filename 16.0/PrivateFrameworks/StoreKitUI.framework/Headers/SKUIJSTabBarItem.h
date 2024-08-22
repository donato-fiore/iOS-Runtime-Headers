// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIJSTABBARITEM_H
#define SKUIJSTABBARITEM_H

@class IKJSObject, JSManagedValue, IKJSNavigationDocument, NSString;
@protocol SKUIJSTabBarItem;


#import "SKUITabBarItem.h"

@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem>

 {
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
}


@property (retain, nonatomic) NSString *badgeValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, nonatomic) NSString *rootURL;
@property (readonly, nonatomic) SKUITabBarItem *tabBarItem; // ivar: _tabBarItem
@property (readonly, nonatomic) NSString *title;


-(id)initWithAppContext:(id)arg0 navigationController:(id)arg1 tabBarItem:(id)arg2 owner:(id)arg3 ;
-(void)dealloc;


@end


#endif