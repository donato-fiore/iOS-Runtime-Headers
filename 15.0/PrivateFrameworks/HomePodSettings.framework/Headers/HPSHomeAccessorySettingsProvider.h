// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSHOMEACCESSORYSETTINGSPROVIDER_H
#define HPSHOMEACCESSORYSETTINGSPROVIDER_H

@class HMAccessorySettingsDataSource, NSString;
@protocol HMAccessorySettingsDataSourceDelegate, HPSHomeAccessorySettingsProviderDelegate;

#import <Foundation/Foundation.h>

#import "HPSettingSessionClient.h"

@interface HPSHomeAccessorySettingsProvider : NSObject <HMAccessorySettingsDataSourceDelegate>



@property (retain, nonatomic) HMAccessorySettingsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HPSHomeAccessorySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HPSettingSessionClient *hpsSessionClient; // ivar: _hpsSessionClient
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly) Class superclass;


-(id)hps_createAccessoryDataSource;
-(id)initWithDelegate:(id)arg0 clientConnection:(id)arg1 ;
-(void)__subscribeToAccessorySettingsForHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)_homeKitSettingsForEndPoint:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)_subscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)_unsubscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)accessorySettingsDataSource:(id)arg0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2 ;
-(void)clearDataSource;
-(void)hps_homeKitSettingsForEndPoint:(id)arg0 keyPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)hps_subscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)arg0 keyPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)hps_unsubscribeToHomeKitAccessorySettingsforEndPointIdentifier:(id)arg0 keyPath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif