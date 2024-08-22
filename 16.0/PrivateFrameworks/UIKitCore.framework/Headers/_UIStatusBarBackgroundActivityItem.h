// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARBACKGROUNDACTIVITYITEM_H
#define _UISTATUSBARBACKGROUNDACTIVITYITEM_H

@class UIStatusBarIndicatorItem;


#import "_UIStatusBarPillView.h"
#import "_UIStatusBarActivityIconView.h"
#import "_UIStatusBarImageView.h"

@interface _UIStatusBarBackgroundActivityItem : UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarPillView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) _UIStatusBarActivityIconView *iconView; // ivar: _iconView
@property (nonatomic) NSInteger previousType; // ivar: _previousType
@property (retain, nonatomic) _UIStatusBarImageView *secondaryIconView; // ivar: _secondaryIconView


+(BOOL)_identifierContainsItemImage:(id)arg0 ;
+(BOOL)_identifierContainsSecondaryItemImage:(id)arg0 ;
+(CGFloat)_fontSizeAdjustmentForActivityType:(NSInteger)arg0 ;
+(CGFloat)_verticalOffsetForActivityType:(NSInteger)arg0 ;
+(id)backgroundDisplayIdentifier;
+(id)secondaryIconDisplayIdentifier;
-(BOOL)_shouldPulseForActivityType:(NSInteger)arg0 traitCollection:(id)arg1 ;
-(BOOL)_shouldRingForActivityType:(NSInteger)arg0 traitCollection:(id)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg0 fromData:(id)arg1 ;
-(BOOL)crossfadeForUpdate:(id)arg0 ;
-(id)_backgroundActivityViewForIdentifier:(id)arg0 ;
-(id)_backgroundColorForActivityType:(NSInteger)arg0 ;
-(id)_imageNameForActivityType:(NSInteger)arg0 ;
-(id)_secondarySystemImageNameForActivityType:(NSInteger)arg0 ;
-(id)_systemImageNameForActivityType:(NSInteger)arg0 ;
-(id)_textLabelForActivityType:(NSInteger)arg0 ;
-(id)_visualEffectForActivityType:(NSInteger)arg0 traitCollection:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg0 ;
-(id)imageForUpdate:(id)arg0 ;
-(id)imageNameForUpdate:(id)arg0 ;
-(id)imageView;
-(id)indicatorEntryKey;
-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 ;
-(id)secondaryImageForUpdate:(id)arg0 ;
-(id)systemImageNameForUpdate:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;
-(void)applyStyleAttributes:(id)arg0 toDisplayItem:(id)arg1 ;
-(void)updatedDisplayItemsWithData:(id)arg0 ;


@end


#endif