// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWCOLLECTIONCELL_H
#define UITABLEVIEWCOLLECTIONCELL_H

@protocol UICollectionViewTableAllRowAttributes;


#import "UITableViewCell.h"
#import "UIColor.h"
#import "UIVisualEffect.h"

@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>



@property (nonatomic) NSInteger accessoryType;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) UIEdgeInsets backgroundInset;
@property (nonatomic) CGFloat defaultLeadingCellMarginWidth;
@property (nonatomic) CGFloat defaultTrailingCellMarginWidth;
@property (nonatomic) BOOL drawsSeparatorAtBottomOfSection;
@property (nonatomic) BOOL drawsSeparatorAtTopOfSection;
@property (nonatomic) NSInteger editingStyle;
@property (nonatomic) NSInteger indentationLevel;
@property (nonatomic) CGFloat indexBarExtentFromEdge;
@property (nonatomic) BOOL insetsContentViewsToSafeArea;
@property (nonatomic) BOOL layoutMarginsFollowReadableWidth;
@property (nonatomic) int sectionLocation;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;
@property (nonatomic) UIEdgeInsets separatorInset;
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges;
@property (nonatomic) NSInteger separatorStyle;
@property (nonatomic) BOOL shouldIndentWhileEditing;
@property (nonatomic) BOOL showsReorderControl;


-(BOOL)canBecomeFocused;


@end


#endif