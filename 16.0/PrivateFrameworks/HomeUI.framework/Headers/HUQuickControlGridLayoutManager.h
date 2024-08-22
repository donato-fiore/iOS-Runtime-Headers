// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLGRIDLAYOUTMANAGER_H
#define HUQUICKCONTROLGRIDLAYOUTMANAGER_H

@class NSArray, UICollectionView, HFItemManager<HUQuickControlCollectionItemManaging>, NSMutableArray;

#import <Foundation/Foundation.h>

#import "HUQuickControlCollectionViewControllerLayoutOptions.h"

@interface HUQuickControlGridLayoutManager : NSObject

@property (readonly, nonatomic) NSArray *collectionSectionSettings;
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager; // ivar: _itemManager
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) NSMutableArray *sectionSettingsArray; // ivar: _sectionSettingsArray
@property (readonly, nonatomic) NSInteger viewSizeSubclass;


-(CGFloat)interItemSpacingForItemSize:(NSUInteger)arg0 layoutOptions:(id)arg1 ;
-(CGFloat)sectionTopPaddingInSection:(NSUInteger)arg0 withLayoutOptions:(id)arg1 ;
-(NSUInteger)_mostImportantItemTypeForSection:(NSUInteger)arg0 ;
-(NSUInteger)itemSizeForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfColumnsInSection:(NSUInteger)arg0 ;
-(NSUInteger)titlePositionForSection:(NSUInteger)arg0 ;
-(id)_settingsForSectionNumber:(NSUInteger)arg0 sectionIdentifier:(id)arg1 layoutOptions:(id)arg2 ;
-(id)_viewProfileClassesForSection:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCollectionView:(id)arg0 itemManager:(id)arg1 layoutOptions:(id)arg2 ;
-(void)generateSectionSettings;


@end


#endif