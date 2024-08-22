// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDNANOREGISTRYPAIREDDEVICECAPABILITYPROVIDER_H
#define HDNANOREGISTRYPAIREDDEVICECAPABILITYPROVIDER_H

@protocol HDPairedDeviceCapabilityProviding, HDPairedDeviceCapabilityProvidingDelegate;

#import <Foundation/Foundation.h>


@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding>

 {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
}


@property (weak, nonatomic) NSObject<HDPairedDeviceCapabilityProvidingDelegate> *delegate; // ivar: _delegate


-(BOOL)isCapabilitySupported:(id)arg0 onDevice:(id)arg1 ;
-(id)activePairedDevice;
-(id)init;
-(id)isCapabilitySupportedOnActivePairedDevice:(id)arg0 error:(*id)arg1 ;
-(void)_pairedOrActiveDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)startListeningForUpdates;


@end


#endif