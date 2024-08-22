// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBWINDOWSTATE_H
#define WBWINDOWSTATE_H

@class NSString, NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding, WBSerializable;

#import <Foundation/Foundation.h>

#import "WBTabGroup.h"

@interface WBWindowState : NSObject <NSCopying, NSSecureCoding, WBSerializable>



@property (copy, nonatomic) NSString *activeTabGroupUUID; // ivar: _activeTabGroupUUID
@property (readonly, copy, nonatomic) NSString *customUnifiedFieldText;
@property (retain, nonatomic) NSDate *dateClosed; // ivar: _dateClosed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSDictionary *extraAttributes; // ivar: _extraAttributes
@property (readonly) NSUInteger hash;
@property (nonatomic) int identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isFavoritesBarHidden;
@property (readonly, nonatomic) BOOL isMinimized;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) BOOL isPrivateWindow;
@property (readonly, nonatomic) BOOL isTabBarHidden;
@property (readonly, nonatomic) WBTabGroup *localTabGroup; // ivar: _localTabGroup
@property (readonly, nonatomic) BOOL prefersSidebarVisible;
@property (readonly, nonatomic) WBTabGroup *privateTabGroup; // ivar: _privateTabGroup
@property (copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *tabGroupsToActiveTabs; // ivar: _tabGroupsToActiveTabs
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)activeTabUUIDForTabGroupWithUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 localTabGroup:(id)arg1 privateTabGroup:(id)arg2 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 activeTabGroupUUID:(id)arg1 localTabGroup:(id)arg2 privateTabGroup:(id)arg3 sceneID:(id)arg4 windowID:(int)arg5 ;
-(id)initWithUUID:(id)arg0 sceneID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeActiveTabUUIDForTabGroupWithUUID:(id)arg0 ;
-(void)removeAllActiveTabUUIDs;
-(void)setActiveTabUUID:(id)arg0 forTabGroupWithUUID:(id)arg1 ;


@end


#endif