// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWTABLELAYOUTATTRIBUTES_H
#define UICOLLECTIONVIEWTABLELAYOUTATTRIBUTES_H

@protocol UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes;


#import "UICollectionViewLayoutAttributes.h"
#import "UIColor.h"
#import "UIVisualEffect.h"

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes>



@property (nonatomic) NSInteger accessoryType; // ivar: _accessoryType
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) UIEdgeInsets backgroundInset; // ivar: _backgroundInset
@property (nonatomic) CGFloat defaultLeadingCellMarginWidth; // ivar: _defaultLeadingCellMarginWidth
@property (nonatomic) CGFloat defaultTrailingCellMarginWidth; // ivar: _defaultTrailingCellMarginWidth
@property (nonatomic) BOOL drawsSeparatorAtBottomOfSection; // ivar: _drawsSeparatorAtBottomOfSection
@property (nonatomic) BOOL drawsSeparatorAtTopOfSection; // ivar: _drawsSeparatorAtTopOfSection
@property (nonatomic) NSInteger editingStyle; // ivar: _editingStyle
@property (nonatomic) BOOL floating; // ivar: _floating
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (nonatomic) CGFloat indexBarExtentFromEdge; // ivar: _indexBarExtentFromEdge
@property (nonatomic) BOOL insetsContentViewsToSafeArea; // ivar: _insetsContentViewsToSafeArea
@property (nonatomic) BOOL isHeader; // ivar: _isHeader
@property (nonatomic) BOOL layoutMarginsFollowReadableWidth; // ivar: _layoutMarginsFollowReadableWidth
@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (nonatomic) CGFloat maxTitleWidth; // ivar: _maxTitleWidth
@property (nonatomic) BOOL preferredAttributesCached; // ivar: _preferredAttributesCached
@property (nonatomic) int sectionLocation; // ivar: _sectionLocation
@property (copy, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (retain, nonatomic) UIVisualEffect *separatorEffect; // ivar: _separatorEffect
@property (nonatomic) UIEdgeInsets separatorInset; // ivar: _separatorInset
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges; // ivar: _separatorInsetIsRelativeToCellEdges
@property (nonatomic) NSInteger separatorStyle; // ivar: _separatorStyle
@property (nonatomic) BOOL shouldIndentWhileEditing; // ivar: _shouldIndentWhileEditing
@property (nonatomic) BOOL showsReorderControl; // ivar: _showsReorderControl
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


+(NSInteger)automaticValueOptionsForRepresentedElementCategory:(NSUInteger)arg0 ;
+(void)applyValuesFromAttributes:(id)arg0 toAttributes:(id)arg1 valueOptions:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif