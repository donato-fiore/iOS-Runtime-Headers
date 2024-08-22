// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTELEPHONYINFO_H
#define GEOTELEPHONYINFO_H

@class CoreTelephonyClient, NSConditionLock, NSString;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOTelephonyInfo : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

 {
    *__CTServerConnection _telephonyConnection;
    CoreTelephonyClient *_telephonyClient;
    NSConditionLock *_carrierLock;
    NSConditionLock *_deviceAuthLock;
    NSConditionLock *_mapsAuthLock;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    NSString *_carrier;
    BOOL _deviceAuthorized;
    BOOL _mapsAuthorized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasCellularCapability;
+(id)sharedInfo;
-(id)cellularCarrierIfAvailable;
-(id)init;
-(id)isDeviceAuthorizedForCellularIfAvailable;
-(id)isMapsAuthorizedForCellularIfAvailable;
-(int)cellularDataStateIfAvailable;
-(void)_updateMapsAuthed;
-(void)dataSettingsChanged:(id)arg0 ;
-(void)isMapsAuthorizedForCellular:(id)arg0 result:(id)arg1 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)setupClient;


@end


#endif