// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLCAPABILITIESMANAGER_H
#define TLCAPABILITIESMANAGER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface TLCapabilitiesManager : NSObject {
    BOOL _isRingtoneStoreAvailable;
    BOOL _isAlertToneStoreAvailable;
    NSDictionary *_deviceCodeNameSimplicationMapping;
}


@property (readonly, nonatomic, getter=isAlertToneStoreAvailable) BOOL alertToneStoreAvailable;
@property (readonly, nonatomic) NSString *deviceCodeName;
@property (readonly, nonatomic) BOOL hasSynchronizedEmbeddedVibrationsCapability;
@property (readonly, nonatomic) BOOL hasSynchronizedVibrationsCapability;
@property (readonly, nonatomic) BOOL hasUserGeneratedVibrationsCapability;
@property (readonly, nonatomic) BOOL hasVibratorCapability;
@property (readonly, nonatomic, getter=isHomePod) BOOL homePod;
@property (readonly, nonatomic, getter=isRingtoneStoreAvailable) BOOL ringtoneStoreAvailable;
@property (readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property (readonly, nonatomic) BOOL wantsModernDefaultRingtone;


+(id)sharedCapabilitiesManager;
-(BOOL)_hasTelephonyCapability;
-(id)init;
-(void)_checkRingtoneStoreAvailability;
-(void)_handleStoreAvailableItemKindsChangedNotification:(id)arg0 ;
-(void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif