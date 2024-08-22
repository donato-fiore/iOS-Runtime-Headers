// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFFEATUREMANAGER_H
#define SFFEATUREMANAGER_H

@class WBUFeatureManager;



@interface SFFeatureManager : WBUFeatureManager

@property (readonly, nonatomic) BOOL canUseLoweredCapsule;
@property (readonly, nonatomic) NSInteger preferredCapsuleLayoutStyle;
@property (readonly, nonatomic) BOOL showRectangularTabsInSeparateBar;
@property (nonatomic) BOOL tabDocumentCanHideToolbar; // ivar: _tabDocumentCanHideToolbar
@property (readonly, nonatomic) BOOL usesCapsuleInCompactPad;
@property (readonly, nonatomic) BOOL usesFormatMenuInUnifiedTabBar;


+(id)sharedFeatureManager;
-(id)init;


@end


#endif