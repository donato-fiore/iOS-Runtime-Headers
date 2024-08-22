// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTVIEW_H
#define CNCONTACTVIEW_H

@class NSDictionary, UIColor, CNContact, UIView;


#import "CNMaskingTableView.h"
#import "CNContactHeaderView.h"

@interface CNContactView : CNMaskingTableView

@property (copy, nonatomic) NSDictionary *actionTextAttributes; // ivar: _actionTextAttributes
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=isCellsLayoutCachingEnabled) BOOL cellsLayoutCachingEnabled; // ivar: _cellsLayoutCachingEnabled
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) UIView *customHeaderView; // ivar: _customHeaderView
@property (readonly, nonatomic) CNContactHeaderView *defaultHeaderView;
@property (copy, nonatomic) NSDictionary *labelTextAttributes; // ivar: _labelTextAttributes
@property (nonatomic) BOOL needsUpdateVisibleCells; // ivar: _needsUpdateVisibleCells
@property (nonatomic) CGSize oldSize; // ivar: _oldSize
@property (retain, nonatomic) UIColor *sectionBackgroundColor; // ivar: _sectionBackgroundColor
@property (retain, nonatomic) UIColor *selectedCellBackgroundColor; // ivar: _selectedCellBackgroundColor
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) BOOL shouldUseMapTiles; // ivar: _shouldUseMapTiles
@property (copy, nonatomic) NSDictionary *valueTextAttributes; // ivar: _valueTextAttributes


+(BOOL)isFixedValueProperty:(id)arg0 ;
+(BOOL)isMultiValueProperty:(id)arg0 ;
+(Class)classForCellIdentifier:(id)arg0 ;
+(id)allCardProperties;
+(id)allImageProperties;
+(id)cellIdentifierForActions;
+(id)cellIdentifierForClass:(Class)arg0 ;
+(id)cellIdentifierForContactContainerEditingGroup;
+(id)cellIdentifierForDropdownMenuActions;
+(id)cellIdentifierForEditingProperty:(id)arg0 ;
+(id)cellIdentifierForFaceTimeGroup;
+(id)cellIdentifierForLinkedCardsEditingGroup;
+(id)cellIdentifierForLinkedCardsGroup;
+(id)cellIdentifierForLinkedCardsPlaceholderGroup;
+(id)cellIdentifierForProperty:(id)arg0 ;
+(id)cellIdentifierForPropertyPlaceholder;
+(id)cellIdentifierForSplitActions;
+(id)defaultCardProperties;
+(id)nameProperties;
+(id)namePropertiesForContact:(id)arg0 ;
+(id)optionalCardProperties;
+(id)requiredNameProperties;
-(id)initWithFrame:(struct CGRect )arg0 contact:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 contact:(id)arg2 ;
-(void)_cnui_applyContactStyle;
-(void)applyCellAppearance:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)registerContactCellClass:(Class)arg0 ;
-(void)setAttributesFromContactView:(id)arg0 runningInContactsAppOniPad:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFontColors;
-(void)updateFontSizes;
-(void)updateTableViewMetrics;
-(void)updateVisibleCellsIfNeeded;


@end


#endif