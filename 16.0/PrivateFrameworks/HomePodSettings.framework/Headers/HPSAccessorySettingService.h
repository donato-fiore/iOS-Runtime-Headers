// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HPSACCESSORYSETTINGSERVICE_H
#define HPSACCESSORYSETTINGSERVICE_H

@class NSDictionary, NSXPCConnection;
@protocol HPSAccessorySettingServiceDelegate, HPSAccessorySettingServiceConnectionProvider;

#import <Foundation/Foundation.h>


@interface HPSAccessorySettingService : NSObject

@property (weak, nonatomic) NSObject<HPSAccessorySettingServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDictionary *heldAssertions;
@property (readonly, nonatomic) NSDictionary *keyPaths;
@property (nonatomic, getter=isMigrationToHH2Complete) BOOL migrationToHH2Complete; // ivar: _migrationToHH2Complete
@property (nonatomic) int notifyRegisterToken; // ivar: _notifyRegisterToken
@property (readonly, nonatomic, getter=hasOptedToHH2) BOOL optedToHH2;
@property (readonly, nonatomic) NSObject<HPSAccessorySettingServiceConnectionProvider> *provider; // ivar: _provider
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
-(id)initWithConnectionProvider:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)settingForKeyPath:(id)arg0 ;
-(id)updateSettingForKeyPath:(id)arg0 setting:(id)arg1 ;
-(id)updateSettingWithoutSynchronizationForKeyPath:(id)arg0 setting:(id)arg1 ;
-(void)_handleConnectionInterrupted;
-(void)aggregateAllSettingsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)fetchAllSettingsWithCompletionHandler:(id)arg0 ;
-(void)getAllSettingsWithCompletionHandler:(id)arg0 ;
-(void)getKeyPathsWithCompletionHandler:(id)arg0 ;
-(void)heldAssertionsWithCompletionHandler:(id)arg0 ;
-(void)mergeSettingsWithCompletionHandler:(id)arg0 ;
-(void)notifyDidUpdateSetting:(id)arg0 forKeyPath:(id)arg1 ;
-(void)optedToHH2WithCompletionHandler:(id)arg0 ;
-(void)overrideOptedToHH2State:(BOOL)arg0 ;
-(void)reconcileSettingsWithCompletionHandler:(id)arg0 ;
-(void)settingForKeyPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)settingsForKeyPaths:(id)arg0 completionHandler:(id)arg1 ;
-(void)startXPCConnection;
-(void)updateSettingForKeyPath:(id)arg0 setting:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateSettingWithoutSynchronizationForKeyPath:(id)arg0 setting:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif