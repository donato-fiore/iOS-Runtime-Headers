// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSAPPLICATIONSHORTCUTITEM_H
#define SBSAPPLICATIONSHORTCUTITEM_H

@class NSString, NSDictionary, NSData;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SBSApplicationShortcutIcon.h"

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying>



@property (nonatomic) NSUInteger activationMode; // ivar: _activationMode
@property (copy, nonatomic) NSString *bundleIdentifierToLaunch; // ivar: _bundleIdentifierToLaunch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SBSApplicationShortcutIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSData *userInfoData; // ivar: _userInfoData


+(id)_staticApplicationShortcutItemsFromInfoPlistEntry:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)_localizeWithHandler:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif