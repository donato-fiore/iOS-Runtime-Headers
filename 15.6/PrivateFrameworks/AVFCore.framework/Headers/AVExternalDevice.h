// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVEXTERNALDEVICE_H
#define AVEXTERNALDEVICE_H

@class NSString, NSData, NSArray, NSDictionary;
@protocol AVExternalDeviceDelegate;

#import <Foundation/Foundation.h>

#import "AVExternalDeviceInternal.h"

@interface AVExternalDevice : NSObject {
    AVExternalDeviceInternal *_externalDevice;
}


@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSData *MFiCertificateSerialNumber;
@property (readonly, nonatomic) NSData *OEMIcon;
@property (readonly, nonatomic) NSString *OEMIconLabel;
@property (readonly, nonatomic) BOOL OEMIconVisible;
@property (readonly, nonatomic) NSArray *OEMIcons;
@property (nonatomic) NSObject<AVExternalDeviceDelegate> *delegate;
@property (readonly, nonatomic) NSInteger electronicTollCollection;
@property (readonly, nonatomic) NSArray *externalDeviceHIDs;
@property (readonly, nonatomic) BOOL limitedUI;
@property (readonly, nonatomic) NSArray *limitedUIElements;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger navigationAidedDriving;
@property (readonly, nonatomic) BOOL nightMode;
@property (readonly, nonatomic) BOOL nightModeSupported;
@property (readonly, nonatomic) BOOL ownsScreen;
@property (readonly, nonatomic) BOOL ownsTurnByTurnNavigation;
@property (readonly, nonatomic) BOOL recognizingSpeech;
@property (readonly, nonatomic) BOOL rightHandDrive;
@property (readonly, nonatomic) NSArray *screenIDs;
@property (readonly, nonatomic) NSDictionary *screenInputCapabilities;
@property (readonly, nonatomic) NSDictionary *screenPrimaryInputDevices;
@property (readonly, nonatomic) NSDictionary *screenSafeAreas;
@property (readonly, nonatomic) NSDictionary *screenViewAreas;
@property (readonly, nonatomic) NSArray *supportedFeatures;
@property (readonly, nonatomic) NSInteger transportType;


+(id)currentCarPlayExternalDevice;
+(id)currentExternalDevice;
+(id)sharedLocalDevice;
-(id)_figEndpointPropertyValueForKey:(struct __CFString *)arg0 ;
-(id)_screenInfo;
-(id)_weakReference;
-(id)borrowScreenForClient:(id)arg0 reason:(id)arg1 ;
-(id)externalDeviceHIDWithUUID:(id)arg0 ;
-(id)init;
-(id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg0 ;
-(id)requestTurnByTurnNavigationOwnership;
-(struct OpaqueFigEndpoint *)figEndpoint;
-(void)_triggerFakeNotificationNamed:(id)arg0 withPayload:(id)arg1 ;
-(void)dealloc;
-(void)requestCarUI;
-(void)requestCarUIForURL:(id)arg0 ;
-(void)requestCarUIForURL:(id)arg0 withUUID:(id)arg1 ;
-(void)requestViewArea:(NSInteger)arg0 forScreenID:(id)arg1 ;
-(void)sendCommand:(id)arg0 withParameters:(id)arg1 ;
-(void)takeScreenForClient:(id)arg0 reason:(id)arg1 ;
-(void)takeScreenForConnection;


@end


#endif