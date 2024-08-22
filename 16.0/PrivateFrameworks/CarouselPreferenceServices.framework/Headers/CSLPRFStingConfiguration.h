// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFSTINGCONFIGURATION_H
#define CSLPRFSTINGCONFIGURATION_H

@class NSString;
@protocol CSLPRFTwoWaySyncSettingDelegate, CSLPRFDepthAutoLaunchAppSettingDelegate, CSLPRFStingConfigurationProviding, CSLPRFStingConfigurationDelegate;

#import <Foundation/Foundation.h>

#import "CSLPRFTwoWaySyncSetting.h"
#import "CSLPRFDepthAutoLaunchAppSetting.h"

@interface CSLPRFStingConfiguration : NSObject <CSLPRFTwoWaySyncSettingDelegate, CSLPRFDepthAutoLaunchAppSettingDelegate, CSLPRFStingConfigurationProviding>

 {
    os_unfair_lock_s _lock;
    CSLPRFTwoWaySyncSetting *_stingSettings;
    CSLPRFDepthAutoLaunchAppSetting *_depthSetting;
}


@property (nonatomic) NSUInteger actionType;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CSLPRFStingConfigurationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActionNone;
@property (readonly, nonatomic) BOOL isActionSet;
@property (nonatomic) NSInteger source;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *workoutIdentifier;


-(id)_lock_settingsDictionary;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)depthAutoLaunchAppSettingDidUpdate:(id)arg0 ;
-(void)reset;
-(void)twoWaySyncSettingDidUpdate:(id)arg0 ;


@end


#endif