// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIINDEXBARCONTROL_H
#define SKUIINDEXBARCONTROL_H

@class UIControl, NSArray, NSMapTable, NSIndexPath, NSDictionary;
@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;


#import "SKUIIndexBarEntry.h"

@interface SKUIIndexBarControl : UIControl {
    SKUIIndexBarEntry *_combinedEntry;
    BOOL _didSendPastBottom;
    BOOL _didSendPastTop;
    NSArray *_displayEntries;
    BOOL _hasValidCombinedEntry;
    BOOL _hasValidDisplayEntries;
    BOOL _hasValidNumberOfSections;
    BOOL _hasValidTotalEntryCount;
    BOOL _hasValidTotalSize;
    NSMapTable *_indexPathToEntryMapTable;
    NSIndexPath *_lastSelectedIndexPath;
    CGFloat _lineSpacing;
    NSInteger _numberOfSections;
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;
    NSInteger _totalEntryCount;
    CGSize _totalSize;
    ? _dataSourceDelegateFlags;
}


@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (weak, nonatomic) NSObject<SKUIIndexBarControlDataSource> *dataSource; // ivar: _dataSource
@property (copy, nonatomic) NSDictionary *defaultTextAttributes; // ivar: _defaultTextAttributes
@property (weak, nonatomic) NSObject<SKUIIndexBarControlDelegate> *delegate; // ivar: _delegate
@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (readonly, nonatomic) NSInteger numberOfSections;


-(BOOL)_reloadLineSpacing;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSInteger)_numberOfEntriesInSection:(NSInteger)arg0 ;
-(NSInteger)_totalEntryCount;
-(NSInteger)numberOfEntriesInSection:(NSInteger)arg0 ;
-(id)_allEntries;
-(id)_allRequiredEntries;
-(id)_combinedEntry;
-(id)_displayEntries;
-(id)_displayEntriesThatFitInViewForGroupedEntries;
-(id)_entryAtIndexPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_visibleBounds;
-(struct CGSize )_sizeForEntries:(id)arg0 ;
-(struct CGSize )_sizeForEntryAtIndexPath:(id)arg0 ;
-(struct CGSize )_totalSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureNewEntry:(id)arg0 ;
-(void)_enumerateEntryIndexPathsUsingBlock:(id)arg0 ;
-(void)_invalidateDisplayEntries;
-(void)_invalidateForChangedLayoutProperties;
-(void)_sendSelectionForTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)reloadCombinedEntry;
-(void)reloadData;
-(void)reloadEntryAtIndexPath:(id)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif