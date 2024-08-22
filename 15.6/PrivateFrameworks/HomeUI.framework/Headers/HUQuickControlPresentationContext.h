// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLPRESENTATIONCONTEXT_H
#define HUQUICKCONTROLPRESENTATIONCONTEXT_H

@class NSSet, UIViewController<HUDetailsPresentationDelegateHost>, HMHome, HFItem<NSCopying>, UIViewController;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HUQuickControlPresentationItemManager.h"

@interface HUQuickControlPresentationContext : NSObject <NSCopying>



@property (nonatomic) NSUInteger colorStyle; // ivar: _colorStyle
@property (copy, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (retain, nonatomic) UIViewController<HUDetailsPresentationDelegateHost> *detailsViewController; // ivar: _detailsViewController
@property (nonatomic) BOOL didAuthenticate; // ivar: _didAuthenticate
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isConfiguredForNonHomeUser; // ivar: _isConfiguredForNonHomeUser
@property (retain, nonatomic) HFItem<NSCopying> *item; // ivar: _item
@property (retain, nonatomic) HUQuickControlPresentationItemManager *itemManager; // ivar: _itemManager
@property (nonatomic) BOOL prefersSystemTransitions; // ivar: _prefersSystemTransitions
@property (nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle; // ivar: _shouldIncludeRoomNameInHeaderTitle
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (weak, nonatomic) UIViewController *sourceViewController; // ivar: _sourceViewController


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif