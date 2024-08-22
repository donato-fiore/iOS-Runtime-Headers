// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMENUPAGECOMPONENT_H
#define SKUIMENUPAGECOMPONENT_H

@class NSMutableArray, NSArray, NSString;


#import "SKUIPageComponent.h"
#import "SKUISegmentedControlViewElement.h"

@interface SKUIMenuPageComponent : SKUIPageComponent {
    NSMutableArray *_childrenComponents;
    NSMutableArray *_sortURLStrings;
    NSMutableArray *_titles;
}


@property (readonly, nonatomic) NSArray *allTitles;
@property (readonly, nonatomic) NSInteger defaultSelectedIndex; // ivar: _defaultSelectedIndex
@property (readonly, nonatomic) NSInteger menuStyle; // ivar: _menuStyle
@property (readonly, nonatomic) NSString *menuTitle; // ivar: _menuTitle
@property (readonly, nonatomic) float menuTitleFontSize; // ivar: _menuTitleFontSize
@property (readonly, nonatomic) NSInteger menuTitleFontWeight; // ivar: _menuTitleFontWeight
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSString *titleForMoreItem; // ivar: _titleForMoreItem
@property (readonly, nonatomic) SKUISegmentedControlViewElement *viewElement;


-(NSInteger)componentType;
-(id)_componentWithContext:(id)arg0 ;
-(id)childComponentsForIndex:(NSInteger)arg0 ;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithRoomSortData:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 ;
-(id)sortURLForIndex:(NSInteger)arg0 ;
-(id)titleForIndex:(NSInteger)arg0 ;
-(void)_setChildComponents:(id)arg0 forIndex:(NSInteger)arg1 ;


@end


#endif