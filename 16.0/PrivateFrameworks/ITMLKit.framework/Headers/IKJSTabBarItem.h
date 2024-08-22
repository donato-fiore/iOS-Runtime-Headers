// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSTABBARITEM_H
#define IKJSTABBARITEM_H

@class NSString, JSManagedValue;
@protocol NSObject, IKJSTabBarItem, _IKJSTabBarItemProxy, _IKJSTabBarItem, IKAppNavigationController;


#import "IKJSObject.h"
#import "IKJSNavigationDocument.h"
#import "IKJSTabBar.h"

@interface IKJSTabBarItem : IKJSObject <NSObject, IKJSTabBarItem, _IKJSTabBarItemProxy, _IKJSTabBarItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) JSManagedValue *managedNavigationDocument; // ivar: _managedNavigationDocument
@property (retain, nonatomic) JSManagedValue *managedSelf; // ivar: _managedSelf
@property (readonly, weak, nonatomic) NSObject<IKAppNavigationController> *navigationControllerDelegate; // ivar: _navigationControllerDelegate
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument; // ivar: _navigationDocument
@property (weak, nonatomic) IKJSTabBar *owner; // ivar: _owner
@property (readonly) Class superclass;


-(id)asPrivateIKJSTabBarItem;
-(id)initWithAppContext:(id)arg0 identifier:(id)arg1 navigationController:(id)arg2 owner:(id)arg3 ;
-(void)dealloc;


@end


#endif