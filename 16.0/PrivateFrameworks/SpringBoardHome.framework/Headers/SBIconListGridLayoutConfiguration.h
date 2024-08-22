// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLISTGRIDLAYOUTCONFIGURATION_H
#define SBICONLISTGRIDLAYOUTCONFIGURATION_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBHAppLibraryVisualConfiguration.h"
#import "SBHFloatingDockVisualConfiguration.h"
#import "SBHFloatyFolderVisualConfiguration.h"
#import "SBHFolderIconVisualConfiguration.h"
#import "SBHIconAccessoryVisualConfiguration.h"
#import "SBHRootFolderVisualConfiguration.h"
#import "SBHSidebarVisualConfiguration.h"

@interface SBIconListGridLayoutConfiguration : NSObject <NSCopying, BSDescriptionProviding>

 {
    NSMutableDictionary *_iconLabelVisualConfigurations;
    SBHIconGridSizeClassIconImageInfos _iconGridSizeClassIconImageInfos;
    SBHIconGridSizeClassExtraFloats _iconGridSizeClassEditingAnimationStrengths;
}


@property (copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration; // ivar: _appLibraryVisualConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration; // ivar: _floatingDockVisualConfiguration
@property (copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration; // ivar: _floatyFolderVisualConfiguration
@property (copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration; // ivar: _folderIconVisualConfiguration
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration; // ivar: _iconAccessoryVisualConfiguration
@property (nonatomic) SBHIconGridSizeClassSizes iconGridSizeClassSizes; // ivar: _iconGridSizeClassSizes
@property (nonatomic) SBIconImageInfo iconImageInfo;
@property (nonatomic) UIEdgeInsets landscapeLayoutInsets; // ivar: _landscapeLayoutInsets
@property (nonatomic) CGSize listSizeForIconSpacingCalculation; // ivar: _listSizeForIconSpacingCalculation
@property (nonatomic) NSUInteger numberOfLandscapeColumns; // ivar: _numberOfLandscapeColumns
@property (nonatomic) NSUInteger numberOfLandscapeRows; // ivar: _numberOfLandscapeRows
@property (nonatomic) NSUInteger numberOfPortraitColumns; // ivar: _numberOfPortraitColumns
@property (nonatomic) NSUInteger numberOfPortraitRows; // ivar: _numberOfPortraitRows
@property (nonatomic) UIEdgeInsets portraitLayoutInsets; // ivar: _portraitLayoutInsets
@property (readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration; // ivar: _rootFolderVisualConfiguration
@property (nonatomic) NSUInteger rotatedLayoutClusterGridSizeClass; // ivar: _rotatedLayoutClusterGridSizeClass
@property (copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration; // ivar: _sidebarVisualConfiguration
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedIconGridSizeClasses; // ivar: _supportedIconGridSizeClasses


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)editingAnimationStrengthForGridSizeClass:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct SBIconImageInfo )iconImageInfoForGridSizeClass:(NSUInteger)arg0 ;
-(void)setEditingAnimationStrength:(CGFloat)arg0 forGridSizeClass:(NSUInteger)arg1 ;
-(void)setIconLabelVisualConfiguration:(id)arg0 forContentSizeCategory:(id)arg1 ;


@end


#endif