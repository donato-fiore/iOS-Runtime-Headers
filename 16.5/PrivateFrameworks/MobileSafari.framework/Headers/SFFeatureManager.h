// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFFEATUREMANAGER_H
#define SFFEATUREMANAGER_H

@class WBUFeatureManager;



@interface SFFeatureManager : WBUFeatureManager

@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable; // ivar: _addToHomeScreenAvailable
@property (readonly, nonatomic) BOOL canUseLoweredCapsule;
@property (readonly, nonatomic) NSInteger preferredCapsuleLayoutStyle;
@property (readonly, nonatomic) BOOL showRectangularTabsInSeparateBar;
@property (readonly, nonatomic, getter=isSiriLinkEnabled) BOOL siriLinkEnabled;
@property (nonatomic) BOOL tabDocumentCanHideToolbar; // ivar: _tabDocumentCanHideToolbar
@property (readonly, nonatomic) BOOL usesFormatMenuInUnifiedTabBar;
@property (readonly, nonatomic, getter=isVerticalTabsEnabled) BOOL verticalTabsEnabled;


+(BOOL)supportsWebpageStatusBar;
+(id)sharedFeatureManager;
-(id)init;
-(void)_updateAccessLevel;


@end


#endif