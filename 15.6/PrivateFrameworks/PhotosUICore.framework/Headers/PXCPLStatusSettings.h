// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCPLSTATUSSETTINGS_H
#define PXCPLSTATUSSETTINGS_H

@class NSNumber;


#import "PXSettings.h"

@interface PXCPLStatusSettings : PXSettings

@property (nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts; // ivar: _cloudQuotaOfferIncludeAssetCounts
@property (nonatomic) NSInteger cloudQuotaOfferLevel; // ivar: _cloudQuotaOfferLevel
@property (retain, nonatomic) NSNumber *resumeOverrideHours; // ivar: _resumeOverrideHours


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif