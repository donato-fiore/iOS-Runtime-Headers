// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDEVICEVOLUMECONTROLLER_H
#define PXDEVICEVOLUMECONTROLLER_H

@class NSString;
@protocol PXSettingsKeyObserver, OS_os_log;


#import "PXVolumeController.h"

@interface PXDeviceVolumeController : PXVolumeController <PXSettingsKeyObserver>

 {
    NSObject<OS_os_log> *_log;
    float _lastKnownVolume;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_initAsSharedInstance;
-(id)initWithIsInSilentMode:(BOOL)arg0 ;
-(void)_handleSystemVolumeChange:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif