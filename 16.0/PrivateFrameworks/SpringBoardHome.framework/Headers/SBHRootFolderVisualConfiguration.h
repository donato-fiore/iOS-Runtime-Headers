// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHROOTFOLDERVISUALCONFIGURATION_H
#define SBHROOTFOLDERVISUALCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHRootFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

 {
    SBRootFolderViewPageManagementLayoutMetrics _pageManagement1x1LayoutMetrics;
    SBRootFolderViewPageManagementLayoutMetrics _pageManagement2x1LayoutMetrics;
    SBRootFolderViewPageManagementLayoutMetrics _pageManagement2x2LayoutMetrics;
    SBRootFolderViewPageManagementLayoutMetrics _pageManagement3x2LayoutMetrics;
    SBRootFolderViewPageManagementLayoutMetrics _pageManagement3x3LayoutMetrics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dockBackgroundViewCornerRadius; // ivar: _dockBackgroundViewCornerRadius
@property (nonatomic) UIEdgeInsets dockBackgroundViewInsets; // ivar: _dockBackgroundViewInsets
@property (nonatomic) UIEdgeInsets dockListViewInsets; // ivar: _dockListViewInsets
@property (nonatomic) CGFloat dockViewHeight; // ivar: _dockViewHeight
@property (nonatomic) NSDirectionalEdgeInsets editModeButtonContentEdgeInsets; // ivar: _editModeButtonContentEdgeInsets
@property (nonatomic) UIOffset editModeButtonLayoutOffset; // ivar: _editModeButtonLayoutOffset
@property (nonatomic) CGSize editModeButtonSize; // ivar: _editModeButtonSize
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat idleTextVerticalOffset; // ivar: _idleTextVerticalOffset
@property (nonatomic) CGSize pageControlCustomPadding; // ivar: _pageControlCustomPadding
@property (nonatomic) CGSize pageControlFrameInset; // ivar: _pageControlFrameInset
@property (nonatomic) CGFloat pageControlVerticalOffset; // ivar: _pageControlVerticalOffset
@property (nonatomic) CGSize pageManagementFocusModeOptionsButtonSize; // ivar: _pageManagementFocusModeOptionsButtonSize
@property (nonatomic) CGFloat pageManagementPageCheckboxDiameter; // ivar: _pageManagementPageCheckboxDiameter
@property (nonatomic) CGFloat pageManagementPageCheckboxVerticalMargin; // ivar: _pageManagementPageCheckboxVerticalMargin
@property (nonatomic) CGFloat scrollAccessoryVerticalOffsetAdjustmentForAuxiliaryView; // ivar: _scrollAccessoryVerticalOffsetAdjustmentForAuxiliaryView
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct SBRootFolderViewPageManagementLayoutMetrics )pageManagementLayoutMetricsForLayoutConfiguration:(NSInteger)arg0 ;
-(void)setPageManagementLayoutMetrics:(struct SBRootFolderViewPageManagementLayoutMetrics )arg0 forLayoutConfiguration:(NSInteger)arg1 ;


@end


#endif