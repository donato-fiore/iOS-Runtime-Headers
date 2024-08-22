// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMEMORIESFEEDSETTINGS_H
#define PXMEMORIESFEEDSETTINGS_H



#import "PXSettings.h"

@interface PXMemoriesFeedSettings : PXSettings

@property (nonatomic) CGFloat additionalContentThreshold; // ivar: _additionalContentThreshold
@property (nonatomic) BOOL alwaysShowOnboarding; // ivar: _alwaysShowOnboarding
@property (nonatomic) NSInteger dataSourceType; // ivar: _dataSourceType
@property (nonatomic) BOOL disableRoundedOverlays; // ivar: _disableRoundedOverlays
@property (nonatomic) BOOL displayContentDuringGraphRebuild; // ivar: _displayContentDuringGraphRebuild
@property (nonatomic) NSInteger favoriteMemoriesSortOrder; // ivar: _favoriteMemoriesSortOrder
@property (nonatomic) BOOL forceReloadAfterRefresh; // ivar: _forceReloadAfterRefresh
@property (nonatomic) NSUInteger groupsPerBatch; // ivar: _groupsPerBatch
@property (nonatomic) CGFloat memoryGroupingInterval; // ivar: _memoryGroupingInterval
@property (nonatomic) NSInteger memoryGroupingMethod; // ivar: _memoryGroupingMethod
@property (nonatomic) BOOL rankMemoriesByRelevanceScore; // ivar: _rankMemoriesByRelevanceScore
@property (nonatomic) NSInteger sharingBehavior; // ivar: _sharingBehavior
@property (nonatomic) BOOL useSlowAnimations; // ivar: _useSlowAnimations


+(id)_resetRejectedMemories;
+(id)settingsControllerModule;
+(id)sharedInstance;
-(NSInteger)_defaultDataSourceType;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif