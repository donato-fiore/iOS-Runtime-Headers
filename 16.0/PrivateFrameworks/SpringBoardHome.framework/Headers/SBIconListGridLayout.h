// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLISTGRIDLAYOUT_H
#define SBICONLISTGRIDLAYOUT_H

@class NSMutableDictionary, UIFont, NSString;
@protocol SBIconListLayout, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBHAppLibraryVisualConfiguration.h"
#import "SBHFloatingDockVisualConfiguration.h"
#import "SBHFloatyFolderVisualConfiguration.h"
#import "SBHFolderIconVisualConfiguration.h"
#import "SBHIconAccessoryVisualConfiguration.h"
#import "SBIconListGridLayoutConfiguration.h"
#import "SBHRootFolderVisualConfiguration.h"
#import "SBHSidebarVisualConfiguration.h"

@interface SBIconListGridLayout : NSObject <SBIconListLayout, BSDescriptionProviding>

 {
    NSMutableDictionary *_labelFonts;
    UIFont *_accessoryFont;
    UIFont *_accessoryBoldFont;
}


@property (readonly, copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration;
@property (readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (readonly, nonatomic) SBHIconGridSizeClassSizes iconGridSizeClassSizes;
@property (readonly, nonatomic) SBIconImageInfo iconImageInfo;
@property (readonly, copy, nonatomic) SBIconListGridLayoutConfiguration *layoutConfiguration; // ivar: _layoutConfiguration
@property (readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (readonly, nonatomic) NSUInteger rotatedLayoutClusterGridSizeClass;
@property (readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedIconGridSizeClasses;
@property (readonly, nonatomic) BOOL usesAlternateLayout;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)editingAnimationStrengthForGridSizeClass:(NSUInteger)arg0 ;
-(NSUInteger)numberOfColumnsForOrientation:(NSInteger)arg0 ;
-(NSUInteger)numberOfRowsForOrientation:(NSInteger)arg0 ;
-(id)accessoryBoldFont;
-(id)accessoryFont;
-(id)accessoryFontForContentSizeCategory:(id)arg0 options:(NSUInteger)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithLayoutConfiguration:(id)arg0 ;
-(id)labelFontForContentSizeCategory:(id)arg0 options:(NSUInteger)arg1 ;
-(id)labelVisualConfigurationForContentSizeCategory:(id)arg0 options:(NSUInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct SBIconImageInfo )iconImageInfoForGridSizeClass:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )layoutInsetsForOrientation:(NSInteger)arg0 ;
-(void)noteIcons:(id)arg0 didDropAtCoordinate:(struct SBIconCoordinate )arg1 inList:(id)arg2 ;


@end


#endif