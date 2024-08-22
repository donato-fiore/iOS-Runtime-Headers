// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDFLOWLAYOUT_H
#define HUGRIDFLOWLAYOUT_H

@class UICollectionViewFlowLayout, NSHashTable, NSString, NSMutableDictionary;
@protocol HUControllableCollectionViewLayout;


#import "HUGridLayoutOptions.h"
#import "HUGridFlowLayout.h"

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout>



@property (retain, nonatomic) NSHashTable *childGridLayouts; // ivar: _childGridLayouts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *indexPathsByItems; // ivar: _indexPathsByItems
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NSMutableDictionary *overrideAttributesByIndexPath; // ivar: _overrideAttributesByIndexPath
@property (weak, nonatomic) HUGridFlowLayout *parentGridLayout; // ivar: _parentGridLayout
@property (readonly, nonatomic) BOOL shouldFlipForRTL; // ivar: _shouldFlipForRTL
@property (readonly) Class superclass;


+(Class)layoutAttributesClass;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)_modifiedLayoutAttributesForAttributes:(id)arg0 ;
-(id)init;
-(id)initForRTL:(BOOL)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(void)_updateContainingGridLayout;
-(void)applyOverrideAttributes:(id)arg0 toItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearAllOverrideAttributesForItems:(id)arg0 ;
-(void)clearOverrideAttributesForItem:(id)arg0 atIndexPath:(id)arg1 ;
-(void)invalidateLayout;
-(void)prepareLayout;
-(void)registerChildGridLayout:(id)arg0 ;
-(void)unregisterChildGridLayout:(id)arg0 ;


@end


#endif