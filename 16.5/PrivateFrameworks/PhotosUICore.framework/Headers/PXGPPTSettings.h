// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGPPTSETTINGS_H
#define PXGPPTSETTINGS_H



#import "PXSettings.h"

@interface PXGPPTSettings : PXSettings

@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) NSInteger numberOfSections; // ivar: _numberOfSections
@property (nonatomic) NSInteger selectionDecorationStlye; // ivar: _selectionDecorationStlye
@property (nonatomic) BOOL shouldTestNestedScrollView; // ivar: _shouldTestNestedScrollView
@property (nonatomic) BOOL useAssetBadgeDecoration; // ivar: _useAssetBadgeDecoration
@property (nonatomic) BOOL useMultipleScrollableRows; // ivar: _useMultipleScrollableRows


+(id)allPresetNames;
+(id)scrollingPresetNames;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)createLayout;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setDefaultValuesWithPresetName:(id)arg0 ;


@end


#endif