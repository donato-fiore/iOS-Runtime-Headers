// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCSMODULESETTINGSPROVIDER_H
#define CCSMODULESETTINGSPROVIDER_H

@class NSHashTable, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CCSModuleSettingsProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_source> *_configurationChangedSource;
    NSHashTable *_observers;
    NSArray *_orderedFixedModuleIdentifiers;
    NSArray *_orderedUserEnabledModuleIdentifiers;
    NSArray *_orderedUserEnabledFixedModuleIdentifiers;
    NSArray *_userDisabledModuleIdentifiers;
}


@property (readonly, copy, nonatomic) NSArray *orderedFixedModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *orderedUserEnabledFixedModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *orderedUserEnabledModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *userDisabledModuleIdentifiers;


+(BOOL)_continuousExposeEnabled;
+(id)_configurationDirectoryURL;
+(id)_configurationFileURL;
+(id)_defaultEnabledModuleOrder;
+(id)_defaultFixedModuleIdentifiers;
+(id)_defaultUserEnabledFixedModuleIdentifiers;
+(id)_defaultUserEnabledModuleIdentifiers;
+(id)_readSettings;
+(id)sharedProvider;
+(void)_writeOrderedIdentifiers:(id)arg0 userEnabledFixedIdentifiers:(id)arg1 userDisabledIdentifiers:(id)arg2 ;
+(void)initialize;
-(id)init;
-(void)_queue_handleConfigurationFileUpdate;
-(void)_queue_loadSettings;
-(void)_queue_runBlockOnListeners:(id)arg0 ;
-(void)_queue_saveSettings;
-(void)_queue_sendConfigurationFileUpdateMessageToObservers;
-(void)_queue_startMonitoringConfigurationUpdates;
-(void)_queue_stopMonitoringConfigurationUpdates;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)arg0 ;
-(void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg0 ;


@end


#endif