// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTGROUP_H
#define _UICOLLECTIONLAYOUTGROUP_H

@class UICollectionLayoutItem, NSArray;
@protocol NSCopying, _UICollectionLayoutAPIRespresenting;


#import "_UICollectionLayoutSpacing.h"

@interface _UICollectionLayoutGroup : UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    NSUInteger _layoutAxis;
    BOOL _isCustomGroup;
    NSArray *_subitems;
    NSInteger _count;
    NSArray *_supplementaryItems;
    _UICollectionLayoutSpacing *_interItemSpacing;
    id *_subitemsProvider;
    id *_frameProvider;
    id *_customGroupItemProvider;
    id *_visualFormatProvider;
    NSArray *_visualFormats;
}


@property (nonatomic) NSInteger groupOptions; // ivar: _groupOptions
@property (copy, nonatomic) _UICollectionLayoutSpacing *interItemSpacing;
@property (readonly, nonatomic) BOOL isCustomGroup;
@property (readonly, nonatomic) BOOL isHorizontalGroup;
@property (readonly, nonatomic) BOOL isVerticalGroup;
@property (copy, nonatomic) NSArray *supplementaryItems;


+(id)customGroupWithSize:(id)arg0 frameProvider:(id)arg1 ;
+(id)groupWithLayoutAxis:(NSUInteger)arg0 size:(id)arg1 subitems:(id)arg2 count:(NSInteger)arg3 ;
+(id)horizontalGroupWithSize:(id)arg0 subitem:(id)arg1 count:(NSInteger)arg2 ;
+(id)horizontalGroupWithSize:(id)arg0 subitems:(id)arg1 ;
+(id)horizontalGroupWithSize:(id)arg0 subitemsProvider:(id)arg1 ;
+(id)layoutGroupWithSize:(id)arg0 visualFormats:(id)arg1 itemProvider:(id)arg2 ;
+(id)verticalGroupWithSize:(id)arg0 subitem:(id)arg1 count:(NSInteger)arg2 ;
+(id)verticalGroupWithSize:(id)arg0 subitems:(id)arg1 ;
+(id)verticalGroupWithSize:(id)arg0 subitemsProvider:(id)arg1 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithlayoutSize:(id)arg0 contentInsets:(struct NSDirectionalEdgeInsets )arg1 layoutAxis:(NSUInteger)arg2 isCustomGroup:(BOOL)arg3 subitems:(id)arg4 count:(NSInteger)arg5 supplementaryItems:(id)arg6 interItemSpacing:(id)arg7 groupOptions:(NSInteger)arg8 subitemsProvider:(id)arg9 frameProvider:(unk)arg10 customGroupItemProvider:(id)arg11 visualFormats:(unk)arg12 visualFormatProvider:(id)arg13  ;
-(id)visualDescription;


@end


#endif