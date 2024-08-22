// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESUISETTINGS_H
#define PXMESSAGESUISETTINGS_H

@class NSArray, NSString;


#import "PXSettings.h"

@interface PXMessagesUISettings : PXSettings {
    NSArray *_cachedHorizontalOffsets;
}


@property (nonatomic) BOOL applyRotationToFirstAndLast; // ivar: _applyRotationToFirstAndLast
@property (nonatomic) BOOL aspectTilesEnabled; // ivar: _aspectTilesEnabled
@property (nonatomic) BOOL bestCropRectEnabled; // ivar: _bestCropRectEnabled
@property (nonatomic) CGFloat comfortableFitPercentage; // ivar: _comfortableFitPercentage
@property (nonatomic) NSInteger dataSourceType; // ivar: _dataSourceType
@property (nonatomic) BOOL enableDebugTapbacksGrid; // ivar: _enableDebugTapbacksGrid
@property (nonatomic) BOOL enableDebugTapbacksStack; // ivar: _enableDebugTapbacksStack
@property (nonatomic) CGFloat gridShadowAlpha; // ivar: _gridShadowAlpha
@property (nonatomic) CGFloat gridShadowBlurRadius; // ivar: _gridShadowBlurRadius
@property (nonatomic) CGFloat gridShadowXOffset; // ivar: _gridShadowXOffset
@property (nonatomic) CGFloat gridShadowYOffset; // ivar: _gridShadowYOffset
@property (copy, nonatomic) NSString *horizontalOffsetString; // ivar: _horizontalOffsetString
@property (readonly, nonatomic) NSArray *horizontalOffsets;
@property (nonatomic) NSInteger maxColumns; // ivar: _maxColumns
@property (nonatomic) NSInteger minColumns; // ivar: _minColumns
@property (nonatomic) CGFloat minItemSize; // ivar: _minItemSize
@property (nonatomic) CGFloat normalizedPageWidth; // ivar: _normalizedPageWidth
@property (nonatomic) CGFloat normalizedStackSizeTransform; // ivar: _normalizedStackSizeTransform
@property (nonatomic) CGFloat normalizedStackVerticalOffset; // ivar: _normalizedStackVerticalOffset
@property (nonatomic) NSInteger pagingBehavior; // ivar: _pagingBehavior
@property (nonatomic) CGFloat pagingVelocityThreshold; // ivar: _pagingVelocityThreshold
@property (nonatomic) BOOL renderWithCA; // ivar: _renderWithCA
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic) CGFloat stackShadowAlpha; // ivar: _stackShadowAlpha
@property (nonatomic) CGFloat stackShadowBlurRadius; // ivar: _stackShadowBlurRadius
@property (nonatomic) CGFloat stackShadowYOffset; // ivar: _stackShadowYOffset
@property (nonatomic) NSUInteger stackedItemsCount; // ivar: _stackedItemsCount
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration
@property (nonatomic) NSUInteger transitionItemsCount; // ivar: _transitionItemsCount
@property (nonatomic) CGFloat transitionSpringDamping; // ivar: _transitionSpringDamping
@property (nonatomic) CGFloat transitionSpringVelocity; // ivar: _transitionSpringVelocity
@property (nonatomic) CGFloat verticalContentInsets; // ivar: _verticalContentInsets


+(id)_assetCollectionItemProvider;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)transientProperties;
+(void)_showStackBalloonViewWithNavigationController:(id)arg0 ;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif