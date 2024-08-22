// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFDEPTHAUTOLAUNCHAPPSETTING_H
#define CSLPRFDEPTHAUTOLAUNCHAPPSETTING_H

@class NSString;
@protocol CSLPRFTwoWaySyncSettingDelegate, CSLPRFSessionAutoLaunchSetting, CSLPRFDepthAutoLaunchAppSettingDelegate;

#import <Foundation/Foundation.h>

#import "CSLPRFTwoWaySyncSetting.h"

@interface CSLPRFDepthAutoLaunchAppSetting : NSObject <CSLPRFTwoWaySyncSettingDelegate, CSLPRFSessionAutoLaunchSetting>

 {
    os_unfair_lock_s _lock;
}


@property (copy) NSString *bundleID;
@property (retain, nonatomic) CSLPRFTwoWaySyncSetting *bundleIDSetting; // ivar: _bundleIDSetting
@property NSUInteger changeSource;
@property (retain, nonatomic) CSLPRFTwoWaySyncSetting *changeSourceSetting; // ivar: _changeSourceSetting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CSLPRFDepthAutoLaunchAppSettingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) CSLPRFTwoWaySyncSetting *enabledSetting; // ivar: _enabledSetting
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_commonInit;
-(void)_withLock:(id)arg0 ;
-(void)twoWaySyncSettingDidUpdate:(id)arg0 ;


@end


#endif