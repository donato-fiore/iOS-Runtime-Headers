// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABCONTEXTMENUIDENTIFIER_H
#define TABCONTEXTMENUIDENTIFIER_H

@class NSUUID;
@protocol NSCopying, TabCollectionItem;

#import <Foundation/Foundation.h>


@interface TabContextMenuIdentifier : NSObject <NSCopying>



@property (readonly, weak, nonatomic) NSObject<TabCollectionItem> *sourceItem; // ivar: _sourceItem
@property (readonly, nonatomic) NSUUID *tabUUID; // ivar: _tabUUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTabUUID:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif