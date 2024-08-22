// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIAPPLICATIONSHORTCUTITEM_H
#define UIAPPLICATIONSHORTCUTITEM_H

@class NSString, SBSApplicationShortcutItem, NSDictionary, NSData;
@protocol BSXPCCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "UIApplicationShortcutIcon.h"

@interface UIApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSUInteger activationMode; // ivar: _activationMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIApplicationShortcutIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSData *userInfoData; // ivar: _userInfoData


+(NSUInteger)_sbsActivationModeFromUIActivationMode:(NSUInteger)arg0 ;
+(NSUInteger)_uiActivationModeFromSBSActivationMode:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithType:(id)arg0 localizedTitle:(id)arg1 localizedSubtitle:(id)arg2 icon:(id)arg3 userInfoData:(id)arg4 activationMode:(NSUInteger)arg5 targetContentIdentifier:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSBSApplicationShortcutItem:(id)arg0 ;
-(id)initWithType:(id)arg0 localizedTitle:(id)arg1 ;
-(id)initWithType:(id)arg0 localizedTitle:(id)arg1 localizedSubtitle:(id)arg2 icon:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif