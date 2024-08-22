// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFREORDERABLEHOMEKITITEMLIST_H
#define HFREORDERABLEHOMEKITITEMLIST_H

@class NSString, NSArray;
@protocol NSCopying, NSMutableCopying;


#import "HFReorderableItemListAbstractBase.h"

@interface HFReorderableHomeKitItemList : HFReorderableItemListAbstractBase <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSString *_applicationDataKey;
@property (readonly, nonatomic) id *sortedHomeKitItemComparator;
@property (readonly, nonatomic) id *sortedHomeKitObjectComparator;
@property (copy, nonatomic) NSArray *sortedHomeKitObjectIdentifiers; // ivar: _sortedHomeKitObjectIdentifiers


+(id)_dataForHomeKitItem:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_actionSetTypeComparator:(SEL)arg0 ;
-(id)_homeKitItemDataComparator:(SEL)arg0 ;
-(id)_reorderableObjectDateAddedComparator:(SEL)arg0 ;
-(id)_reorderableObjectTitleComparator:(SEL)arg0 ;
-(id)_sortedHomeKitIdentifierComparator:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithApplicationDataContainer:(id)arg0 category:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif