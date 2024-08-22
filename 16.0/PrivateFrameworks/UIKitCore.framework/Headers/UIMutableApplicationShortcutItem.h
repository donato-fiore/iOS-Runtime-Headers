// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMUTABLEAPPLICATIONSHORTCUTITEM_H
#define UIMUTABLEAPPLICATIONSHORTCUTITEM_H

@class NSString, NSDictionary;


#import "UIApplicationShortcutItem.h"
#import "UIApplicationShortcutIcon.h"

@interface UIMutableApplicationShortcutItem : UIApplicationShortcutItem

@property (nonatomic) NSUInteger activationMode;
@property (copy, nonatomic) UIApplicationShortcutIcon *icon;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) id *targetContentIdentifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *userInfo;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif