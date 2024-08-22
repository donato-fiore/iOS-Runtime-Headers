// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYSTEMSETTINGSRELAY_H
#define SYSTEMSETTINGSRELAY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SystemSettingsRelay : NSObject

@property (readonly) BOOL airplaneModeSwitchEnabled; // ivar: _airplaneModeSwitchEnabled
@property (readonly) BOOL cellDataSwitchEnabled; // ivar: _cellDataSwitchEnabled
@property (readonly) BOOL noBackhaulEnabled; // ivar: _noBackhaulEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) BOOL rnfEnabled; // ivar: _rnfEnabled
@property (readonly) BOOL wifiEnabled; // ivar: _wifiEnabled


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)defaultRelay;
-(id)init;


@end


#endif