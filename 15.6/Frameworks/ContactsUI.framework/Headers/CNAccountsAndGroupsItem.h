// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNACCOUNTSANDGROUPSITEM_H
#define CNACCOUNTSANDGROUPSITEM_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CNAccountsAndGroupsItem.h"

@interface CNAccountsAndGroupsItem : NSObject

@property (nonatomic) BOOL bypassIfUnique; // ivar: _bypassIfUnique
@property (retain, nonatomic) NSArray *childItems; // ivar: _childItems
@property (nonatomic) NSInteger containerType; // ivar: _containerType
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) id *nameProvider; // ivar: _nameProvider
@property (weak, nonatomic) CNAccountsAndGroupsItem *parentItem; // ivar: _parentItem
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL soloSelect; // ivar: _soloSelect
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(NSInteger)localizedCompare:(id)arg0 ;
-(id)arrayForDisplay:(BOOL)arg0 ;
-(id)initWithType:(NSInteger)arg0 nameProvider:(id)arg1 ;


@end


#endif