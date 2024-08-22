// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKDIAGNOSTICMANAGER_H
#define DKDIAGNOSTICMANAGER_H

@class NSString;
@protocol DKAssetResponder, DKAccessoryResponder, DKBrightnessResponder, DKVolumeHUDResponder, DKRequestViewControllerDelegate, DKUserAlertResponder, DKPluginReloadResponder, OS_dispatch_queue, DKViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "DKDiagnosticAllowList.h"
#import "DKExtensionDiscovery.h"
#import "DKDiagnosticRegistry.h"

@interface DKDiagnosticManager : NSObject <DKAssetResponder, DKAccessoryResponder, DKBrightnessResponder, DKVolumeHUDResponder, DKRequestViewControllerDelegate, DKUserAlertResponder, DKPluginReloadResponder>



@property (weak, nonatomic) NSObject<DKAccessoryResponder> *accessoryResponder; // ivar: _accessoryResponder
@property (nonatomic) DKDiagnosticAllowList *allowList; // ivar: _allowList
@property (weak, nonatomic) NSObject<DKAssetResponder> *assetResponder; // ivar: _assetResponder
@property (weak, nonatomic) NSObject<DKBrightnessResponder> *brightnessResponder;
@property (weak, nonatomic) NSObject<DKBrightnessResponder> *brightnessResponder; // ivar: _brightnessResponder
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) NSUInteger connectionRoute; // ivar: _connectionRoute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticListQueue; // ivar: _diagnosticListQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsManagerQueue; // ivar: _diagnosticsManagerQueue
@property (retain, nonatomic) DKExtensionDiscovery *discovery; // ivar: _discovery
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pluginReloadRequested; // ivar: _pluginReloadRequested
@property (retain, nonatomic) DKDiagnosticRegistry *registry; // ivar: _registry
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<DKUserAlertResponder> *userAlertResponder; // ivar: _userAlertResponder
@property (weak, nonatomic) NSObject<DKViewControllerDelegate> *viewControllerDelegate;
@property (weak, nonatomic) NSObject<DKViewControllerDelegate> *viewControllerDelegate; // ivar: _viewControllerDelegate
@property (weak, nonatomic) NSObject<DKVolumeHUDResponder> *volumeHUDResponder;
@property (weak, nonatomic) NSObject<DKVolumeHUDResponder> *volumeHUDResponder; // ivar: _volumeHUDResponder


-(BOOL)_checkPrerequisitesForDiagnostic:(id)arg0 parameters:(id)arg1 error:(*id)arg2 ;
-(BOOL)_freeSpaceAvailable:(id)arg0 ;
-(BOOL)_isDeviceLocked;
-(id)adapterForIdentifier:(id)arg0 ;
-(id)attributesForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 connectionRoute:(NSUInteger)arg1 ;
-(void)_reloadUpdatedPlugins;
-(void)beginDiagnosticWithIdentifier:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)cancelAllDiagnostics;
-(void)diagnosticsWithCompletion:(id)arg0 ;
-(void)displayAlertWithHeader:(id)arg0 message:(id)arg1 buttonStrings:(id)arg2 completion:(id)arg3 ;
-(void)enableVolumeHUD:(BOOL)arg0 ;
-(void)getAsset:(id)arg0 completion:(id)arg1 ;
-(void)request:(id)arg0 dismissViewController:(id)arg1 completion:(id)arg2 ;
-(void)request:(id)arg0 presentViewController:(id)arg1 completion:(id)arg2 ;
-(void)requestPluginReloadOnFinishWithCompletion:(id)arg0 ;
-(void)setScreenToBrightness:(float)arg0 animate:(BOOL)arg1 ;
-(void)unpairSessionAccessoryOnTestCompletion;
-(void)uploadAssets:(id)arg0 completion:(id)arg1 ;


@end


#endif