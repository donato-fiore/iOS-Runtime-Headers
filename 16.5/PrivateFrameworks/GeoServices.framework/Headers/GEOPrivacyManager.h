// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPRIVACYMANAGER_H
#define GEOPRIVACYMANAGER_H


#import <Foundation/Foundation.h>


@interface GEOPrivacyManager : NSObject {
    BOOL _lastKnownLocationServicesEnabled;
    BOOL _hasLastKnownLocationServicesEnabled;
}


@property (readonly, nonatomic) BOOL hasFiredCallHistoryRecentsClearedNotification; // ivar: _hasFiredCallHistoryRecentsClearedNotification
@property (readonly, nonatomic) BOOL hasFiredLocationServicesDisabledNotification; // ivar: _hasFiredLocationServicesDisabledNotification
@property (readonly, nonatomic) BOOL hasFiredResetPrivacyWarningsNotification; // ivar: _hasFiredResetPrivacyWarningsNotification


+(id)sharedManager;
-(id)init;
-(void)_fireRecentsClearedNotification;
-(void)_fireResetLocationAndPrivacyNotification;
-(void)_locationServicesStateChanged;
-(void)dealloc;


@end


#endif