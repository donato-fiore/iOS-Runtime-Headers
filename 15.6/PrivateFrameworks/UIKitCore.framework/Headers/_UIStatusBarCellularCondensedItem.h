// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARCELLULARCONDENSEDITEM_H
#define _UISTATUSBARCELLULARCONDENSEDITEM_H

@class UIStatusBarCellularItem;


#import "_UIStatusBarCellularNetworkTypeView.h"
#import "_UIStatusBarMultilineStringView.h"
#import "_UIStatusBarDualCellularSignalView.h"
#import "_UIStatusBarStringView.h"

@interface _UIStatusBarCellularCondensedItem : UIStatusBarCellularItem

@property (retain, nonatomic) _UIStatusBarCellularNetworkTypeView *animatedNetworkTypeView; // ivar: _animatedNetworkTypeView
@property (retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // ivar: _dualNameView
@property (retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // ivar: _dualSignalView
@property (retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameAndTypeView; // ivar: _dualSingleLineNameAndTypeView
@property (retain, nonatomic) _UIStatusBarStringView *dualSingleLineNameView; // ivar: _dualSingleLineNameView
@property (nonatomic) BOOL reducesFontSize; // ivar: _reducesFontSize


+(id)animatedTypeDisplayIdentifier;
+(id)dualNameDisplayIdentifier;
+(id)dualSignalStrengthDisplayIdentifier;
+(id)dualSingleLineNameAndTypeDisplayIdentifier;
+(id)dualSingleLineNameDisplayIdentifier;
+(id)groupWithHighPriority:(NSInteger)arg0 lowPriority:(NSInteger)arg1 typeClass:(Class)arg2 allowDualNetwork:(BOOL)arg3 ;
-(BOOL)_animateServiceType:(NSInteger)arg0 prefixLength:(*NSInteger)arg1 currentType:(NSInteger)arg2 ;
-(BOOL)_showCallFowardingForEntry:(id)arg0 ;
-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(id)_fontForEntry:(id)arg0 styleAttributes:(id)arg1 baselineOffset:(*CGFloat)arg2 ;
-(id)_singleCellularEntryMatching:(id)arg0 ;
-(id)_stringForCellularType:(NSInteger)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)entryForDisplayItemWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 ;
-(id)viewForIdentifier:(id)arg0 ;
-(struct _NSRange )_nonCondensedFontRangeForEntry:(id)arg0 ;
-(void)applyStyleAttributes:(id)arg0 toDisplayItem:(id)arg1 ;
-(void)prepareAnimation:(id)arg0 forDisplayItem:(id)arg1 ;


@end


#endif