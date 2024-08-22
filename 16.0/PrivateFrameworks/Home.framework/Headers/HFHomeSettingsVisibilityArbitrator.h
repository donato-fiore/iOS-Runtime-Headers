// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFHOMESETTINGSVISIBILITYARBITRATOR_H
#define HFHOMESETTINGSVISIBILITYARBITRATOR_H

@class NSString;
@protocol HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger homeAppInstallState; // ivar: _homeAppInstallState
@property (nonatomic) int homeKitPreferencesChangeNotifyToken; // ivar: _homeKitPreferencesChangeNotifyToken
@property (nonatomic) BOOL homesConfigured; // ivar: _homesConfigured
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visibilityState; // ivar: _visibilityState
@property (copy, nonatomic) id *visibilityStateChangeHandler; // ivar: _visibilityStateChangeHandler


+(id)homeManagerConfigurationWithExpandedOptions:(BOOL)arg0 ;
+(void)initialize;
-(id)init;
-(void)_queryHomeAppInstallStateWithCompletion:(id)arg0 ;
-(void)_reloadVisibilityStateIncludingInstallState:(BOOL)arg0 ;
-(void)_startListeningForManagedConfigurationChanges;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)homeManager:(id)arg0 didUpdateThisDeviceIsResidentCapable:(BOOL)arg1 ;
-(void)reloadVisibilityState;


@end


#endif