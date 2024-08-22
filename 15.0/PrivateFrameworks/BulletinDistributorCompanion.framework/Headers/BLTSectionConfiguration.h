// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTSECTIONCONFIGURATION_H
#define BLTSECTIONCONFIGURATION_H

@class NSCondition, NSString;
@protocol BLTWatchKitAppListDelegate, BLTSectionConfigurationDelegate;


#import "BLTSectionConfigurationInternal.h"
#import "BLTWatchKitAppList.h"

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate>

 {
    BLTWatchKitAppList *_watchKitAppList;
    NSCondition *_watchKitAppListLoadedCondition;
    BOOL _watchKitAppListLoaded;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSectionConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)override:(id)arg0 appliesToConfigurationForSectionID:(id)arg1 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg0 ;
-(id)initWithWatchKitAppList:(id)arg0 ;
-(void)_waitForWatchKitAppListLoaded;
-(void)watchKitAppList:(id)arg0 added:(id)arg1 removed:(id)arg2 ;


@end


#endif