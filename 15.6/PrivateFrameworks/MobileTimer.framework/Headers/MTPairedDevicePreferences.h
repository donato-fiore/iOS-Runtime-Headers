// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPAIREDDEVICEPREFERENCES_H
#define MTPAIREDDEVICEPREFERENCES_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface MTPairedDevicePreferences : NSObject

@property (retain, nonatomic) NPSManager *npsManager; // ivar: _npsManager
@property (readonly, nonatomic) BOOL pushAlertsEnabled; // ivar: _pushAlertsEnabled


+(id)sharedInstance;
-(BOOL)_isPushAlertsEnabledInPreferences;
-(BOOL)isPushAlertsEnabled;
-(id)init;
-(void)_handlePrefsChanged;
-(void)_notifyClientsOfChange;
-(void)dealloc;


@end


#endif