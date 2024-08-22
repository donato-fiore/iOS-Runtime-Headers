// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFHOMEKITACCESSORYSETTINGSDATASOURCE_H
#define HFHOMEKITACCESSORYSETTINGSDATASOURCE_H

@class HMAccessorySettingsDataSource, NSString, NSHashTable;
@protocol HMAccessorySettingsDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface HFHomeKitAccessorySettingsDataSource : NSObject <HMAccessorySettingsDataSourceDelegate>



@property (retain, nonatomic) HMAccessorySettingsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)hf_defaultSettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 ;
-(id)hf_localizedTitleForKeyPath:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 ;
-(void)accessorySettingsDataSource:(id)arg0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)hf_fetchAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)hf_subscribeToAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateSettingValue:(id)arg0 forKeyPath:(id)arg1 accessoryIdentifier:(id)arg2 ;


@end


#endif