// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRIRREGULARRHYTHMNOTIFICATIONSBRIDGESETTINGS_H
#define HKHRIRREGULARRHYTHMNOTIFICATIONSBRIDGESETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HKHRIrregularRhythmNotificationsBridgeFooter.h"

@interface HKHRIrregularRhythmNotificationsBridgeSettings : NSObject

@property (readonly, nonatomic) BOOL areNotificationsOn; // ivar: _areNotificationsOn
@property (readonly, copy, nonatomic) HKHRIrregularRhythmNotificationsBridgeFooter *footer; // ivar: _footer
@property (readonly, copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (readonly, nonatomic) BOOL isSettingHidden; // ivar: _isSettingHidden
@property (readonly, nonatomic) BOOL isUserInteractionEnabled; // ivar: _isUserInteractionEnabled
@property (readonly, nonatomic) BOOL shouldLinkToOnboarding; // ivar: _shouldLinkToOnboarding


-(id)initWithSettingHidden:(BOOL)arg0 notificationsOn:(BOOL)arg1 shouldLinkToOnboarding:(BOOL)arg2 userInteractionEnabled:(BOOL)arg3 headerText:(id)arg4 footer:(id)arg5 ;


@end


#endif