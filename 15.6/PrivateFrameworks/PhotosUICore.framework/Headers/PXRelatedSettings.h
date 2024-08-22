// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXRELATEDSETTINGS_H
#define PXRELATEDSETTINGS_H



#import "PXSettings.h"

@interface PXRelatedSettings : PXSettings

@property (nonatomic) BOOL enableDiversity; // ivar: _enableDiversity
@property (nonatomic) NSInteger implementation; // ivar: _implementation
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (nonatomic) BOOL passKeyAsset; // ivar: _passKeyAsset
@property (nonatomic) CGFloat polaroidFadeDuration; // ivar: _polaroidFadeDuration
@property (nonatomic) NSInteger preferredInitialNumberOfEntriesDisplayed; // ivar: _preferredInitialNumberOfEntriesDisplayed
@property (nonatomic) BOOL simulateSlowFetches; // ivar: _simulateSlowFetches


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif