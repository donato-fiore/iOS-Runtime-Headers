// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAIRDROPDISCOVERYCONTROLLER_H
#define SFAIRDROPDISCOVERYCONTROLLER_H

@class UIAlertController, SFWirelessSettingsController, NSString;
@protocol UIActionSheetDelegate, SFWirelessSettingsControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, SFAirDropDiscoveryControllerDelegate;

#import <Foundation/Foundation.h>


@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate, SFWirelessSettingsControllerDelegate>

 {
    BOOL _isVisible;
    BOOL _isLegacyDevice;
    BOOL _isLegacyModeEnabled;
    BOOL _isLegacyModeSettable;
    *__SFOperation _controller;
    UIAlertController *_alertController;
    SFWirelessSettingsController *_settingsController;
    NSInteger _discoverableMode;
}


@property (weak) NSObject<SFAirDropDiscoveryAlertControllerDelegate> *alertControllerDelegate; // ivar: _alertControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SFAirDropDiscoveryControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSInteger discoverableMode;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isLegacyDevice) BOOL legacyDevice;
@property (getter=isLegacyModeEnabled) BOOL legacyModeEnabled;
@property (readonly, getter=isLegacyModeSettable) BOOL legacyModeSettable;
@property (readonly) Class superclass;
@property (readonly, getter=isVisible) BOOL visible;


-(NSInteger)operationDiscoverableModeToInteger:(id)arg0 ;
-(id)discoverableModeToString:(NSInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(void)handleOperationCallback:(struct __SFOperation *)arg0 event:(NSInteger)arg1 withResults:(id)arg2 ;
-(void)invalidate;
-(void)updateAlertControllerTitle;
-(void)wirelessSettingsDidChange:(id)arg0 ;


@end


#endif