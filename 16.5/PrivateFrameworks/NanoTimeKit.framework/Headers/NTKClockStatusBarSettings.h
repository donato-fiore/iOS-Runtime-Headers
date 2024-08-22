// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCLOCKSTATUSBARSETTINGS_H
#define NTKCLOCKSTATUSBARSETTINGS_H

@class NPSManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKClockStatusBarSettings : NSObject {
    NPSManager *_npsManager;
    BOOL _notificationsIndicatorEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}




+(id)sharedInstance;
-(BOOL)_isNotificationsIndicatorEnabledInPreferences;
-(BOOL)isNotificationsIndicatorEnabled;
-(id)init;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(void)dealloc;
-(void)setNotificationsIndicatorEnabled:(BOOL)arg0 ;


@end


#endif