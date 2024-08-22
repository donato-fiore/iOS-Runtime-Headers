// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCOLLECTIONLAYOUTITEM_H
#define NSCOLLECTIONLAYOUTITEM_H

@class NSArray, NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutEdgeSpacing.h"
#import "NSCollectionLayoutSize.h"

@interface NSCollectionLayoutItem : NSObject <NSCopying>

 {
    BOOL _containsEstimatedSizeItem;
}


@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSArray *decorationItems; // ivar: _decorationItems
@property (copy, nonatomic) NSCollectionLayoutEdgeSpacing *edgeSpacing; // ivar: _edgeSpacing
@property (nonatomic) BOOL hasComputedContainsEstimatedItem; // ivar: _hasComputedContainsEstimatedItem
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSCollectionLayoutSize *layoutSize;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSCollectionLayoutSize *size; // ivar: _size
@property (copy, nonatomic) NSArray *supplementaryItems; // ivar: _supplementaryItems


+(id)itemWithLayoutSize:(id)arg0 ;
+(id)itemWithLayoutSize:(id)arg0 supplementaryItems:(id)arg1 ;
+(id)itemWithSize:(id)arg0 decorationItems:(id)arg1 ;
-(BOOL)containsEstimatedSizeItem;
-(BOOL)hasCustomGroupItemProvider;
-(BOOL)ignoresRTL;
-(BOOL)isAuxillary;
-(BOOL)isCustomGroup;
-(BOOL)isDecoration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isSupplementary;
-(id)_externalDescription;
-(id)auxillaryItems;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSize:(id)arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 edgeSpacing:(id)arg2 supplementaryItems:(id)arg3 decorationItems:(id)arg4 name:(id)arg5 identifier:(id)arg6 ;
-(struct NSDirectionalEdgeInsets )_effectiveContentInsets;
-(void)_enumerateItemsWithHandler:(id)arg0 ;
-(void)_enumerateSupplementaryItemsWithHandler:(id)arg0 ;


@end


#endif