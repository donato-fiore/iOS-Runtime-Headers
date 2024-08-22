// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOLLECTIONLAYOUTGROUP_H
#define NSCOLLECTIONLAYOUTGROUP_H

@class NSArray;
@protocol NSCopying;


#import "NSCollectionLayoutItem.h"
#import "NSCollectionLayoutSpacing.h"

@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <NSCopying>

 {
    BOOL _hasCheckedIfDecorationItemRequiresRegistration;
}


@property (nonatomic) BOOL _hasDecorationItemRequiringRegistration; // ivar: __hasDecorationItemRequiringRegistration
@property (nonatomic) NSInteger count; // ivar: _count
@property (copy, nonatomic) id *customGroupItemProvider; // ivar: _customGroupItemProvider
@property (nonatomic) NSInteger groupOptions; // ivar: _groupOptions
@property (copy, nonatomic) NSCollectionLayoutSpacing *interItemSpacing; // ivar: _interItemSpacing
@property (copy, nonatomic) id *itemsProvider; // ivar: _itemsProvider
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (copy, nonatomic) NSArray *subitems; // ivar: _subitems
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) id *visualFormatItemProvider; // ivar: _visualFormatItemProvider
@property (copy, nonatomic) NSArray *visualFormats; // ivar: _visualFormats


+(id)_effectiveCopiedSubitemsForSubitems:(id)arg0 count:(NSInteger)arg1 layoutDirection:(NSInteger)arg2 ;
+(id)_effectiveSizeForSize:(id)arg0 count:(NSInteger)arg1 layoutDirection:(NSInteger)arg2 ;
+(id)customGroupWithLayoutSize:(id)arg0 itemProvider:(id)arg1 ;
+(id)horizontalGroupWithLayoutSize:(id)arg0 repeatingSubitem:(id)arg1 count:(NSInteger)arg2 ;
+(id)horizontalGroupWithLayoutSize:(id)arg0 subitem:(id)arg1 count:(NSInteger)arg2 ;
+(id)horizontalGroupWithLayoutSize:(id)arg0 subitems:(id)arg1 ;
+(id)horizontalGroupWithSize:(id)arg0 subitemsProvider:(id)arg1 ;
+(id)layoutGroupWithSize:(id)arg0 visualFormats:(id)arg1 itemProvider:(id)arg2 ;
+(id)verticalGroupWithLayoutSize:(id)arg0 repeatingSubitem:(id)arg1 count:(NSInteger)arg2 ;
+(id)verticalGroupWithLayoutSize:(id)arg0 subitem:(id)arg1 count:(NSInteger)arg2 ;
+(id)verticalGroupWithLayoutSize:(id)arg0 subitems:(id)arg1 ;
+(id)verticalGroupWithSize:(id)arg0 subitemsProvider:(id)arg1 ;
-(BOOL)_isListSolverCompatibleForLayoutAxis:(NSUInteger)arg0 ;
-(BOOL)hasItemProvider;
-(BOOL)hasVisualFormat;
-(BOOL)isCustomGroup;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHorizontalGroup;
-(BOOL)isVerticalGroup;
-(NSUInteger)layoutAxis;
-(id)_externalDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
// -(id)initWithSize:(id)arg0 subitems:(id)arg1 count:(NSInteger)arg2 interItemSpacing:(id)arg3 contentInsets:(struct NSDirectionalEdgeInsets )arg4 edgeSpacing:(id)arg5 layoutDirection:(NSInteger)arg6 supplementaryItems:(id)arg7 visualFormats:(id)arg8 itemsProvider:(id)arg9 visualFormatItemProvider:(unk)arg10 customGroupItemProvider:(id)arg11 options:(unk)arg12 name:(id)arg13 identifier:(unk)arg14  ;
-(id)visualDescription;


@end


#endif