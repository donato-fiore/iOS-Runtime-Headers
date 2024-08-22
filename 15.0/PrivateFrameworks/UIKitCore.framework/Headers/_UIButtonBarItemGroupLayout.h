// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBUTTONBARITEMGROUPLAYOUT_H
#define _UIBUTTONBARITEMGROUPLAYOUT_H

@class UIButtonBarLayout, NSMapTable, NSMutableArray;


#import "_UIButtonBarLayout.h"
#import "UIBarButtonItemGroup.h"
#import "UILayoutGuide.h"

@interface _UIButtonBarItemGroupLayout : UIButtonBarLayout {
    NSMapTable *_itemLayoutMap;
    NSMutableArray *_itemLayouts;
    NSMutableArray *_configuredItemLayouts;
    _UIButtonBarLayout *_representativeLayout;
}


@property (nonatomic) BOOL compact; // ivar: _compact
@property (readonly, nonatomic) UIBarButtonItemGroup *group; // ivar: _group
@property (readonly, nonatomic) UILayoutGuide *groupSizeGuide; // ivar: _groupSizeGuide
@property (copy, nonatomic) id *itemViewGenerator; // ivar: _itemViewGenerator
@property (nonatomic) BOOL suppressSpacing; // ivar: _suppressSpacing
@property (nonatomic) BOOL useGroupSizing; // ivar: _useGroupSizing


-(BOOL)isGroupLayout;
-(BOOL)isSpaceLayout;
-(BOOL)shouldHoriziontallyCenterView:(id)arg0 ;
-(CGFloat)minimumLayoutWidthGivenMinimumSpaceWidth:(CGFloat)arg0 ;
-(id)_itemLayouts;
-(id)_newLayoutForBarButtonItem:(id)arg0 useGroupSizing:(BOOL)arg1 ;
-(id)_representativeLayout;
-(id)description;
-(id)initWithLayoutMetrics:(id)arg0 ;
-(id)initWithLayoutMetrics:(id)arg0 barButtonItemGroup:(id)arg1 ;
-(id)layoutForBarButtonItem:(id)arg0 ;
-(id)layoutsForSpacerItem:(id)arg0 ;
-(id)subLayouts;
-(void)_addConstraintsToActivate:(id)arg0 toDeactivate:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg0 ;
-(void)_addLayoutViews:(id)arg0 ;
-(void)_configure;
-(void)_iterateConfiguredLayouts:(id)arg0 ;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg0 doneAppearanceChanged:(BOOL)arg1 ;


@end


#endif