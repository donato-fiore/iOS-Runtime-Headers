// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACCOUNTSANDGROUPSITEM_H
#define CNACCOUNTSANDGROUPSITEM_H

@class NSArray, NSString, CNGroup, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CNAccountsAndGroupsItem.h"

@interface CNAccountsAndGroupsItem : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL acceptsVCardDrop;
@property (nonatomic) BOOL bypassIfUnique; // ivar: _bypassIfUnique
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canEmail;
@property (readonly, nonatomic) BOOL canExport;
@property (readonly, nonatomic) BOOL canMessage;
@property (readonly, nonatomic) BOOL canRename;
@property (readonly, nonatomic) BOOL canShowContextMenu;
@property (retain, nonatomic) NSArray *childItems; // ivar: _childItems
@property (nonatomic) NSInteger contactCount; // ivar: _contactCount
@property (readonly, nonatomic) NSString *contactCountString;
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (nonatomic) NSInteger containerType; // ivar: _containerType
@property (retain, nonatomic) CNGroup *group; // ivar: _group
@property (readonly, nonatomic) UIImage *groupSymbol;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isEditable;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) id *nameProvider; // ivar: _nameProvider
@property (weak, nonatomic) CNAccountsAndGroupsItem *parentItem; // ivar: _parentItem
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL shouldHide; // ivar: _shouldHide
@property (nonatomic) BOOL soloSelect; // ivar: _soloSelect
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(NSInteger)localizedCompare:(id)arg0 ;
-(id)arrayForDisplay:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSInteger)arg0 nameProvider:(id)arg1 ;


@end


#endif